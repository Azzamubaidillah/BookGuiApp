#include "secdialog.h"
#include "ui_secdialog.h"
#include <QPixmap>

char biografi[4][4][30] = {
                            {"1.   ", "B.J. HABIBIE          ", "   Punto Ali Fahmi        ",  "  Checklist"},
                            {"2.   ", "Gus Dur               ", "   Greg Barton            ",  "  Gramedia Pustaka"},
                            {"3.   ", "Panggil Aku Kartini   ", "   Pramoedya Ananta Toer  ",  "  Hasta Mitra "},
                            {"4.   ", "Buya Hamka            ", "   Haidar Musyafa         ",  "  Gramedia Pustaka"},
                        };


SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);

}



SecDialog::~SecDialog()
{
    delete ui;
}
