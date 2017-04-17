#include "finduser.h"
#include "ui_finduser.h"

finduser::finduser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::finduser)
{
    ui->setupUi(this);
}

finduser::~finduser()
{
    delete ui;
}
