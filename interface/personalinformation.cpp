#include "personalinformation.h"
#include "ui_personalinformation.h"

PersonalInformation::PersonalInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PersonalInformation)
{
    ui->setupUi(this);
}

PersonalInformation::~PersonalInformation()
{
    delete ui;
}
