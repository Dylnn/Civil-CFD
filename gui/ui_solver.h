/********************************************************************************
** Form generated from reading UI file 'solver.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLVER_H
#define UI_SOLVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Solver
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidget_2;
    QCustomPlot *plot;
    QCustomPlot *flow;
    QPushButton *Return;
    QLabel *status;
    QPlainTextEdit *output;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QProgressBar *progressBar;
    QPushButton *Stop;

    void setupUi(QDialog *Solver)
    {
        if (Solver->objectName().isEmpty())
            Solver->setObjectName(QString::fromUtf8("Solver"));
        Solver->resize(627, 715);
        gridLayout_2 = new QGridLayout(Solver);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tabWidget_2 = new QTabWidget(Solver);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setMinimumSize(QSize(0, 300));
        plot = new QCustomPlot();
        plot->setObjectName(QString::fromUtf8("plot"));
        tabWidget_2->addTab(plot, QString());
        flow = new QCustomPlot();
        flow->setObjectName(QString::fromUtf8("flow"));
        tabWidget_2->addTab(flow, QString());
        plot->raise();

        gridLayout_5->addWidget(tabWidget_2, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_5, 6, 0, 1, 5);

        Return = new QPushButton(Solver);
        Return->setObjectName(QString::fromUtf8("Return"));
        Return->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Return->sizePolicy().hasHeightForWidth());
        Return->setSizePolicy(sizePolicy);
        Return->setMinimumSize(QSize(150, 0));
        Return->setMaximumSize(QSize(150, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/resources/system-log-out.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Return->setIcon(icon);
        Return->setIconSize(QSize(24, 24));

        gridLayout->addWidget(Return, 3, 3, 1, 1);

        status = new QLabel(Solver);
        status->setObjectName(QString::fromUtf8("status"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(status->sizePolicy().hasHeightForWidth());
        status->setSizePolicy(sizePolicy1);
        status->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(status, 0, 1, 1, 3, Qt::AlignHCenter);

        output = new QPlainTextEdit(Solver);
        output->setObjectName(QString::fromUtf8("output"));
        output->setMinimumSize(QSize(0, 250));

        gridLayout->addWidget(output, 7, 0, 1, 5);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 5, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        progressBar = new QProgressBar(Solver);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 1, 0, 1, 5);

        Stop = new QPushButton(Solver);
        Stop->setObjectName(QString::fromUtf8("Stop"));
        sizePolicy.setHeightForWidth(Stop->sizePolicy().hasHeightForWidth());
        Stop->setSizePolicy(sizePolicy);
        Stop->setMinimumSize(QSize(150, 0));
        Stop->setMaximumSize(QSize(150, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/resources/process-stop.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Stop->setIcon(icon1);
        Stop->setIconSize(QSize(24, 24));

        gridLayout->addWidget(Stop, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Solver);

        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Solver);
    } // setupUi

    void retranslateUi(QDialog *Solver)
    {
        Solver->setWindowTitle(QApplication::translate("Solver", "Run Simulation", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(plot), QApplication::translate("Solver", "Timestep Size", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(flow), QApplication::translate("Solver", "Flow Measurement", 0, QApplication::UnicodeUTF8));
        Return->setText(QApplication::translate("Solver", "Return", 0, QApplication::UnicodeUTF8));
        status->setText(QApplication::translate("Solver", "Status", 0, QApplication::UnicodeUTF8));
        Stop->setText(QApplication::translate("Solver", "Stop Solver", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Solver: public Ui_Solver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLVER_H
