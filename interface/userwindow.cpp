#include "userwindow.h"
#include "ui_afterlogin.h"

AfterLogin::AfterLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AfterLogin)
{
    ui->setupUi(this);
}

AfterLogin::~AfterLogin()
{
    delete ui;
}
