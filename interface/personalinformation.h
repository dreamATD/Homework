#ifndef PERSONALINFORMATION_H
#define PERSONALINFORMATION_H

#include <QWidget>

namespace Ui {
class PersonalInformation;
}

class PersonalInformation : public QWidget
{
    Q_OBJECT

public:
    explicit PersonalInformation(QWidget *parent = 0);
    ~PersonalInformation();

private:
    Ui::PersonalInformation *ui;
};

#endif // PERSONALINFORMATION_H
