#include "searchwindow.h"
#include "QtWidgets/qmessagebox.h"
#include "searchresults.h"
#include "ui_searchwindow.h"
#include "products.h"
#include <QLabel>
using namespace std;
searchwindow::searchwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::searchwindow)
{
    ui->setupUi(this);
}

searchwindow::~searchwindow()
{
    delete ui;
}

void searchwindow::on_search_clicked()
{
    std::string searchQuery = ui->queryBox->text().toStdString();
    string result;
    int c=-1;
    bool found=false;
    for(string result : productslist){

        if(searchQuery == result){
            /*hide();
            searchresults* sR = new searchresults();
            sR->show();*/
            c++;
            int av= availability[c];
            string avstr = to_string(av);
            double pr= prices[c];
            string prstr = to_string(pr);
            QString labelout=QString::fromStdString("Name: " + result + ", Price: " + prstr + ", Availability: " + avstr );
            QLabel *label= new QLabel(labelout);
            label->resize(600, 200);
            label->show();
            found==true;
        }
    }
    if(!found){
        QMessageBox errorMessage;
        errorMessage.critical(0, "Error", "Product Not Found");
        errorMessage.setFixedSize(500, 200);}
}



void searchwindow::on_back_clicked()
{
    hide (); // hiding this page
    products* backtoprod = new products (this); //creating a new window of type products
    backtoprod -> show();
}
