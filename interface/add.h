#ifndef ADD_H
#define ADD_H

#include <QWidget>

namespace Ui {
class add;
}

class add : public QWidget
{
    Q_OBJECT

public:
    explicit add(QWidget *parent = 0);
    ~add();

private slots:
    void on_pushButtonadd_clicked();

private:
    Ui::add *ui;
};

#endif // ADD_H
