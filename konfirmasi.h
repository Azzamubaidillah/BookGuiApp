#ifndef KONFIRMASI_H
#define KONFIRMASI_H

#include <QMainWindow>

namespace Ui {
class Konfirmasi;
}

class Konfirmasi : public QMainWindow
{
    Q_OBJECT

public:
    explicit Konfirmasi(QWidget *parent = nullptr);
    ~Konfirmasi();

private:
    Ui::Konfirmasi *ui;
};

#endif // KONFIRMASI_H
