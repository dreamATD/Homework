#include "refund.h"
#include "ui_refund.h"

refund::refund(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::refund)
{
    ui->setupUi(this);
}

refund::~refund()
{
    delete ui;
}
