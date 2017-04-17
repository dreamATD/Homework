#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEditPassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_pushButtonLogin_clicked()
{
    if (ui->lineEditPassword->text().isEmpty()||ui->lineEditUser->text().isEmpty()){
        QMessageBox::warning(this,tr("警告信息"),tr("用户名或密码为空，不能登录"));
        return;
    }
    m_strUser = ui->lineEditUser->text();
    //计算密码？？？
    m_passwordHash =
    QString strMsg = tr("用户名："+ m_strUser + tr("\t\n") + )
}

void Widget::on_pushButtonOut_clicked()
{
    this->close();
}
