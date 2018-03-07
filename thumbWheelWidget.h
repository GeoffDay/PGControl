#ifndef THUMBWHEELWIDGET_H
#define THUMBWHEELWIDGET_H

#include "ui_thumbWheelWidget.h"


class thumbWheelWidget : public QWidget
{
    Q_OBJECT

public:
    thumbWheelWidget(QWidget *parent = 0);
    void setGBName(QString tTitle);
    void setValue(quint32 value);
    quint32 value();

signals:
    void valueChanged(int thumbWheelVal);

private slots:
    void on_AddOne_Clicked();
    void on_AddTen_Clicked();
    void on_AddHundred_Clicked();
    void on_AddThousand_Clicked();
    void on_AddTenThou_Clicked();
    void on_AddHundredThou_Clicked();
    void on_SubOne_Clicked();
    void on_SubTen_Clicked();
    void on_SubHundred_Clicked();
    void on_SubThousand_Clicked();
    void on_SubTenThou_Clicked();
    void on_SubHundredThou_Clicked();

    void enableSubtractButtons();


protected:
    QValidator::State validate(QString &text, int &pos) const;

private:
    Ui::thumbWheelWidget ui;
    quint32 thumbWheelVal;
    QRegExpValidator *validator;
};

#endif // THUMBWHEELWIDGET_H
