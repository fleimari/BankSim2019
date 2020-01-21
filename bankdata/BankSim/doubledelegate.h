#ifndef DOUBLEDELEGATE_H
#define DOUBLEDELEGATE_H
#include <QStyledItemDelegate>

class DoubleDelegate: public QStyledItemDelegate
{
    Q_OBJECT
public:

    DoubleDelegate(QObject* parent=0) : QStyledItemDelegate(parent) { }
    virtual ~DoubleDelegate() { }

    virtual QString displayText(const QVariant &value, const QLocale &locale) const
    {
        if (value.type() == QVariant::Double) {
            return locale.toString( value.toDouble(), 'f', 2 )+" €";
        }
        return QStyledItemDelegate::displayText(value, locale);
    }
};

#endif // DOUBLEDELEGATE_H
