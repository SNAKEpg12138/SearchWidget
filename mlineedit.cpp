#include "mlineedit.h"
#include <QLabel>
#include <QDebug>

MLineEdit::MLineEdit(QWidget *parent)
    : QLineEdit{parent}
{
    layout = new QHBoxLayout(this);

    QLabel* prefixIcon = new QLabel(this);
    QPixmap pix(":/icons/search.svg");
    prefixIcon->setPixmap(pix);
    prefixIcon->setFixedSize(pix.size());

    layout->addWidget(prefixIcon);
    layout->setContentsMargins(1, 1, 1, 1);
    layout->addStretch();
    layout->setDirection(QBoxLayout::LeftToRight);

    qDebug() << font();

    setFont(QFont("SimSun", 15));

    setTextMargins(prefixIcon->width(), 1, 1, 1);

    QString qss = QString("QLineEdit{border:1px solid gray;border-radius:10px;}");
    setStyleSheet(qss);
}
