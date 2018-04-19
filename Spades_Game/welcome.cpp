#include "welcome.h"
#include "mainwindow.h"
#include "ui_welcome.h"

Welcome::Welcome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Welcome)
{
    ui->setupUi(this);

    ui->WinningScore->addItem("200");
    ui->WinningScore->addItem("500");
    ui->Difficulty->addItem("Easy");
    ui->Difficulty->addItem("Hard...ish");
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_Go_clicked()
{
    //MainWindow w;
    w.show();
    w.setMaxScore(ui->WinningScore->currentText().toInt());
    w.sedDifficulty(ui->Difficulty->currentIndex());
    this->close();
}
