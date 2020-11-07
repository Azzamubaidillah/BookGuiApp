#ifndef KONFIRMASIHABIBI_H
#define KONFIRMASIHABIBI_H

#include <QMainWindow>

namespace Ui {
class KonfirmasiHabibi;
}

class KonfirmasiHabibi : public QMainWindow
{
    Q_OBJECT

public:
    explicit KonfirmasiHabibi(QWidget *parent = nullptr);
    ~KonfirmasiHabibi();

private:
    Ui::KonfirmasiHabibi *ui;
};

#endif // KONFIRMASIHABIBI_H
