#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:

    void on_pushButtonLogin_clicked();

    void on_pushButtonOut_clicked();

private:
    Ui::Widget *ui;
    QString m_strUser;
    QByteArray m_passwordHash;
};

#endif // WIDGET_H
