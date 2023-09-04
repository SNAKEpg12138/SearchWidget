#ifndef MYWIDGETS_H
#define MYWIDGETS_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MyWidgets; }
QT_END_NAMESPACE

class MyWidgets : public QWidget
{
    Q_OBJECT

public:
    MyWidgets(QWidget *parent = nullptr);
    ~MyWidgets();

public slots:
    void textChangeSlot(const QString& text);

private:
    Ui::MyWidgets *ui;

    QStringList qlCheck;
};
#endif // MYWIDGETS_H
