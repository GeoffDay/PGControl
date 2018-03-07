#include "widget.h"

//#include <QtGui>
#include <QFile>
#include <QLabel>
#include <QString>
#include <QGridLayout>
#include <QtWidgets>

Widget::Widget(QWidget *parent) : QWidget(parent)
{
    setMouseTracking(true);
    setAttribute(Qt::WA_Hover);
//    ComPortSelected = "COM1";


    OscCollabel = new QLabel("Osc");
    PG1Collabel = new QLabel("PG1");
    PG2Collabel = new QLabel("PG2");
    PG3Collabel = new QLabel("PG3");
    PG4Collabel = new QLabel("PG4");
    ModCollabel = new QLabel("Mod");
    CntCollabel = new QLabel("Cnt");

    RowOlabel = new QLabel("Output");
    RowTlabel = new QLabel("Trigger");
    RowGlabel = new QLabel("Gate");
    RowDlabel = new QLabel("Delay");
    RowWlabel = new QLabel("Width");

    OscOlabel = new QLabel("3V Norm");
    OscTlabel = new QLabel("+ PG2");
    OscGlabel = new QLabel("Cont");
    OscDlabel = new QLabel("43.670ns");
    OscWlabel = new QLabel("65ns");

    PG1Olabel = new QLabel("3V Norm");
    PG1Tlabel = new QLabel("+ Osc");
    PG1Glabel = new QLabel("Cont");
    PG1Dlabel = new QLabel("0ns");
    PG1Wlabel = new QLabel("0ns");

    PG2Olabel = new QLabel("3V Norm");
    PG2Tlabel = new QLabel("+ Osc");
    PG2Glabel = new QLabel("Cont");
    PG2Dlabel = new QLabel("0ns");
    PG2Wlabel = new QLabel("0ns");

    PG3Olabel = new QLabel("3V Norm");
    PG3Tlabel = new QLabel("+ Osc");
    PG3Glabel = new QLabel("Cont");
    PG3Dlabel = new QLabel("0ns");
    PG3Wlabel = new QLabel("0ns");

    PG4Olabel = new QLabel("3V Norm");
    PG4Tlabel = new QLabel("+ Osc");
    PG4Glabel = new QLabel("Cont");
    PG4Dlabel = new QLabel("0ns");
    PG4Wlabel = new QLabel("0ns");

    ModOlabel = new QLabel("3V Norm");
    ModTlabel = new QLabel("+ Osc");
    ModGlabel = new QLabel("Cont");
    ModDlabel = new QLabel("0ns");
    ModWlabel = new QLabel("0ns");

    CntOlabel = new QLabel("3V Norm");
    CntTlabel = new QLabel("+ Osc");
    CntGlabel = new QLabel("Cont");
    CntDlabel = new QLabel("0ns");
    CntWlabel = new QLabel("0ns");



    QGridLayout *settingstablelayout = new QGridLayout;
    settingstablelayout->addWidget(OscCollabel  ,0,1,1,1);
    settingstablelayout->addWidget(PG1Collabel  ,0,2,1,1);
    settingstablelayout->addWidget(PG2Collabel  ,0,3,1,1);
    settingstablelayout->addWidget(PG3Collabel  ,0,4,1,1);
    settingstablelayout->addWidget(PG4Collabel  ,0,5,1,1);
    settingstablelayout->addWidget(ModCollabel  ,0,6,1,1);
    settingstablelayout->addWidget(CntCollabel  ,0,7,1,1);

    settingstablelayout->addWidget(RowOlabel    ,1,0,1,1);
    settingstablelayout->addWidget(OscOlabel    ,1,1,1,1);
    settingstablelayout->addWidget(PG1Olabel    ,1,2,1,1);
    settingstablelayout->addWidget(PG2Olabel    ,1,3,1,1);
    settingstablelayout->addWidget(PG3Olabel    ,1,4,1,1);
    settingstablelayout->addWidget(PG4Olabel    ,1,5,1,1);
    settingstablelayout->addWidget(ModOlabel    ,1,6,1,1);
    settingstablelayout->addWidget(CntOlabel    ,1,7,1,1);

    settingstablelayout->addWidget(RowTlabel    ,2,0,1,1);
    settingstablelayout->addWidget(OscTlabel    ,2,1,1,1);
    settingstablelayout->addWidget(PG1Tlabel    ,2,2,1,1);
    settingstablelayout->addWidget(PG2Tlabel    ,2,3,1,1);
    settingstablelayout->addWidget(PG3Tlabel    ,2,4,1,1);
    settingstablelayout->addWidget(PG4Tlabel    ,2,5,1,1);
    settingstablelayout->addWidget(ModTlabel    ,2,6,1,1);
    settingstablelayout->addWidget(CntTlabel    ,2,7,1,1);

    settingstablelayout->addWidget(RowGlabel    ,3,0,1,1);
    settingstablelayout->addWidget(OscGlabel    ,3,1,1,1);
    settingstablelayout->addWidget(PG1Glabel    ,3,2,1,1);
    settingstablelayout->addWidget(PG2Glabel    ,3,3,1,1);
    settingstablelayout->addWidget(PG3Glabel    ,3,4,1,1);
    settingstablelayout->addWidget(PG4Glabel    ,3,5,1,1);
    settingstablelayout->addWidget(ModGlabel    ,3,6,1,1);
    settingstablelayout->addWidget(CntGlabel    ,3,7,1,1);

    settingstablelayout->addWidget(RowDlabel    ,4,0,1,1);
    settingstablelayout->addWidget(OscDlabel    ,4,1,1,1);
    settingstablelayout->addWidget(PG1Dlabel    ,4,2,1,1);
    settingstablelayout->addWidget(PG2Dlabel    ,4,3,1,1);
    settingstablelayout->addWidget(PG3Dlabel    ,4,4,1,1);
    settingstablelayout->addWidget(PG4Dlabel    ,4,5,1,1);
    settingstablelayout->addWidget(ModDlabel    ,4,6,1,1);
    settingstablelayout->addWidget(CntDlabel    ,4,7,1,1);

    settingstablelayout->addWidget(RowWlabel    ,5,0,1,1);
    settingstablelayout->addWidget(OscWlabel    ,5,1,1,1);
    settingstablelayout->addWidget(PG1Wlabel    ,5,2,1,1);
    settingstablelayout->addWidget(PG2Wlabel    ,5,3,1,1);
    settingstablelayout->addWidget(PG3Wlabel    ,5,4,1,1);
    settingstablelayout->addWidget(PG4Wlabel    ,5,5,1,1);
    settingstablelayout->addWidget(ModWlabel    ,5,6,1,1);
    settingstablelayout->addWidget(CntWlabel    ,5,7,1,1);

    setLayout(settingstablelayout);
//    setmargins(2);

    QFile qss("PGC2stylesheet.qss");      // load a stylesheet to handle button color changes etc
    if (qss.exists()) qDebug() << "its real";
    qss.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(qss.readAll());
    qDebug() << styleSheet;
    qss.close();
    qApp->setStyleSheet(styleSheet);

}
