#include "mainwindow.h"
#include "ui_mainwindow.h"

QVector<QPair<QString,QString>> MainVocab;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::WindowTitleHint | Qt::WindowMinimizeButtonHint);

    QMessageBox msg;
    QIcon ic(":/Icons/Icons/1469216258_help_index.png");
    msg.setWindowIcon(ic);
    msg.setWindowTitle(" Повідомлення.");
    msg.setText("Програма використовує вбудований\nсловник. Якщо ви бажаєте завантажити\nвласний словник, введіть"
                 " його повне\nім'я у вкладці \"Налаштування\".");
    msg.setIconPixmap(QPixmap(":/Icons/Icons/1469216258_help_index.png"));
    msg.exec();

    QRegExp PathFile("[іїа-яА-Яa-zA-Z0-9/:_.-]{3,150}");
    ui->Path_vocab->setValidator(new QRegExpValidator(PathFile,this));
    QRegExp Search("[іїа-яА-Яa-zA-Z`!-]{1,100}");
    ui->lineEdit->setValidator(new QRegExpValidator(Search,this));
    QRegExp Original("[a-zA-Z`!- ]{1,100}");
    ui->original_2->setValidator(new QRegExpValidator(Original,this));
    QRegExp Translated("[іїА-Яа-я`!- ]{1,100}");
    ui->translated_2->setValidator(new QRegExpValidator(Translated,this));

    MainWindow::UpdateVoca();
    QObject::connect(ui->updatevoca,SIGNAL(clicked()),this,SLOT(UpdateVoca()));
    QObject::connect(ui->exit,SIGNAL(clicked()),this,SLOT(Exit()));
    QObject::connect(ui->allPhrases,SIGNAL(clicked()),this,SLOT(Displaylist()));
    QObject::connect(ui->FindPhrase,SIGNAL(clicked()),this,SLOT(FindPhrase()));
    QObject::connect(ui->add,SIGNAL(clicked()),this,SLOT(AddVoca()));
    QObject::connect(ui->reset,SIGNAL(clicked()),this,SLOT(ResetAddVoca()));
    QObject::connect(ui->next,SIGNAL(clicked()),this,SLOT(TranslationSET()));
    QObject::connect(ui->clear,SIGNAL(clicked()),this,SLOT(ResetTrans()));
    QObject::connect(ui->check,SIGNAL(clicked()),this,SLOT(TranslationCHECK()));
    QObject::connect(ui->original,SIGNAL(textChanged()),this,SLOT(OnOffCheckButton()));
    QObject::connect(ui->translated,SIGNAL(textChanged()),this,SLOT(OnOffCheckButton()));
    QObject::connect(ui->allphrase,SIGNAL(toggled(bool)),ui->warning_lbl,SLOT(setEnabled(bool)));
    QObject::connect(ui->word_input_delete,SIGNAL(textEdited(QString)),this,SLOT(FindTranslation(QString)));
    QObject::connect(ui->generate,SIGNAL(clicked()),this,SLOT(CodeGeneration()));
    QObject::connect(ui->confirmcode,SIGNAL(textEdited(QString)),this,SLOT(EnableConfirmation()));
    QObject::connect(ui->confirm,SIGNAL(clicked()),this,SLOT(ConfirmDELETE()));

    ui->confirm->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ResetDelete()
{
    ui->word_input_delete->setText("");
    ui->find_translation_lbl->setText("  Програма виявила такий переклад цього слова :");
    ui->code_field_lbl->setText("");
    ui->confirmcode->setText("");
}

void MainWindow::ConfirmDELETE()
{
    if(ui->onephrase->isChecked())
    {
        QString eq = ui->word_input_delete->text();
        int size = MainVocab.size()-1;
        for(;size>=0;size--)
        {
            if(MainVocab[size].first == eq || MainVocab[size].second == eq)
            {
                MainVocab.erase(MainVocab.begin()+size);
                ExportData();
                ResetDelete();
                Displaylist();
                UpdateVoca();
                return;
            }
        }
        QMessageBox msg;
        QIcon ic(":/Icons/Icons/1469216258_help_index.png");
        msg.setWindowIcon(ic);
        msg.setIconPixmap(QPixmap(":/Icons/Icons/1469216258_help_index.png"));
        msg.setText("Ця фраза відсутня в словнику !\n Перевірте правильність вводу.");
        msg.exec();
    }
    if(ui->allphrase->isChecked())
    {
        MainVocab.clear();
        ExportData();
        ResetDelete();
        Displaylist();
        UpdateVoca();
        return;
    }

}

void MainWindow::EnableConfirmation()
{
    if(ui->code_field_lbl->text().isEmpty() || ui->confirmcode->text().isEmpty())
        ui->confirm->setEnabled(false);
    else if((ui->code_field_lbl->text() == ui->confirmcode->text()) && (!ui->word_input_delete->text().isEmpty() || ui->allphrase->isChecked()))
                ui->confirm->setEnabled(true);
    else ui->confirm->setEnabled(false);
}

