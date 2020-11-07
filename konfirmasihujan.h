#ifndef KONFIRMASIHUJAN_H
#define KONFIRMASIHUJAN_H

#include <QMainWindow>

namespace Ui {
class KonfirmasiHujan;
}

class KonfirmasiHujan : public QMainWindow
{
    Q_OBJECT

public:
    explicit KonfirmasiHujan(QWidget *parent = nullptr);
    ~KonfirmasiHujan();

private:
    Ui::KonfirmasiHujan *ui;
};

#endif // KONFIRMASIHUJAN_H
