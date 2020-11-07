QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    konfirmasi.cpp \
    konfirmasibumi.cpp \
    konfirmasichairil.cpp \
    konfirmasihabibi.cpp \
    konfirmasihujan.cpp \
    konfirmasimilea.cpp \
    konfirmasipergi.cpp \
    konfirmasipulang.cpp \
    main.cpp \
    mainwindow.cpp \
    terimakasih.cpp \
    window2.cpp

HEADERS += \
    konfirmasi.h \
    konfirmasibumi.h \
    konfirmasichairil.h \
    konfirmasihabibi.h \
    konfirmasihujan.h \
    konfirmasimilea.h \
    konfirmasipergi.h \
    konfirmasipulang.h \
    mainwindow.h \
    terimakasih.h \
    window2.h

FORMS += \
    konfirmasi.ui \
    konfirmasibumi.ui \
    konfirmasichairil.ui \
    konfirmasihabibi.ui \
    konfirmasihujan.ui \
    konfirmasimilea.ui \
    konfirmasipergi.ui \
    konfirmasipulang.ui \
    mainwindow.ui \
    terimakasih.ui \
    window2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
