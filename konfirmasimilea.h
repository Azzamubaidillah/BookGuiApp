#ifndef KONFIRMASIMILEA_H
#define KONFIRMASIMILEA_H

#include <QMainWindow>

namespace Ui {
class KonfirmasiMilea;
}

class KonfirmasiMilea : public QMainWindow
{
    Q_OBJECT

public:
    explicit KonfirmasiMilea(QWidget *parent = nullptr);
    ~KonfirmasiMilea();

private:
    Ui::KonfirmasiMilea *ui;
};

#endif // KONFIRMASIMILEA_H
