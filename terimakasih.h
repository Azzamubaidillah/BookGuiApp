#ifndef TERIMAKASIH_H
#define TERIMAKASIH_H

#include <QMainWindow>
#include "window2.h"

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
    void on_pushButton_5_clicked();

private:
    Ui::TerimaKasih *ui;
    Window2 *Window2;
};

#endif // TERIMAKASIH_H
