#ifndef USERLOGIN_H
#define USERLOGIN_H
//

#include <QVector>
#include <QMainWindow>
#include <QString>
#include <QKeyEvent>
#include "mainwindow.h"
#include "citizenreport.h"
#include "classcitizen.h"


QT_BEGIN_NAMESPACE
namespace Ui { class UserLogin; }
QT_END_NAMESPACE

class UserLogin : public QMainWindow
{
    Q_OBJECT

private:
    Ui::UserLogin *ui;
    QMainWindow *mainWindow;
    QVector<classCitizen*> userList;
    classCitizen *ptrCurrentCitizen;

    QVector<citizenReport*> reportList;
    citizenReport **ptrNewReport;

   protected:
   void keyPressEvent(QKeyEvent* ptrPressEnter);


public:
    explicit UserLogin(QWidget *parent = nullptr);
    explicit UserLogin(classCitizen* ptrCurrentCitizen, QWidget *parent = nullptr);
    explicit UserLogin(citizenReport*& ptrNewReport, QWidget *parent = nullptr);
    ~UserLogin();
    void login();

    void pbHome();

    void pbMyDetails();
    void pbShowCertificate();
    void pbShowQRCode();
    void pbShowTestResult();
    void pbFullScreen();
    void pbClose();

    void pbContactUs();
    void submitReport();
    void getVaccinatedLink();
    void getTestedLink();
    void learnMoreLink();
    void covidRecordLink();

    void logout();
};

#endif // USERLOGIN_H
