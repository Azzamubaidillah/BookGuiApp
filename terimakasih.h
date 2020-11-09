#ifndef TERIMAKASIH_H
#define TERIMAKASIH_H

#include <QMainWindow>

namespace Ui {
class TerimaKasih;
}

class TerimaKasih : public QMainWindow
{
    Q_OBJECT

public:
    explicit TerimaKasih(QWidget *parent = nullptr);
    ~TerimaKasih();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TerimaKasih *ui;
};

#endif // TERIMAKASIH_H
