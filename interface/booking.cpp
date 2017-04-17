#include "booking.h"
#include "ui_booking.h"

booking::booking(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::booking)
{
    ui->setupUi(this);
}

booking::~booking()
{
    delete ui;
}
