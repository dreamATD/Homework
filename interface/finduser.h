#ifndef FINDUSER_H
#define FINDUSER_H

#include <QWidget>

namespace Ui {
class finduser;
}

class finduser : public QWidget
{
    Q_OBJECT

public:
    explicit finduser(QWidget *parent = 0);
    ~finduser();

private:
    Ui::finduser *ui;
};

#endif // FINDUSER_H
