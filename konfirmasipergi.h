#ifndef KONFIRMASIPERGI_H
#define KONFIRMASIPERGI_H

#include <QMainWindow>

namespace Ui {
class KonfirmasiPergi;
}

class KonfirmasiPergi : public QMainWindow
{
    Q_OBJECT

public:
    explicit KonfirmasiPergi(QWidget *parent = nullptr);
    ~KonfirmasiPergi();

private:
    Ui::KonfirmasiPergi *ui;
};

#endif // KONFIRMASIPERGI_H
