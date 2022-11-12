TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt


CONFIG += link_pkgconfig
PKGCONFIG += /usr/local/lib/pkgconfig/opencv.pc
INCLUDEPATH += /usr/local/include/opencv4
LIBS += `pkg-config --cflags --libs opencv4`

SOURCES += \
        bilateralfilter.cpp \
        blurfunction.cpp \
        gaussianblur.cpp \
        main.cpp \
        main2.cpp \
        main3.cpp \
        main4.cpp \
        main5.cpp \
        main6.cpp \
        medianblur.cpp \
        moment.cpp \
        rootmeansquare.cpp \
        runpercentage.cpp \
        secondmoment.cpp \
        skewness.cpp \
        smoothing.cpp

HEADERS += \
    bilateralfilter.h \
    blurfunction.h \
    gaussianblur.h \
    medianblur.h \
    moment.h \
    rootmeansquare.h \
    runpercentage.h \
    secondmoment.h \
    skewness.h \
    smoothing.h




