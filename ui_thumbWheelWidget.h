/********************************************************************************
** Form generated from reading UI file 'thumbWheelWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THUMBWHEELWIDGET_H
#define UI_THUMBWHEELWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thumbWheelWidget
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddHundredThouButton;
    QPushButton *AddTenThouButton;
    QPushButton *AddThousandButton;
    QSpacerItem *dotlSpacer;
    QPushButton *AddHundredButton;
    QPushButton *AddTenButton;
    QPushButton *AddOneButton;
    QSpacerItem *timeSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinBox;
    QLabel *timelabel;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *SubHundredThouButton;
    QPushButton *SubTenThouButton;
    QPushButton *SubThousandButton;
    QSpacerItem *down;
    QPushButton *SubHundredButton;
    QPushButton *SubTenButton;
    QPushButton *SubOneButton;
    QSpacerItem *timeSpacerdown;

    void setupUi(QWidget *thumbWheelWidget)
    {
        if (thumbWheelWidget->objectName().isEmpty())
            thumbWheelWidget->setObjectName(QStringLiteral("thumbWheelWidget"));
        thumbWheelWidget->resize(135, 140);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(thumbWheelWidget->sizePolicy().hasHeightForWidth());
        thumbWheelWidget->setSizePolicy(sizePolicy);
        thumbWheelWidget->setMinimumSize(QSize(110, 110));
        thumbWheelWidget->setMaximumSize(QSize(340, 300));
        groupBox = new QGroupBox(thumbWheelWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 120, 110));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMaximumSize(QSize(300, 200));
        QFont font;
        font.setPointSize(9);
        groupBox->setFont(font);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 20, 120, 90));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AddHundredThouButton = new QPushButton(layoutWidget);
        AddHundredThouButton->setObjectName(QStringLiteral("AddHundredThouButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(AddHundredThouButton->sizePolicy().hasHeightForWidth());
        AddHundredThouButton->setSizePolicy(sizePolicy2);
        AddHundredThouButton->setMaximumSize(QSize(14, 25));
        QIcon icon;
        icon.addFile(QStringLiteral(":/up_arrow.svg"), QSize(), QIcon::Normal, QIcon::Off);
        AddHundredThouButton->setIcon(icon);

        horizontalLayout->addWidget(AddHundredThouButton);

        AddTenThouButton = new QPushButton(layoutWidget);
        AddTenThouButton->setObjectName(QStringLiteral("AddTenThouButton"));
        sizePolicy2.setHeightForWidth(AddTenThouButton->sizePolicy().hasHeightForWidth());
        AddTenThouButton->setSizePolicy(sizePolicy2);
        AddTenThouButton->setMaximumSize(QSize(14, 25));
        AddTenThouButton->setIcon(icon);

        horizontalLayout->addWidget(AddTenThouButton);

        AddThousandButton = new QPushButton(layoutWidget);
        AddThousandButton->setObjectName(QStringLiteral("AddThousandButton"));
        sizePolicy2.setHeightForWidth(AddThousandButton->sizePolicy().hasHeightForWidth());
        AddThousandButton->setSizePolicy(sizePolicy2);
        AddThousandButton->setMaximumSize(QSize(14, 25));
        AddThousandButton->setIcon(icon);

        horizontalLayout->addWidget(AddThousandButton);

        dotlSpacer = new QSpacerItem(4, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(dotlSpacer);

        AddHundredButton = new QPushButton(layoutWidget);
        AddHundredButton->setObjectName(QStringLiteral("AddHundredButton"));
        sizePolicy2.setHeightForWidth(AddHundredButton->sizePolicy().hasHeightForWidth());
        AddHundredButton->setSizePolicy(sizePolicy2);
        AddHundredButton->setMaximumSize(QSize(14, 25));
        AddHundredButton->setLayoutDirection(Qt::LeftToRight);
        AddHundredButton->setIcon(icon);

        horizontalLayout->addWidget(AddHundredButton);

        AddTenButton = new QPushButton(layoutWidget);
        AddTenButton->setObjectName(QStringLiteral("AddTenButton"));
        sizePolicy2.setHeightForWidth(AddTenButton->sizePolicy().hasHeightForWidth());
        AddTenButton->setSizePolicy(sizePolicy2);
        AddTenButton->setMaximumSize(QSize(14, 25));
        AddTenButton->setIcon(icon);

        horizontalLayout->addWidget(AddTenButton);

        AddOneButton = new QPushButton(layoutWidget);
        AddOneButton->setObjectName(QStringLiteral("AddOneButton"));
        sizePolicy2.setHeightForWidth(AddOneButton->sizePolicy().hasHeightForWidth());
        AddOneButton->setSizePolicy(sizePolicy2);
        AddOneButton->setMaximumSize(QSize(14, 25));
        AddOneButton->setIcon(icon);

        horizontalLayout->addWidget(AddOneButton);

        timeSpacer = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(timeSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximumSize(QSize(86, 37));
        QFont font1;
        font1.setFamily(QStringLiteral("Serif"));
        font1.setPointSize(14);
        font1.setKerning(true);
        spinBox->setFont(font1);
        spinBox->setLayoutDirection(Qt::LeftToRight);
        spinBox->setFrame(true);
        spinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox->setProperty("showGroupSeparator", QVariant(true));
        spinBox->setMaximum(327680);
        spinBox->setSingleStep(5);
        spinBox->setValue(0);

        horizontalLayout_2->addWidget(spinBox);

        timelabel = new QLabel(layoutWidget);
        timelabel->setObjectName(QStringLiteral("timelabel"));
        sizePolicy2.setHeightForWidth(timelabel->sizePolicy().hasHeightForWidth());
        timelabel->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(12);
        timelabel->setFont(font2);

        horizontalLayout_2->addWidget(timelabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        SubHundredThouButton = new QPushButton(layoutWidget);
        SubHundredThouButton->setObjectName(QStringLiteral("SubHundredThouButton"));
        SubHundredThouButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(SubHundredThouButton->sizePolicy().hasHeightForWidth());
        SubHundredThouButton->setSizePolicy(sizePolicy2);
        SubHundredThouButton->setMaximumSize(QSize(14, 25));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/down_arrow.svg"), QSize(), QIcon::Normal, QIcon::Off);
        SubHundredThouButton->setIcon(icon1);

        horizontalLayout_3->addWidget(SubHundredThouButton);

        SubTenThouButton = new QPushButton(layoutWidget);
        SubTenThouButton->setObjectName(QStringLiteral("SubTenThouButton"));
        SubTenThouButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(SubTenThouButton->sizePolicy().hasHeightForWidth());
        SubTenThouButton->setSizePolicy(sizePolicy2);
        SubTenThouButton->setMaximumSize(QSize(14, 25));
        SubTenThouButton->setIcon(icon1);

        horizontalLayout_3->addWidget(SubTenThouButton);

        SubThousandButton = new QPushButton(layoutWidget);
        SubThousandButton->setObjectName(QStringLiteral("SubThousandButton"));
        SubThousandButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(SubThousandButton->sizePolicy().hasHeightForWidth());
        SubThousandButton->setSizePolicy(sizePolicy2);
        SubThousandButton->setMaximumSize(QSize(14, 25));
        SubThousandButton->setIcon(icon1);

        horizontalLayout_3->addWidget(SubThousandButton);

        down = new QSpacerItem(4, 22, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(down);

        SubHundredButton = new QPushButton(layoutWidget);
        SubHundredButton->setObjectName(QStringLiteral("SubHundredButton"));
        SubHundredButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(SubHundredButton->sizePolicy().hasHeightForWidth());
        SubHundredButton->setSizePolicy(sizePolicy2);
        SubHundredButton->setMaximumSize(QSize(14, 25));
        SubHundredButton->setIcon(icon1);

        horizontalLayout_3->addWidget(SubHundredButton);

        SubTenButton = new QPushButton(layoutWidget);
        SubTenButton->setObjectName(QStringLiteral("SubTenButton"));
        SubTenButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(SubTenButton->sizePolicy().hasHeightForWidth());
        SubTenButton->setSizePolicy(sizePolicy2);
        SubTenButton->setMaximumSize(QSize(14, 25));
        SubTenButton->setIcon(icon1);

        horizontalLayout_3->addWidget(SubTenButton);

        SubOneButton = new QPushButton(layoutWidget);
        SubOneButton->setObjectName(QStringLiteral("SubOneButton"));
        SubOneButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(SubOneButton->sizePolicy().hasHeightForWidth());
        SubOneButton->setSizePolicy(sizePolicy2);
        SubOneButton->setMaximumSize(QSize(14, 25));
        SubOneButton->setIcon(icon1);

        horizontalLayout_3->addWidget(SubOneButton);

        timeSpacerdown = new QSpacerItem(25, 22, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(timeSpacerdown);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(thumbWheelWidget);
        QObject::connect(SubTenButton, SIGNAL(clicked()), thumbWheelWidget, SLOT(on_SubTen_Clicked()));
        QObject::connect(AddThousandButton, SIGNAL(clicked()), thumbWheelWidget, SLOT(on_AddThousand_Clicked()));
        QObject::connect(SubOneButton, SIGNAL(clicked()), thumbWheelWidget, SLOT(on_SubOne_Clicked()));
        QObject::connect(SubHundredButton, SIGNAL(clicked()), thumbWheelWidget, SLOT(on_SubHundred_Clicked()));
        QObject::connect(AddTenButton, SIGNAL(clicked()), thumbWheelWidget, SLOT(on_AddTen_Clicked()));
        QObject::connect(AddOneButton, SIGNAL(clicked()), thumbWheelWidget, SLOT(on_AddOne_Clicked()));
        QObject::connect(AddHundredButton, SIGNAL(clicked()), thumbWheelWidget, SLOT(on_AddHundred_Clicked()));
        QObject::connect(SubThousandButton, SIGNAL(clicked()), thumbWheelWidget, SLOT(on_SubThousand_Clicked()));
        QObject::connect(AddTenThouButton, SIGNAL(clicked()), thumbWheelWidget, SLOT(on_AddTenThou_Clicked()));
        QObject::connect(AddHundredThouButton, SIGNAL(clicked()), thumbWheelWidget, SLOT(on_AddHundredThou_Clicked()));
        QObject::connect(SubTenThouButton, SIGNAL(clicked()), thumbWheelWidget, SLOT(on_SubTenThou_Clicked()));
        QObject::connect(SubHundredThouButton, SIGNAL(clicked()), thumbWheelWidget, SLOT(on_SubHundredThou_Clicked()));

        QMetaObject::connectSlotsByName(thumbWheelWidget);
    } // setupUi

    void retranslateUi(QWidget *thumbWheelWidget)
    {
        thumbWheelWidget->setWindowTitle(QApplication::translate("thumbWheelWidget", "Widget", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("thumbWheelWidget", "GroupBox", Q_NULLPTR));
        AddHundredThouButton->setText(QString());
        AddTenThouButton->setText(QString());
        AddThousandButton->setText(QString());
        AddHundredButton->setText(QString());
        AddTenButton->setText(QString());
        AddOneButton->setText(QString());
        timelabel->setText(QApplication::translate("thumbWheelWidget", "ns", Q_NULLPTR));
        SubHundredThouButton->setText(QString());
        SubTenThouButton->setText(QString());
        SubThousandButton->setText(QString());
        SubHundredButton->setText(QString());
        SubTenButton->setText(QString());
        SubOneButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class thumbWheelWidget: public Ui_thumbWheelWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THUMBWHEELWIDGET_H
