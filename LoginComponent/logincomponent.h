#ifndef LOGINCOMPONENT_H
#define LOGINCOMPONENT_H

#include "logincomponent_global.h"
#include "loginmotordialog.h"
#include <QDebug>

class LOGINCOMPONENTSHARED_EXPORT LoginComponent : public QObject
{
    Q_OBJECT

public:
    LoginComponent();
    void LOGINCOMPONENTSHARED_EXPORT callLoginComponent(QString currentCard);

signals:
    void LOGINCOMPONENTSHARED_EXPORT signalLoginStatus(bool loginStatus);
    void LOGINCOMPONENTSHARED_EXPORT signalCancelSession();

private slots:
    void LOGINCOMPONENTSHARED_EXPORT sendLoginStatus(bool loginStatus);
    void LOGINCOMPONENTSHARED_EXPORT cancelSession();

private:
    LoginMotorDialog *objectLoginMotorDialog;
};

#endif // LOGINCOMPONENT_H
