#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setStyleSheet("background-color: green;");
    //QObject::connect(ui->play1, SIGNAL (released()),this, SLOT (on_play1_clicked()));
    //labelArr[0] = &card1;
    ui->textBox->setText("Welcome to Joels Spades. Press the button below to start.");
    ui->turnButton->setEnabled(false);
    ui->bidButton->setEnabled(false);
    gameOver = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::playGame(){
    if(turnCount==4){
        trickCount++;
        if(trickCount == 13)
            G.setRoundOverTrue();
        G.takeTurn(); //takeTurn() calculates winner
        showScore();
        ui->turnButton->setEnabled(true);
        qDebug() << "TC: " << trickCount;
        if(trickCount==13){
            G.moveDealer();
            G.deal();
            ui->bidButton->setEnabled(true);
            G.tallyPoints();
            showScore();
            if(gameOver)
                return;
            clearTable();
            G.getBid(0);
            turnCount=0;
            trickCount=0;
        }
    }else{
        while(turnCount<4 && G.getWhoseTurn() != 1){
            G.playCard(G.getWhoseTurn());
            G.moveWhoseTurn();
            turnCount++;
            if(turnCount==4){
                trickCount++;
                if(trickCount == 13)
                    G.setRoundOverTrue();
                G.takeTurn();
                showScore();
                ui->turnButton->setEnabled(true);
                qDebug() << "TC: " << trickCount;
                if(trickCount==13){
                    G.moveDealer();
                    G.deal();
                    ui->bidButton->setEnabled(true);
                    G.tallyPoints();
                    showScore();
                    if(gameOver)
                        return;
                    clearTable();
                    G.getBid(0);
                    turnCount=0;
                    trickCount=0;
                }
            }
        }
    }
}

void MainWindow::showScore(){

    ui->scoreLabel->setText(QString::fromStdString(G.getScore()));
}

void MainWindow::clearTable(){
    ui->Opp1->clear();
    ui->Opp2->clear();
    ui->TM->clear();
    ui->player->clear();
}

void MainWindow::setPlayButtons(bool b){
    ui->play1->setEnabled(b);
    ui->play2->setEnabled(b);
    ui->play3->setEnabled(b);
    ui->play4->setEnabled(b);
    ui->play5->setEnabled(b);
    ui->play6->setEnabled(b);
    ui->play7->setEnabled(b);
    ui->play8->setEnabled(b);
    ui->play9->setEnabled(b);
    ui->play10->setEnabled(b);
    ui->play11->setEnabled(b);
    ui->play12->setEnabled(b);
    ui->play13->setEnabled(b);
}

void MainWindow::printTextBox(string s){
    ui->textBox->setText(QString::fromStdString(s));
}

void MainWindow::on_startButton_clicked()
{
    ui->textBox->clear();
    connect(&G, &Game::sendHand, this, &MainWindow::showHand);
    connect(&G, &Game::printText, this, &MainWindow::printTextBox);
    connect(&G, &Game::getUserBid, this, &MainWindow::handleUserBid);
    connect(&G, &Game::putOpp1Card, this, &MainWindow::opp1Card);
    connect(&G, &Game::putOpp2Card, this, &MainWindow::opp2Card);
    connect(&G, &Game::putTMCard, this, &MainWindow::TMCard);
    connect(&G, &Game::putPlayerCard, this, &MainWindow::playerCard);
    connect(&G, &Game::endGame, this, &MainWindow::finishGame);
    G.deal();
    G.getBid(0);
    ui->startButton->setEnabled(false);
    delete ui->startButton;
}

void MainWindow::on_bidButton_clicked()
{
    bool safe = false;
    int x = ui->bidBox->text().toInt(&safe);
    if (!safe) {
        return;
    }
    if(x>1 && x<13){
    G.setUserBid(x);
    ui->bidButton->setEnabled(false);
    ui->bidBox->clear();
    showScore();
    //ui->turnButton->setEnabled(true);
    playGame();
    ui->turnButton->setEnabled(false);
    }else
        return;
    setPlayButtons(true);

}


void MainWindow::on_turnButton_clicked()
{
    ui->Opp1->clear();
    ui->Opp2->clear();
    ui->TM->clear();
    ui->player->clear();
    turnCount=0;
    ui->turnButton->setEnabled(false);
    setPlayButtons(true);
    playGame();

}

void MainWindow::opp1Card(string s){
    QPixmap pic(QString::fromStdString(s));
    ui->Opp1->setPixmap(pic);
}
void MainWindow::opp2Card(string s){
    QPixmap pic(QString::fromStdString(s));
    ui->Opp2->setPixmap(pic);
}
void MainWindow::TMCard(string s){
    QPixmap pic(QString::fromStdString(s));
    ui->TM->setPixmap(pic);
}
void MainWindow::playerCard(string s){
    QPixmap pic(QString::fromStdString(s));
    ui->player->setPixmap(pic);
}

void MainWindow::handleUserBid(){
    ui->bidButton->setEnabled(true);
    trickCount=0;
    setPlayButtons(false);

}

