#ifndef WIDGET_H
#define WIDGET_H

#include "thumbWheelWidget.h"

#include <QLabel>
#include <QWidget>
#include <QString>
#include <QLayout>
#include <QComboBox>
#include <QPushButton>

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>



class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);

private:
    QLabel *OscCollabel;
    QLabel *PG1Collabel;
    QLabel *PG2Collabel;
    QLabel *PG3Collabel;
    QLabel *PG4Collabel;
    QLabel *ModCollabel;
    QLabel *CntCollabel;


    QLabel *RowOlabel;
    QLabel *RowTlabel;
    QLabel *RowGlabel;
    QLabel *RowDlabel;
    QLabel *RowWlabel;

    QLabel *OscOlabel;
    QLabel *OscTlabel;
    QLabel *OscGlabel;
    QLabel *OscDlabel;
    QLabel *OscWlabel;

    QLabel *PG1Olabel;
    QLabel *PG1Tlabel;
    QLabel *PG1Glabel;
    QLabel *PG1Dlabel;
    QLabel *PG1Wlabel;

    QLabel *PG2Olabel;
    QLabel *PG2Tlabel;
    QLabel *PG2Glabel;
    QLabel *PG2Dlabel;
    QLabel *PG2Wlabel;

    QLabel *PG3Olabel;
    QLabel *PG3Tlabel;
    QLabel *PG3Glabel;
    QLabel *PG3Dlabel;
    QLabel *PG3Wlabel;

    QLabel *PG4Olabel;
    QLabel *PG4Tlabel;
    QLabel *PG4Glabel;
    QLabel *PG4Dlabel;
    QLabel *PG4Wlabel;

    QLabel *ModOlabel;
    QLabel *ModTlabel;
    QLabel *ModGlabel;
    QLabel *ModDlabel;
    QLabel *ModWlabel;

    QLabel *CntOlabel;
    QLabel *CntTlabel;
    QLabel *CntGlabel;
    QLabel *CntDlabel;
    QLabel *CntWlabel;


};

#endif // WIDGET_H
