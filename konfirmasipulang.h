#ifndef KONFIRMASIPULANG_H
#define KONFIRMASIPULANG_H

#include <QMainWindow>

namespace Ui {
class KonfirmasiPulang;
}

class KonfirmasiPulang : public QMainWindow
{
    Q_OBJECT

public:
    explicit KonfirmasiPulang(QWidget *parent = nullptr);
    ~KonfirmasiPulang();

private:
    Ui::KonfirmasiPulang *ui;
};

#endif // KONFIRMASIPULANG_H
