#ifndef KONFIRMASI_H
#define KONFIRMASI_H

#include <QMainWindow>
#include <terimakasih.h>

namespace Ui {
class Konfirmasi;
}

class Konfirmasi : public QMainWindow
{
    Q_OBJECT

public:
    explicit Konfirmasi(QWidget *parent = nullptr);
    ~Konfirmasi();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Konfirmasi *ui;

};

#endif // KONFIRMASI_H
