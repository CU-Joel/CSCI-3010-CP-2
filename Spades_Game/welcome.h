#ifndef WELCOME_H
#define WELCOME_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class Welcome;
}

class Welcome : public QDialog
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = 0);
    ~Welcome();

private slots:
    void on_Go_clicked();

private:
    Ui::Welcome *ui;
    MainWindow w;
};

#endif // WELCOME_H