void MainWindow::finishGame(int i){
    setPlayButtons(false);
    ui->turnButton->setEnabled(false);
    ui->bidButton->setEnabled(false);
    if (i == 1){
        ui->textBox->setText("Game Over \nYou Win!");
    }else if(i==0){
        ui->textBox->setText("Game Over \nYou Lose");
    }
    gameOver = true;
}

void MainWindow::on_play1_clicked()
{
    if(G.userTurn(1)){
        turnCount++;
        G.moveWhoseTurn();
        playGame();
        setPlayButtons(false);
    }

}

void MainWindow::on_play2_clicked()
{
    if(G.userTurn(2)){
        turnCount++;
        G.moveWhoseTurn();
        playGame();
        setPlayButtons(false);
    }

}

void MainWindow::on_play3_clicked()
{
    if(G.userTurn(3)){
        turnCount++;
        G.moveWhoseTurn();
        playGame();
        setPlayButtons(false);
    }

}

void MainWindow::on_play4_clicked()
{
    if(G.userTurn(4)){
        turnCount++;
        G.moveWhoseTurn();
        playGame();
        setPlayButtons(false);
    }

}

void MainWindow::on_play5_clicked()
{
    if(G.userTurn(5)){
        turnCount++;
        G.moveWhoseTurn();
        playGame();
        setPlayButtons(false);
    }

}

void MainWindow::on_play6_clicked()
{
    if(G.userTurn(6)){
        turnCount++;
        G.moveWhoseTurn();
        playGame();
        setPlayButtons(false);
    }

}

void MainWindow::on_play7_clicked()
{
    if(G.userTurn(7)){
        turnCount++;
        G.moveWhoseTurn();
        playGame();
        setPlayButtons(false);
    }

}

void MainWindow::on_play8_clicked()
{
    if(G.userTurn(8)){
        turnCount++;
        G.moveWhoseTurn();
        playGame();
        setPlayButtons(false);
    }

}

void MainWindow::on_play9_clicked()
{
    if(G.userTurn(9)){
        turnCount++;
        G.moveWhoseTurn();
        playGame();
        setPlayButtons(false);
    }

}

void MainWindow::on_play10_clicked()
{
    if(G.userTurn(10)){
        turnCount++;
        G.moveWhoseTurn();
        playGame();
        setPlayButtons(false);
    }

}

void MainWindow::on_play11_clicked()
{
    if(G.userTurn(11)){
        turnCount++;
        G.moveWhoseTurn();
        playGame();
        setPlayButtons(false);
    }

}

void MainWindow::on_play12_clicked()
{
    if(G.userTurn(12)){
        turnCount++;
        G.moveWhoseTurn();
        playGame();
        setPlayButtons(false);
    }

}

void MainWindow::on_play13_clicked()
{
    if(G.userTurn(13)){
        turnCount++;
        G.moveWhoseTurn();
        playGame();
        setPlayButtons(false);
    }

}
void MainWindow::showHand(vector<string> &s){
    //path to a resource file with the :
    int handSize = s.size();
    int element = 0;
    QPixmap pic(QString::fromStdString(s[element]));
    ui->card1->setPixmap(pic);
    element++;
    if(element < handSize){
        QPixmap pic(QString::fromStdString(s[element]));
        ui->card2->setPixmap(pic);
        element++;
    }else
        ui->card2->clear();
    if(element < handSize){
        QPixmap pic(QString::fromStdString(s[element]));
        ui->card3->setPixmap(pic);
        element++;
    }else
        ui->card3->clear();
    if(element < handSize){
        QPixmap pic(QString::fromStdString(s[element]));
        ui->card4->setPixmap(pic);
        element++;
    }else
        ui->card4->clear();
    if(element < handSize){
        QPixmap pic(QString::fromStdString(s[element]));
        ui->card5->setPixmap(pic);
        element++;
    }else
        ui->card5->clear();
    if(element < handSize){
        QPixmap pic(QString::fromStdString(s[element]));
        ui->card6->setPixmap(pic);
        element++;
    }else
        ui->card6->clear();
    if(element < handSize){
        QPixmap pic(QString::fromStdString(s[element]));
        ui->card7->setPixmap(pic);
        element++;
    }else
        ui->card7->clear();
    if(element < handSize){
        QPixmap pic(QString::fromStdString(s[element]));
        ui->card8->setPixmap(pic);
        element++;
    }else
        ui->card8->clear();
    if(element < handSize){
        QPixmap pic(QString::fromStdString(s[element]));
        ui->card9->setPixmap(pic);
        element++;
    }else
        ui->card9->clear();
    if(element < handSize){
        QPixmap pic(QString::fromStdString(s[element]));
        ui->card10->setPixmap(pic);
        element++;
    }else
        ui->card10->clear();
    if(element < handSize){
        QPixmap pic(QString::fromStdString(s[element]));
        ui->card11->setPixmap(pic);
        element++;
    }else
        ui->card11->clear();
    if(element < handSize){
        QPixmap pic(QString::fromStdString(s[element]));
        ui->card12->setPixmap(pic);
        element++;
    }else
        ui->card12->clear();
    if(element < handSize){
        QPixmap pic(QString::fromStdString(s[element]));
        ui->card13->setPixmap(pic);
        element++;
    }else
        ui->card13->clear();
}
