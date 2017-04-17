#ifndef REFUND_H
#define REFUND_H

#include <QWidget>

namespace Ui {
class refund;
}

class refund : public QWidget
{
    Q_OBJECT

public:
    explicit refund(QWidget *parent = 0);
    ~refund();

private:
    Ui::refund *ui;
};

#endif // REFUND_H
