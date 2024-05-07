#include "cart.h"
#include "ui_cart.h"
#include "checkout.h"
#include "products.h"
using namespace std;
vector<string> cartt;
int totalprice;
int cart::getIndex(vector<string> v, string un)
{
    auto iter = ::find(v.begin(), v.end(), un);

    if (iter != v.end())
    {
        int index = iter - v.begin();
        return index;
    }
    else {
        return -1;
    }
}

cart::cart(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cart)
{

    ui->setupUi(this);
    ui->totalprice->setText("Total Price : " + QString::number(totalprice));
}

cart::~cart()
{
    delete ui;
}



void cart::on_remove_clicked()
{
    /*int index= getIndex(cartt,ui->productname->text().toStdString());
    cartt.erase(cartt.begin()+index);
    ui->productname->setVisible(false);
    ui->price->setVisible(false);
    ui->quantity->setVisible(false); */
}


void cart::on_checkout_clicked()
{
    hide (); // hiding this page
    checkout* gotocheckout = new checkout (this);
    gotocheckout -> show();
}


void cart::on_gotocatalog_clicked()
{
    hide (); // hiding this page
    products* gotoprod = new products (this);
    gotoprod -> show();
}
