#ifndef KONFIRMASICHAIRIL_H
#define KONFIRMASICHAIRIL_H

#include <QMainWindow>
#include <terimakasih.h>

namespace Ui {
class KonfirmasiChairil;
}

class KonfirmasiChairil : public QMainWindow
{
    Q_OBJECT

public:
    explicit KonfirmasiChairil(QWidget *parent = nullptr);
    ~KonfirmasiChairil();

private:
    Ui::KonfirmasiChairil *ui;
};

#endif // KONFIRMASICHAIRIL_H
