#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sendfileclient.h"

class SendFileClient : public QMainWindow
{
    Q_OBJECT

public:
    SendFileClient(QWidget *parent = Q_NULLPTR);

private:
    Ui::SendFileClientClass ui;
};
