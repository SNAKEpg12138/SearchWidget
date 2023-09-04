#include "mywidgets.h"
#include "ui_mywidgets.h"

#include <QPushButton>
#include <QIcon>
#include <QCheckBox>
#include <QDebug>
#include <QListWidgetItem>
#include "mlineedit.h"

MyWidgets::MyWidgets(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidgets)
{
    ui->setupUi(this);

//    QPushButton* btn = new QPushButton(this);
//    btn->setText(tr("Search"));
//    btn->setIcon(QIcon(":/icons/search.svg"));
//    btn->setToolTip(tr("Search Applications"));

//    QString qss = QString(
//            "QPushButton{            "
//                    "background-color: white;"
//                    "border:1px solid white;"
//                    "border-radius: 10px;"
//                    "}"
//            "QPushButton:hover{background-color:#F0F0F0;}"
//            "QToolTip{background-color:white;};"
//        );

//    btn->setStyleSheet(qss);
//    btn->move(100, 100);

//    MLineEdit* lineEdit = new MLineEdit(this);
//    lineEdit->move(200, 200);

    qlCheck << tr("whatsApp") << tr("weChat") << tr("QQ") << tr("Telegram") << tr("twitter");

//    connect(ui->pushButton, &QPushButton::clicked, [&](){
//        QCheckBox* checkBox = new QCheckBox(this);
//        checkBox->setText(tr("check"));

//        QListWidgetItem* listItem = new QListWidgetItem;
//        ui->listWidget->addItem(listItem);
//        ui->listWidget->setItemWidget(listItem, checkBox);
//    });

    connect(ui->lineEdit, &QLineEdit::textChanged, this, &MyWidgets::textChangeSlot);
}

MyWidgets::~MyWidgets()
{
    delete ui;
}

void MyWidgets::textChangeSlot(const QString& text)
{
    QString qsInput = ui->lineEdit->text();

    qDebug() << qsInput;

    ui->listWidget->clear();

    if (qsInput.isEmpty())
    {
        return;
    }



    for (QString qs : qlCheck)
    {
        if (qs.contains(qsInput, Qt::CaseInsensitive))
        {
            QCheckBox* checkBox = new QCheckBox(this);
            checkBox->setText(qs);

            QListWidgetItem* listItem = new QListWidgetItem();
            ui->listWidget->addItem(listItem);
            ui->listWidget->setItemWidget(listItem, checkBox);
        }
    }
}

