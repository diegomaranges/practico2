TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Operaciones_Matenaticas.cpp \
    Operaciones_String.cpp \
    Operaciones_preprocesador.cpp \
    Operaciones_Binarias.cpp \
    Operaciones_logicas.cpp \
    Utils.cpp

HEADERS += \
    Operaciones_Matenaticas.h \
    Operaciones_String.h \
    Operaciones_preprocesador.h \
    Operaciones_Binarias.h \
    Operaciones_logicas.h \
    Utils.h
