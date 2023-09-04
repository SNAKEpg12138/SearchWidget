#ifndef MLINEEDIT_H
#define MLINEEDIT_H

#include <QLineEdit>
#include <QHBoxLayout>

class MLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit MLineEdit(QWidget *parent = nullptr);

signals:

private:
    QHBoxLayout* layout;

};

#endif // MLINEEDIT_H
