/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionTranslate_words;
    QAction *actionTranslate_sentences;
    QAction *actionAdd_words;
    QAction *actionAdd_sentences;
    QAction *actionInstructions;
    QAction *actionAbout_us;
    QAction *actionSettings;
    QAction *actionHi_score_table;
    QAction *actionDelete_words;
    QAction *actionDelete_sentences;
    QAction *actionQuit;
    QAction *actionLearn_words;
    QAction *actionLearn_sentences;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *translate;
    QLabel *trans;
    QLabel *orig;
    QTextBrowser *original;
    QTextEdit *translated;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *clear;
    QPushButton *check;
    QPushButton *next;
    QWidget *Add;
    QPushButton *add;
    QLabel *trans_2;
    QLabel *orig_2;
    QPushButton *reset;
    QLineEdit *original_2;
    QLineEdit *translated_2;
    QLabel *status_add;
    QWidget *delete_2;
    QLabel *lbl_enter_to_delete;
    QLabel *find_translation_lbl;
    QLabel *enter_code_lbl;
    QLineEdit *word_input_delete;
    QLineEdit *confirmcode;
    QPushButton *confirm;
    QRadioButton *onephrase;
    QRadioButton *allphrase;
    QLabel *code_field_lbl;
    QLabel *warning_lbl;
    QPushButton *generate;
    QWidget *list;
    QTextBrowser *phraseslist;
    QPushButton *allPhrases;
    QPushButton *FindPhrase;
    QLineEdit *lineEdit;
    QLabel *label;
    QWidget *settings;
    QPushButton *exit;
    QTextBrowser *about;
    QLabel *voca_path_lbl;
    QLineEdit *Path_vocab;
    QPushButton *updatevoca;
    QLabel *voca_path_lbl_2;
    QLabel *voca_path_lbl_status;
    QLabel *contain_words;
    QFrame *line;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(480, 210);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(480, 210));
        MainWindow->setMaximumSize(QSize(480, 210));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/Icons/1469216245_ksirtet.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        MainWindow->setTabShape(QTabWidget::Triangular);
        actionTranslate_words = new QAction(MainWindow);
        actionTranslate_words->setObjectName(QStringLiteral("actionTranslate_words"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/Icons/1469216340_run.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTranslate_words->setIcon(icon1);
        actionTranslate_sentences = new QAction(MainWindow);
        actionTranslate_sentences->setObjectName(QStringLiteral("actionTranslate_sentences"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Icons/Icons/1469216231_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTranslate_sentences->setIcon(icon2);
        actionAdd_words = new QAction(MainWindow);
        actionAdd_words->setObjectName(QStringLiteral("actionAdd_words"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Icons/Icons/1469216256_edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_words->setIcon(icon3);
        actionAdd_sentences = new QAction(MainWindow);
        actionAdd_sentences->setObjectName(QStringLiteral("actionAdd_sentences"));
        actionAdd_sentences->setIcon(icon3);
        actionInstructions = new QAction(MainWindow);
        actionInstructions->setObjectName(QStringLiteral("actionInstructions"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Icons/Icons/1469216350_reminders.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInstructions->setIcon(icon4);
        actionAbout_us = new QAction(MainWindow);
        actionAbout_us->setObjectName(QStringLiteral("actionAbout_us"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Icons/Icons/1469216241_kdmconfig.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_us->setIcon(icon5);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Icons/Icons/1469216233_advancedsettings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon6);
        actionHi_score_table = new QAction(MainWindow);
        actionHi_score_table->setObjectName(QStringLiteral("actionHi_score_table"));
        actionHi_score_table->setIcon(icon5);
        actionDelete_words = new QAction(MainWindow);
        actionDelete_words->setObjectName(QStringLiteral("actionDelete_words"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Icons/Icons/Remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_words->setIcon(icon7);
        actionDelete_sentences = new QAction(MainWindow);
        actionDelete_sentences->setObjectName(QStringLiteral("actionDelete_sentences"));
        actionDelete_sentences->setIcon(icon7);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Icons/Icons/1469216222_exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon8);
        actionLearn_words = new QAction(MainWindow);
        actionLearn_words->setObjectName(QStringLiteral("actionLearn_words"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Icons/Icons/1469216325_tutorials.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLearn_words->setIcon(icon9);
        actionLearn_sentences = new QAction(MainWindow);
        actionLearn_sentences->setObjectName(QStringLiteral("actionLearn_sentences"));
        actionLearn_sentences->setIcon(icon9);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 481, 211));
        tabWidget->setStyleSheet(QStringLiteral(""));
        translate = new QWidget();
        translate->setObjectName(QStringLiteral("translate"));
        translate->setStyleSheet(QStringLiteral(""));
        trans = new QLabel(translate);
        trans->setObjectName(QStringLiteral("trans"));
        trans->setGeometry(QRect(238, 10, 238, 21));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Light"));
        font.setPointSize(12);
        trans->setFont(font);
        trans->setLayoutDirection(Qt::LeftToRight);
        trans->setAutoFillBackground(false);
        trans->setStyleSheet(QStringLiteral("background-color: rgb(85, 85, 255);"));
        trans->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        trans->setMargin(0);
        orig = new QLabel(translate);
        orig->setObjectName(QStringLiteral("orig"));
        orig->setGeometry(QRect(0, 10, 238, 21));
        orig->setFont(font);
        orig->setLayoutDirection(Qt::LeftToRight);
        orig->setAutoFillBackground(false);
        orig->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 0);\n"
""));
        orig->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        orig->setMargin(0);
        original = new QTextBrowser(translate);
        original->setObjectName(QStringLiteral("original"));
        original->setGeometry(QRect(2, 32, 236, 106));
        translated = new QTextEdit(translate);
        translated->setObjectName(QStringLiteral("translated"));
        translated->setGeometry(QRect(239, 32, 236, 106));
        layoutWidget = new QWidget(translate);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(2, 146, 471, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        clear = new QPushButton(layoutWidget);
        clear->setObjectName(QStringLiteral("clear"));

        horizontalLayout->addWidget(clear);

        check = new QPushButton(layoutWidget);
        check->setObjectName(QStringLiteral("check"));
        check->setEnabled(false);

        horizontalLayout->addWidget(check);

        next = new QPushButton(layoutWidget);
        next->setObjectName(QStringLiteral("next"));

        horizontalLayout->addWidget(next);

        tabWidget->addTab(translate, icon9, QString());
        original->raise();
        translated->raise();
        layoutWidget->raise();
        trans->raise();
        orig->raise();
        Add = new QWidget();
        Add->setObjectName(QStringLiteral("Add"));
        add = new QPushButton(Add);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(238, 150, 237, 25));
        trans_2 = new QLabel(Add);
        trans_2->setObjectName(QStringLiteral("trans_2"));
        trans_2->setGeometry(QRect(0, 65, 475, 25));
        trans_2->setFont(font);
        trans_2->setLayoutDirection(Qt::LeftToRight);
        trans_2->setAutoFillBackground(false);
        trans_2->setStyleSheet(QStringLiteral("background-color: rgb(85, 85, 255);"));
        trans_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        trans_2->setMargin(0);
        orig_2 = new QLabel(Add);
        orig_2->setObjectName(QStringLiteral("orig_2"));
        orig_2->setGeometry(QRect(0, 10, 475, 25));
        orig_2->setFont(font);
        orig_2->setLayoutDirection(Qt::LeftToRight);
        orig_2->setAutoFillBackground(false);
        orig_2->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 0);\n"
""));
        orig_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        orig_2->setMargin(0);
        reset = new QPushButton(Add);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setGeometry(QRect(-1, 150, 237, 25));
        original_2 = new QLineEdit(Add);
        original_2->setObjectName(QStringLiteral("original_2"));
        original_2->setGeometry(QRect(0, 35, 475, 25));
        translated_2 = new QLineEdit(Add);
        translated_2->setObjectName(QStringLiteral("translated_2"));
        translated_2->setGeometry(QRect(0, 90, 475, 25));
        status_add = new QLabel(Add);
        status_add->setObjectName(QStringLiteral("status_add"));
        status_add->setGeometry(QRect(0, 120, 475, 20));
        status_add->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        status_add->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(Add, icon3, QString());
        delete_2 = new QWidget();
        delete_2->setObjectName(QStringLiteral("delete_2"));
        lbl_enter_to_delete = new QLabel(delete_2);
        lbl_enter_to_delete->setObjectName(QStringLiteral("lbl_enter_to_delete"));
        lbl_enter_to_delete->setGeometry(QRect(0, 35, 475, 20));
        lbl_enter_to_delete->setStyleSheet(QStringLiteral("background-color:rgb(196, 255, 211)"));
        lbl_enter_to_delete->setAlignment(Qt::AlignCenter);
        find_translation_lbl = new QLabel(delete_2);
        find_translation_lbl->setObjectName(QStringLiteral("find_translation_lbl"));
        find_translation_lbl->setEnabled(true);
        find_translation_lbl->setGeometry(QRect(0, 80, 475, 31));
        find_translation_lbl->setStyleSheet(QStringLiteral("background-color: rgb(255, 222, 219);"));
        find_translation_lbl->setFrameShape(QFrame::NoFrame);
        enter_code_lbl = new QLabel(delete_2);
        enter_code_lbl->setObjectName(QStringLiteral("enter_code_lbl"));
        enter_code_lbl->setGeometry(QRect(0, 120, 475, 20));
        enter_code_lbl->setStyleSheet(QStringLiteral("background-color: rgb(180, 203, 255);"));
        enter_code_lbl->setAlignment(Qt::AlignCenter);
        word_input_delete = new QLineEdit(delete_2);
        word_input_delete->setObjectName(QStringLiteral("word_input_delete"));
        word_input_delete->setGeometry(QRect(0, 60, 475, 20));
        confirmcode = new QLineEdit(delete_2);
        confirmcode->setObjectName(QStringLiteral("confirmcode"));
        confirmcode->setGeometry(QRect(230, 150, 110, 25));
        confirmcode->setAlignment(Qt::AlignCenter);
        confirm = new QPushButton(delete_2);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setEnabled(true);
        confirm->setGeometry(QRect(350, 150, 110, 26));
        onephrase = new QRadioButton(delete_2);
        onephrase->setObjectName(QStringLiteral("onephrase"));
        onephrase->setEnabled(true);
        onephrase->setGeometry(QRect(10, 10, 140, 20));
        onephrase->setChecked(true);
        allphrase = new QRadioButton(delete_2);
        allphrase->setObjectName(QStringLiteral("allphrase"));
        allphrase->setEnabled(true);
        allphrase->setGeometry(QRect(170, 10, 140, 20));
        code_field_lbl = new QLabel(delete_2);
        code_field_lbl->setObjectName(QStringLiteral("code_field_lbl"));
        code_field_lbl->setGeometry(QRect(120, 150, 110, 25));
        code_field_lbl->setFrameShape(QFrame::StyledPanel);
        code_field_lbl->setFrameShadow(QFrame::Plain);
        code_field_lbl->setLineWidth(2);
        code_field_lbl->setMidLineWidth(2);
        code_field_lbl->setAlignment(Qt::AlignCenter);
        warning_lbl = new QLabel(delete_2);
        warning_lbl->setObjectName(QStringLiteral("warning_lbl"));
        warning_lbl->setEnabled(false);
        warning_lbl->setGeometry(QRect(420, 5, 20, 25));
        warning_lbl->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        warning_lbl->setFrameShape(QFrame::NoFrame);
        warning_lbl->setPixmap(QPixmap(QString::fromUtf8(":/Icons/Icons/1469216344_error.png")));
        warning_lbl->setScaledContents(true);
        generate = new QPushButton(delete_2);
        generate->setObjectName(QStringLiteral("generate"));
        generate->setGeometry(QRect(20, 149, 100, 27));
        generate->setStyleSheet(QStringLiteral(""));
        tabWidget->addTab(delete_2, icon7, QString());
        list = new QWidget();
        list->setObjectName(QStringLiteral("list"));
        phraseslist = new QTextBrowser(list);
        phraseslist->setObjectName(QStringLiteral("phraseslist"));
        phraseslist->setGeometry(QRect(0, 30, 475, 150));
        phraseslist->setStyleSheet(QStringLiteral("background-color: rgb(255, 239, 240);"));
        allPhrases = new QPushButton(list);
        allPhrases->setObjectName(QStringLiteral("allPhrases"));
        allPhrases->setGeometry(QRect(0, 9, 101, 23));
        FindPhrase = new QPushButton(list);
        FindPhrase->setObjectName(QStringLiteral("FindPhrase"));
        FindPhrase->setGeometry(QRect(370, 9, 85, 23));
        lineEdit = new QLineEdit(list);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(201, 10, 171, 21));
        label = new QLabel(list);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 10, 91, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Light"));
        font1.setPointSize(10);
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("background-color: rgb(229, 253, 255);\n"
"border-left-color: rgb(85, 0, 255);"));
        label->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(list, icon4, QString());
        settings = new QWidget();
        settings->setObjectName(QStringLiteral("settings"));
        exit = new QPushButton(settings);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(368, 140, 101, 41));
        exit->setAutoFillBackground(false);
        exit->setStyleSheet(QStringLiteral(""));
        exit->setIcon(icon8);
        exit->setIconSize(QSize(32, 32));
        about = new QTextBrowser(settings);
        about->setObjectName(QStringLiteral("about"));
        about->setGeometry(QRect(0, 0, 281, 181));
        about->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 215);"));
        voca_path_lbl = new QLabel(settings);
        voca_path_lbl->setObjectName(QStringLiteral("voca_path_lbl"));
        voca_path_lbl->setGeometry(QRect(290, 0, 180, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI Light"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        voca_path_lbl->setFont(font2);
        voca_path_lbl->setStyleSheet(QStringLiteral("background-color: rgb(255, 232, 55);"));
        voca_path_lbl->setAlignment(Qt::AlignCenter);
        Path_vocab = new QLineEdit(settings);
        Path_vocab->setObjectName(QStringLiteral("Path_vocab"));
        Path_vocab->setGeometry(QRect(290, 20, 180, 20));
        updatevoca = new QPushButton(settings);
        updatevoca->setObjectName(QStringLiteral("updatevoca"));
        updatevoca->setGeometry(QRect(289, 70, 181, 21));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Icons/Icons/1469216260_ark2.png"), QSize(), QIcon::Normal, QIcon::Off);
        updatevoca->setIcon(icon10);
        voca_path_lbl_2 = new QLabel(settings);
        voca_path_lbl_2->setObjectName(QStringLiteral("voca_path_lbl_2"));
        voca_path_lbl_2->setGeometry(QRect(290, 40, 81, 21));
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe UI Light"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setUnderline(false);
        font3.setWeight(50);
        voca_path_lbl_2->setFont(font3);
        voca_path_lbl_2->setStyleSheet(QStringLiteral("background-color: rgb(240, 237, 255);"));
        voca_path_lbl_2->setAlignment(Qt::AlignCenter);
        voca_path_lbl_status = new QLabel(settings);
        voca_path_lbl_status->setObjectName(QStringLiteral("voca_path_lbl_status"));
        voca_path_lbl_status->setGeometry(QRect(368, 40, 101, 21));
        voca_path_lbl_status->setFont(font3);
        voca_path_lbl_status->setStyleSheet(QStringLiteral("background-color: rgb(240, 237, 255);"));
        voca_path_lbl_status->setAlignment(Qt::AlignCenter);
        contain_words = new QLabel(settings);
        contain_words->setObjectName(QStringLiteral("contain_words"));
        contain_words->setGeometry(QRect(290, 110, 181, 21));
        contain_words->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 127);"));
        line = new QFrame(settings);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(298, 90, 161, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tabWidget->addTab(settings, icon6, QString());
        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(Path_vocab, updatevoca);
        QWidget::setTabOrder(updatevoca, exit);
        QWidget::setTabOrder(exit, about);
        QWidget::setTabOrder(about, tabWidget);
        QWidget::setTabOrder(tabWidget, confirm);
        QWidget::setTabOrder(confirm, confirmcode);
        QWidget::setTabOrder(confirmcode, translated);
        QWidget::setTabOrder(translated, next);
        QWidget::setTabOrder(next, add);
        QWidget::setTabOrder(add, clear);
        QWidget::setTabOrder(clear, original);
        QWidget::setTabOrder(original, original_2);
        QWidget::setTabOrder(original_2, translated_2);
        QWidget::setTabOrder(translated_2, reset);
        QWidget::setTabOrder(reset, generate);
        QWidget::setTabOrder(generate, onephrase);
        QWidget::setTabOrder(onephrase, word_input_delete);
        QWidget::setTabOrder(word_input_delete, allphrase);
        QWidget::setTabOrder(allphrase, FindPhrase);
        QWidget::setTabOrder(FindPhrase, phraseslist);
        QWidget::setTabOrder(phraseslist, allPhrases);
        QWidget::setTabOrder(allPhrases, check);
        QWidget::setTabOrder(check, lineEdit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Vocabulary Trainer v0.5", 0));
        actionTranslate_words->setText(QApplication::translate("MainWindow", "Translate words", 0));
        actionTranslate_sentences->setText(QApplication::translate("MainWindow", "Translate sentences", 0));
        actionAdd_words->setText(QApplication::translate("MainWindow", "Add words", 0));
        actionAdd_sentences->setText(QApplication::translate("MainWindow", "Add sentences", 0));
        actionInstructions->setText(QApplication::translate("MainWindow", "Instructions", 0));
        actionAbout_us->setText(QApplication::translate("MainWindow", "About us", 0));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0));
        actionHi_score_table->setText(QApplication::translate("MainWindow", "Hi-score table", 0));
        actionDelete_words->setText(QApplication::translate("MainWindow", "Delete words", 0));
        actionDelete_sentences->setText(QApplication::translate("MainWindow", "Delete sentences", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionLearn_words->setText(QApplication::translate("MainWindow", "Learn words", 0));
        actionLearn_sentences->setText(QApplication::translate("MainWindow", "Learn sentences", 0));
        trans->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\272\320\273\320\260\320\264", 0));
        orig->setText(QApplication::translate("MainWindow", "\320\244\321\200\320\260\320\267\320\260", 0));
        clear->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270", 0));
        check->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\262\321\226\321\200\320\270\321\202\320\270", 0));
        next->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\203\320\277\320\275\320\265 \321\201\320\273\320\276\320\262\320\276", 0));
        tabWidget->setTabText(tabWidget->indexOf(translate), QApplication::translate("MainWindow", "&\320\237\320\265\321\200\320\265\320\272\320\273\320\260\320\264", 0));
        add->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \321\203 \321\201\320\273\320\276\320\262\320\275\320\270\320\272", 0));
        trans_2->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\272\320\273\320\260\320\264", 0));
        orig_2->setText(QApplication::translate("MainWindow", "\320\206\320\275\320\276\320\267\320\265\320\274\320\275\320\260 \321\204\321\200\320\260\320\267\320\260", 0));
        reset->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270", 0));
        status_add->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Add), QApplication::translate("MainWindow", "&\320\224\320\276\320\264\320\260\321\202\320\270", 0));
        lbl_enter_to_delete->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\210\321\203\320\272 \321\201\320\273\320\276\320\262\320\260 \320\264\320\273\321\217 \320\262\320\270\320\264\320\260\320\273\320\265\320\275\320\275\321\217", 0));
        find_translation_lbl->setText(QApplication::translate("MainWindow", "  \320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\260 \320\262\320\270\321\217\320\262\320\270\320\273\320\260 \321\202\320\260\320\272\320\270\320\271 \320\277\320\265\321\200\320\265\320\272\320\273\320\260\320\264 \321\206\321\214\320\276\320\263\320\276 \321\201\320\273\320\276\320\262\320\260 :", 0));
        enter_code_lbl->setText(QApplication::translate("MainWindow", "\320\237\321\226\320\264\321\202\320\262\320\265\321\200\320\264\320\266\320\265\320\275\320\275\321\217 \320\276\320\277\320\265\321\200\320\260\321\206\321\226\321\227", 0));
        confirm->setText(QApplication::translate("MainWindow", "\320\237\321\226\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\320\270", 0));
        onephrase->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\276\320\264\320\275\321\203 \321\204\321\200\320\260\320\267\321\203", 0));
        allphrase->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \321\203\321\201\321\226 \321\204\321\200\320\260\320\267\320\270", 0));
        code_field_lbl->setText(QString());
        warning_lbl->setText(QString());
        generate->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\200\320\270\320\274\320\260\321\202\320\270 \320\272\320\276\320\264", 0));
        tabWidget->setTabText(tabWidget->indexOf(delete_2), QApplication::translate("MainWindow", "&\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270", 0));
        allPhrases->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\320\270 \320\262\321\201\321\226", 0));
        FindPhrase->setText(QApplication::translate("MainWindow", "\320\227\320\275\320\260\320\271\321\202\320\270", 0));
        label->setText(QApplication::translate("MainWindow", "\320\244\321\200\320\260\320\267\320\260 :", 0));
        tabWidget->setTabText(tabWidget->indexOf(list), QApplication::translate("MainWindow", " &\320\241\320\273\320\276\320\262\320\275\320\270\320\272", 0));
        exit->setText(QApplication::translate("MainWindow", "\320\222\320\270\321\205\321\226\320\264", 0));
        about->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underline;\">\320\237\321\200\320\276 \320\274\320\265\320\275\320\265</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">\320\237\321"
                        "\200\320\270\320\262\321\226\321\202, \320\272\320\276\321\200\320\270\321\201\321\202\321\203\320\262\320\260\321\207!</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\234\320\265\320\275\320\265 \320\267\320\262\320\260\321\202\320\270 \320\236\320\273\320\265\320\272\321\201\320\260\320\275\320\264\321\200. \320\257 \321\200\320\276\320\267\321\200\320\276\320\261\320\275\320\270\320\272 \320\267 \320\243\320\272\321\200\320\260\321\227\320\275\320\270. \320\246\320\265\320\271 \320\264\320\276\320\264\320\260\321\202\320\276\320\272 \321\201\321\202\320\262\320\276\321\200\320\265\320\275\320\270\320\271 \320\264\320\273\321\217 \321\202\320\262\320\276\320\263\320\276 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \321\200\320\276\320\267\320\262\320\270\321\202\320\272\321\203. \320\224\320\276 \321\200\320\265"
                        "\321\207\321\226, \320\262\321\226\320\275 \320\275\320\265 \321\201\320\272\320\273\320\260\320\264\320\275\320\270\320\270\320\271 \320\262 \321\203\320\277\321\200\320\260\320\262\320\273\321\226\320\275\320\275\321\226.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; text-decoration: underline;\">\320\257\320\272\321\211\320\276 \320\262\320\270\320\275\320\270\320\272\320\273\320\270 \321\217\320\272\321\226\321\201\321\214 \320\277\320\270\321\202\320\260\320\275\320\275\321\217 \321\207\320\270 \320\277\321\200\320\276\320\277\320\276\320\267\320\270\321\206\321\226\321\227, \320\275\320\260\320\264\321\226\321\210\320\273\320\270 \321\227\321\205 \320\275\320\260 \320\274\320\276"
                        "\321\216 \321\201\320\272\321\200\320\270\320\275\321\214\320\272\321\203 :</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">sviytiv@gmail.com</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">alexviytiv@meta.ua</span></p></body></html>", 0));
        voca_path_lbl->setText(QApplication::translate("MainWindow", "\320\250\320\273\321\217\321\205 \320\264\320\276 \321\201\320\273\320\276\320\262\320\275\320\270\320\272\320\260", 0));
        updatevoca->setText(QApplication::translate("MainWindow", "&\320\227\320\260\320\262\320\260\320\275\321\202\320\260\320\266\320\270\321\202\320\270 \321\201\320\273\320\276\320\262\320\275\320\270\320\272", 0));
        voca_path_lbl_2->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201 :", 0));
        voca_path_lbl_status->setText(QString());
        contain_words->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(settings), QApplication::translate("MainWindow", "&\320\235\320\260\320\273\320\260\321\210\321\202\321\203\320\262\320\260\320\275\320\275\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
