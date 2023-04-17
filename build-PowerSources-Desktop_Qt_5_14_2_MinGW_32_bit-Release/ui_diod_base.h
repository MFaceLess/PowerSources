/********************************************************************************
** Form generated from reading UI file 'diod_base.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIOD_BASE_H
#define UI_DIOD_BASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_diod_base
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QSpinBox *spinBox;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;
    QPushButton *pushButton_2;

    void setupUi(QWidget *diod_base)
    {
        if (diod_base->objectName().isEmpty())
            diod_base->setObjectName(QString::fromUtf8("diod_base"));
        diod_base->resize(579, 504);
        gridLayout_3 = new QGridLayout(diod_base);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(diod_base);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        doubleSpinBox_2 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMinimum(0.000000000000000);
        doubleSpinBox_2->setMaximum(100000.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBox_2);

        doubleSpinBox_3 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setMaximum(10000.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBox_3);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_5->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(diod_base);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(100000);

        horizontalLayout_7->addWidget(spinBox);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_7->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout_7, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_2);

        tableWidget = new QTableWidget(diod_base);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);

        verticalLayout_4->addWidget(tableWidget);

        pushButton_2 = new QPushButton(diod_base);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);


        gridLayout_3->addLayout(verticalLayout_4, 0, 0, 1, 1);


        retranslateUi(diod_base);

        QMetaObject::connectSlotsByName(diod_base);
    } // setupUi

    void retranslateUi(QWidget *diod_base)
    {
        diod_base->setWindowTitle(QCoreApplication::translate("diod_base", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("diod_base", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label->setText(QCoreApplication::translate("diod_base", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\264\320\270\320\276\320\264\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("diod_base", "U\320\276\320\261\321\200_max, \320\222", nullptr));
        label_3->setText(QCoreApplication::translate("diod_base", "I\320\277\321\200, \320\220", nullptr));
        pushButton->setText(QCoreApplication::translate("diod_base", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("diod_base", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label_5->setText(QCoreApplication::translate("diod_base", "\320\235\320\276\320\274\320\265\321\200 \320\264\320\270\320\276\320\264\320\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("diod_base", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\264\320\270\320\276\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("diod_base", "\320\222\320\275\320\265\321\201\321\202\320\270 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\262 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205 \320\264\320\270\320\276\320\264\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class diod_base: public Ui_diod_base {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIOD_BASE_H
