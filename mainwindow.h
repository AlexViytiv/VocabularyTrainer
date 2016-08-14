#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QPair>
#include <QDir>
#include <QMessageBox>
#include <QRegExp>
#include <QThread>
#include <random>
#include <ctime>
#include <QString>
#include <sstream>
#include <cstring>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void GarbageCollector();
    bool FindAnyAlpha(QString test);

signals:

private slots:
    void ResetDelete();
    void ConfirmDELETE();
    void EnableConfirmation();
    void CodeGeneration();
    void FindTranslation(QString);
    void OnOffCheckButton();
    void TranslationCHECK();
    void TranslationSET();
    void ResetTrans();
    void ResetAddVoca();
    void AddVoca();
    void FindPhrase();
    void Displaylist();
    void UpdateVoca();
    void ExportData();
    void Exit();

};



#endif // MAINWINDOW_H