void MainWindow::CodeGeneration()
{
    srand(time(NULL));
    QString code = "";
    int len = rand()%3+6;
    for(int i=0;i<len;i++)
    {
        int way = rand()%3;
        srand(time(NULL) * i-len);
        switch(way)
        {
        case 0: code[i] = char(rand()%10+48); break;
        case 1: code[i] = char(rand()%26+65); break;
        case 2: code[i] = char(rand()%26+97); break;
        }
    }
    srand(len*time(NULL));
    int r = rand()%256,g=rand()%256,b=rand()%256;
    int txt_r = rand()%256,txt_g=rand()%256,txt_b=rand()%256;

    std::stringstream Stream;
    Stream << "text-decoration: line-through;\nfont: 75 10pt \"Segoe UI\";\nbackground-color: rgb(" << r << ',' << g << ',' << b <<");\ncolor: rgb(" << txt_r << ',' << txt_g << ',' << txt_b << ");";

    std::string style = "";
    style += Stream.str();
    QString ready = QString::fromStdString(style);

    ui->code_field_lbl->setStyleSheet(ready);
    ui->code_field_lbl->setText(code);
}

void MainWindow::FindTranslation(QString example)
{
    if(((ui->code_field_lbl->text() == ui->confirmcode->text()) && !ui->code_field_lbl->text().isEmpty()) && !ui->word_input_delete->text().isEmpty())
                    ui->confirm->setEnabled(true);
      else ui->confirm->setEnabled(false);

    example = example.toUpper();
    int size = MainVocab.size()-1;
    for(;size>=0;size--)
    {
        if((MainVocab[size].first.toUpper()).indexOf(example) != -1)
        {
            ui->find_translation_lbl->setText("  Програма виявила такий переклад цього слова :" + MainVocab[size].second + "\n  (Правильне написання: " + MainVocab[size].first +")");
            return;
        }
        else if((MainVocab[size].second.toUpper()).indexOf(example) != -1)
        {
            ui->find_translation_lbl->setText("  Програма виявила такий переклад цього слова :" + MainVocab[size].first+ "\n  (Правильне написання: " + MainVocab[size].second +")");
            return;
        }
        else
        {
            ui->find_translation_lbl->setText("  Програма не виявила такого слова .");
        }
    }
     ui->find_translation_lbl->setText("  Програма виявила такий переклад цього слова :");
}

void MainWindow::OnOffCheckButton()
{
    QString text_orig = ui->original->toPlainText();
    QString text_trans = ui->translated->toPlainText();

    if(text_orig.isEmpty() && !FindAnyAlpha(text_orig)) ui->check->setEnabled(false);
    else if(text_trans.isEmpty() && !FindAnyAlpha(text_trans)) ui->check->setEnabled(false);
    else ui->check->setEnabled(true);
}

void MainWindow::TranslationCHECK()
{
     QString original, translated = "";
     original = ui->original->toPlainText().toUpper();
     translated = ui->translated->toPlainText().toUpper();
     int size = MainVocab.size()-1;
     if(size + 1 < 1)
     {
         ui->original->setText(" Dictionary is EMPTY !");
         ui->original->setStyleSheet("background-color: rgb(255, 174, 174);");
         return;
     }
     else
     {
         ui->original->setStyleSheet("background-color: rgb(255, 255, 255);");
     }
     for(;size>=0;size--)
     {
         if(original == MainVocab[size].first.toUpper() && translated == MainVocab[size].second.toUpper())
         {
                    ui->translated->setStyleSheet("background-color: rgb(226, 255, 215);");
                    break;
         }
         else if(original == MainVocab[size].second.toUpper() && translated == MainVocab[size].first.toUpper())
         {
                    ui->translated->setStyleSheet("background-color: rgb(226, 255, 215);");
                    break;
         }
         else
         {
              ui->translated->setStyleSheet("background-color: rgb(255, 174, 174);");
         }
     }
     ui->check->setEnabled(false);
}

void MainWindow::TranslationSET()
{
    ui->translated->clear();
    ui->translated->setStyleSheet("background-color: rgb(255, 255, 255);");

    QString original;
    int position = 0, ch = 0;
    if(MainVocab.size() < 1)
    {
        ui->original->setText(" Dictionary is EMPTY !");
        ui->original->setStyleSheet("background-color: rgb(255, 174, 174);");
        return;
    }
    else
    {
        ui->original->setStyleSheet("background-color: rgb(255, 255, 255);");
    }
    srand(time(NULL));
    position = rand()%(MainVocab.size());

    ch=rand()%2;
    if(ch == 0)
    ui->original->setText(MainVocab[position].first);
    if(ch == 1)
    ui->original->setText(MainVocab[position].second);
    ui->translated->setText("");
}

bool MainWindow::FindAnyAlpha(QString test)
{
    int size = test.size();
    for(;size>0;size--)
    {
        if(test[size].isLetter()) return true;
    }
    return false;
}

