#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QWidget>

namespace Ui {
class LoginDialog;
}

namespace IRCData {
    typedef struct userData {
        QString username;
        QString password;
        QString perrmission; // ??
    } UserData;
}

class LoginDialog : public QWidget
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

signals:
    void OnLoggedIn(IRCData::UserData *userData);
    void OnClose();

private slots:
    void on_button_login_clicked();
    void on_button_quit_clicked();

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
