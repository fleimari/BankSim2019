#include "logincomponent.h"

LoginComponent::LoginComponent()
{
}

void LoginComponent::callLoginComponent(QString sendCard)
{
    // Objects
    objectLoginMotorDialog = new LoginMotorDialog;

    // Connections
    connect(objectLoginMotorDialog, SIGNAL(signalLoginStatus(bool)), this, SLOT(sendLoginStatus(bool))); // Motor to login-component
    connect(objectLoginMotorDialog, SIGNAL(signalCancelSession()), this, SLOT(cancelSession())); // Motor to login-component

    // Motor
    objectLoginMotorDialog->sendCardNumber(sendCard);
    objectLoginMotorDialog->exec();
    delete objectLoginMotorDialog;

}

void LoginComponent::sendLoginStatus(bool loginStatus)
{
    emit signalLoginStatus(loginStatus);
}

void LoginComponent::cancelSession()
{
    emit signalCancelSession();
}
