#ifndef WINDOW2_H
#define WINDOW2_H

#include <QMainWindow>
#include "konfirmasi.h"

namespace Ui {
class Window2;
}

class Window2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window2(QWidget *parent = nullptr);
    ~Window2();

private slots:
    void on_verticalScrollBar_actionTriggered(int action);

    void on_pushButton_2_clicked();

private:
    Ui::Window2 *ui;
    Konfirmasi *Konfirmasi;
};

#endif // WINDOW2_H
