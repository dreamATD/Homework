#include "administratorwindow.h"
#include "ui_administratorwindow.h"

administratorwindow::administratorwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::administratorwindow)
{
    ui->setupUi(this);
}

administratorwindow::~administratorwindow()
{
    delete ui;
}