void MainWindow::ResetTrans()
{
    ui->original->clear();
    ui->translated->clear();
}

void MainWindow::ResetAddVoca()
{
       ui->original_2->clear();
       ui->translated_2->clear();
}

void MainWindow::AddVoca()
{
    QPair<QString,QString> element;
    element.first = ui->original_2->text();
    element.second = ui->translated_2->text();
    if(!element.first.isEmpty() && !element.second.isEmpty())
    {
        ui->status_add->setStyleSheet("background-color: rgb(174, 174, 255);");
        if(FindAnyAlpha(element.first) && FindAnyAlpha(element.second))
        {
            MainVocab.push_back(element);
            ExportData();
            UpdateVoca();
            Displaylist();
            ui->status_add->setStyleSheet("background-color: rgb(226, 255, 215);");
            ui->original_2->setText("");
            ui->translated_2->setText("");
        }
    }
    else
    ui->status_add->setStyleSheet("background-color: rgb(255, 174, 174);");
}

void MainWindow::FindPhrase()
{
    QString phrase = ui->lineEdit->text().toUpper();
    QString out = "";
    for(int i=0; i<MainVocab.size();i++)
    {
        if(MainVocab[i].first.toUpper() == phrase || MainVocab[i].second.toUpper() == phrase)
        {
            out += MainVocab[i].first + "\t\t     |   " + MainVocab[i].second + "\n";
        }
    }
    ui->phraseslist->setText(out);
}

void MainWindow::UpdateVoca()
{
    QString Path, TextForVocab;

    Path = ui->Path_vocab->text();

    ui->voca_path_lbl_status->setText("Додано");
    ui->voca_path_lbl_status->setStyleSheet("background-color: rgb(226, 255, 215);");

    if(Path.isEmpty() || (Path.indexOf(".txt")== -1) || (Path.indexOf(":")== -1))
    {
        ui->voca_path_lbl_status->setText("Недоступний");
        ui->voca_path_lbl_status->setStyleSheet("background-color: rgb(255, 174, 174);");

        QDir FoldVoca;
        FoldVoca.mkdir("Vocabularies");
        Path = QDir::currentPath() + "/Vocabularies/ENUA.txt";
    }
    QFile Vocabulary(Path);
    QTextStream Input(&Vocabulary);
    Vocabulary.open(QFile::ReadWrite | QFile::Text);
    if(!Vocabulary.isOpen())
    {
        ui->voca_path_lbl_status->setText("Недоступний");
        ui->voca_path_lbl_status->setStyleSheet("background-color: rgb(255, 174, 174);");
    }
    TextForVocab = Input.readAll();
    Input.flush();

    QString First = "",Second = "";
    bool fstread = false;
    int size = TextForVocab.size();
    for(int i=0;i<size;i++)
    {
        if(TextForVocab[i] == '^')
        {
            fstread = true;
            continue;
        }
        if(TextForVocab[i] == '$' && (fstread == true))
        {
            fstread = false;
            QPair<QString,QString> temp;
            temp.first = First;
            temp.second = Second;
            MainVocab.push_back(temp);
            First = "";
            Second = "";
            continue;
        }
        if(!fstread)
            First += TextForVocab[i];
        else
            Second += TextForVocab[i];

    }
    MainWindow::GarbageCollector();
    ExportData();
    QString contain = " К-сть слів: " + QString::number(MainVocab.size()) + " у словнику.";
    ui->contain_words->setText(contain);
    Vocabulary.close();
}

void MainWindow::ExportData()
{
    int size = MainVocab.size();

    QString Way = QDir::currentPath() + "/Vocabularies/ENUA.txt";
    QFile Vocabulary(Way);
    Vocabulary.open(QFile::WriteOnly | QFile::Text);
    QTextStream Output(&Vocabulary);

    QString temp = "";
    for(int i=0;i<size;i++)
    {
        temp = MainVocab[i].first + "^" + MainVocab[i].second + "$";
        Output << temp;
    }
    Vocabulary.close();
}

void MainWindow::Exit()
{
    MainWindow::GarbageCollector();
    MainWindow::ExportData();
    MainWindow::close();
}

void MainWindow::Displaylist()
{
    QString display = "";
    int size = MainVocab.count();
    for(int i=0;i<size;i++)
    {
        display += MainVocab[i].first + "\t\t     |   " + MainVocab[i].second + "\n";
    }
    ui->phraseslist->setText(display);
}

void MainWindow::GarbageCollector()
{
    QString eq = "";
    for(int i=0;i<MainVocab.size();i++)
    {
        eq = MainVocab[i].first;

        for(int j=i+1;j<MainVocab.size();j++)
        {
            if(MainVocab[j].first == eq || MainVocab[j].second == eq)
            {
                MainVocab.erase(MainVocab.begin()+j);
                j--;
            }

        }
    }
}
