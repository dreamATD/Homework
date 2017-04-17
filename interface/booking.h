#ifndef BOOKING_H
#define BOOKING_H

#include <QWidget>

namespace Ui {
class booking;
}

class booking : public QWidget
{
    Q_OBJECT

public:
    explicit booking(QWidget *parent = 0);
    ~booking();

private:
    Ui::booking *ui;
};

#endif // BOOKING_H
