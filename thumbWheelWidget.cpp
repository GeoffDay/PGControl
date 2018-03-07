//this is a 6 digit decimal version

#include "thumbWheelWidget.h"

thumbWheelWidget::thumbWheelWidget(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);
    validator = new QRegExpValidator(QRegExp("[0-9]{1,8}"), this);
}


QValidator::State thumbWheelWidget::validate(QString &text, int &pos) const
{
    return validator->validate(text, pos);
}


void thumbWheelWidget::setGBName(QString tTitle)
{
    ui.groupBox->setTitle(tTitle);
}


void thumbWheelWidget::setValue(quint32 value)
{
    ui.spinBox->setValue(value);
    thumbWheelVal = ui.spinBox->value();
    enableSubtractButtons();
}


quint32 thumbWheelWidget::value()
{
    return thumbWheelVal;
}


void thumbWheelWidget::enableSubtractButtons()
{
    if (thumbWheelVal > 327680) {thumbWheelVal = 327680;}

    if (thumbWheelVal > 0) {ui.SubOneButton->setEnabled(true);}
    if (thumbWheelVal > 9) {ui.SubTenButton->setEnabled(true);}
    if (thumbWheelVal > 99) {ui.SubHundredButton->setEnabled(true);}
    if (thumbWheelVal > 999) {ui.SubThousandButton->setEnabled(true);}
    if (thumbWheelVal > 9999) {ui.SubTenThouButton->setEnabled(true);}
    if (thumbWheelVal > 99999) {ui.SubHundredThouButton->setEnabled(true);}

    if (thumbWheelVal < 5) {ui.SubOneButton->setEnabled(false);}
    if (thumbWheelVal < 10) {ui.SubTenButton->setEnabled(false);}
    if (thumbWheelVal < 100) {ui.SubHundredButton->setEnabled(false);}
    if (thumbWheelVal < 1000) {ui.SubThousandButton->setEnabled(false);}
    if (thumbWheelVal < 10000) {ui.SubTenThouButton->setEnabled(false);}
    if (thumbWheelVal < 100000) {ui.SubHundredThouButton->setEnabled(false);}
}


void thumbWheelWidget::on_AddOne_Clicked()
{
    thumbWheelVal = ui.spinBox->value() + 5;
    enableSubtractButtons();
    ui.spinBox->setValue(thumbWheelVal);
    emit valueChanged(thumbWheelVal);
}


void thumbWheelWidget::on_AddTen_Clicked()
{
    thumbWheelVal = ui.spinBox->value() + 10;
    enableSubtractButtons();
    ui.spinBox->setValue(thumbWheelVal);
    emit valueChanged(thumbWheelVal);
}


void thumbWheelWidget::on_AddHundred_Clicked()
{
    thumbWheelVal = ui.spinBox->value() + 100;
    enableSubtractButtons();
    ui.spinBox->setValue(thumbWheelVal);
    emit valueChanged(thumbWheelVal);
}


void thumbWheelWidget::on_AddThousand_Clicked()
{
    thumbWheelVal = ui.spinBox->value() + 1000;
    enableSubtractButtons();
    ui.spinBox->setValue(thumbWheelVal);
    emit valueChanged(thumbWheelVal);
}


void thumbWheelWidget::on_AddTenThou_Clicked()
{
    thumbWheelVal = ui.spinBox->value() + 10000;
    enableSubtractButtons();
    ui.spinBox->setValue(thumbWheelVal);
    emit valueChanged(thumbWheelVal);
}


void thumbWheelWidget::on_AddHundredThou_Clicked()
{
    thumbWheelVal = ui.spinBox->value() + 100000;
    enableSubtractButtons();
    ui.spinBox->setValue(thumbWheelVal);
    emit valueChanged(thumbWheelVal);
}


void thumbWheelWidget::on_SubOne_Clicked()
{
    thumbWheelVal = ui.spinBox->value() - 5;
    enableSubtractButtons();
    ui.spinBox->setValue(thumbWheelVal);
    emit valueChanged(thumbWheelVal);
}


void thumbWheelWidget::on_SubTen_Clicked()
{
    thumbWheelVal = ui.spinBox->value() - 10;
    enableSubtractButtons();
    ui.spinBox->setValue(thumbWheelVal);
    emit valueChanged(thumbWheelVal);
}


void thumbWheelWidget::on_SubHundred_Clicked()
{
    thumbWheelVal = ui.spinBox->value() - 100;
    enableSubtractButtons();
    ui.spinBox->setValue(thumbWheelVal);
    emit valueChanged(thumbWheelVal);
}


void thumbWheelWidget::on_SubThousand_Clicked()
{
    thumbWheelVal = ui.spinBox->value() - 1000;
    enableSubtractButtons();
    ui.spinBox->setValue(thumbWheelVal);
    emit valueChanged(thumbWheelVal);
}


void thumbWheelWidget::on_SubTenThou_Clicked()
{
    thumbWheelVal = ui.spinBox->value() - 10000;
    enableSubtractButtons();
    ui.spinBox->setValue(thumbWheelVal);
    emit valueChanged(thumbWheelVal);
}


void thumbWheelWidget::on_SubHundredThou_Clicked()
{
    thumbWheelVal = ui.spinBox->value() - 100000;
    enableSubtractButtons();
    ui.spinBox->setValue(thumbWheelVal);
    emit valueChanged(thumbWheelVal);
}

