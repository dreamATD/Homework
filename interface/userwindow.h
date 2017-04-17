#ifndef AFTERLOGIN_H
#define AFTERLOGIN_H

#include <QWidget>

namespace Ui {
class AfterLogin;
}

class AfterLogin : public QWidget
{
    Q_OBJECT

public:
    explicit AfterLogin(QWidget *parent = 0);
    ~AfterLogin();

private:
    Ui::AfterLogin *ui;
};

#endif // AFTERLOGIN_H
