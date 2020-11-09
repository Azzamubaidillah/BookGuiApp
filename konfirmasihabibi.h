#ifndef KONFIRMASIHABIBI_H
#define KONFIRMASIHABIBI_H

#include <QMainWindow>
#include <terimakasih.h>

namespace Ui {
class KonfirmasiHabibi;
}

class KonfirmasiHabibi : public QMainWindow
{
    Q_OBJECT

public:
    explicit KonfirmasiHabibi(QWidget *parent = nullptr);
    ~KonfirmasiHabibi();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::KonfirmasiHabibi *ui;
    TerimaKasih *TerimaKasih;

};

#endif // KONFIRMASIHABIBI_H
