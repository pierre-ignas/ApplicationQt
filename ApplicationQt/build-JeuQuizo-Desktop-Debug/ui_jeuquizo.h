/********************************************************************************
** Form generated from reading UI file 'jeuquizo.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JEUQUIZO_H
#define UI_JEUQUIZO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JeuQuizo
{
public:
    QWidget *centralWidget;
    QFormLayout *formLayout;
    QGraphicsView *ma_vue;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *JeuQuizo)
    {
        if (JeuQuizo->objectName().isEmpty())
            JeuQuizo->setObjectName(QStringLiteral("JeuQuizo"));
        JeuQuizo->resize(400, 300);
        centralWidget = new QWidget(JeuQuizo);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        formLayout = new QFormLayout(centralWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        ma_vue = new QGraphicsView(centralWidget);
        ma_vue->setObjectName(QStringLiteral("ma_vue"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, ma_vue);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton);

        JeuQuizo->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(JeuQuizo);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 27));
        JeuQuizo->setMenuBar(menuBar);
        mainToolBar = new QToolBar(JeuQuizo);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        JeuQuizo->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(JeuQuizo);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        JeuQuizo->setStatusBar(statusBar);

        retranslateUi(JeuQuizo);

        QMetaObject::connectSlotsByName(JeuQuizo);
    } // setupUi

    void retranslateUi(QMainWindow *JeuQuizo)
    {
        JeuQuizo->setWindowTitle(QApplication::translate("JeuQuizo", "JeuQuizo", 0));
        pushButton->setText(QApplication::translate("JeuQuizo", "Quitter", 0));
    } // retranslateUi

};

namespace Ui {
    class JeuQuizo: public Ui_JeuQuizo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JEUQUIZO_H
