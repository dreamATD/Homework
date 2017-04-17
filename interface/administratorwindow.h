#ifndef ADMINISTRATORWINDOW_H
#define ADMINISTRATORWINDOW_H

#include <QWidget>

namespace Ui {
class administratorwindow;
}

class administratorwindow : public QWidget
{
    Q_OBJECT

public:
    explicit administratorwindow(QWidget *parent = 0);
    ~administratorwindow();

private:
    Ui::administratorwindow *ui;
};

#endif // ADMINISTRATORWINDOW_H
