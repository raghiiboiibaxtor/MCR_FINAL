// Welcome to My Covid Record!
// An application that tracks the vaccine status of citizens.
// Log in using these details: NHIAdmin, admin@mycovidrecord.co.nz , 4242
// This application is designed for desktop and is entirely open source.
// Enjoy it!
// Designed and developed by Tess Williams & Raghiiboii Baxtor

// Initialising Header Guards
#ifndef USERLOGIN_H
#define USERLOGIN_H
// Including Qt Libraries
#include <QVector>
#include <QMainWindow>
#include <QString>
#include <QKeyEvent>
#include "mainwindow.h"
#include "citizenreport.h"
#include "classcitizen.h"

// Defining UI Type
QT_BEGIN_NAMESPACE
namespace Ui { class UserLogin; }
QT_END_NAMESPACE
// Initialising class UserLogin
class UserLogin : public QMainWindow
{
    Q_OBJECT
// Declaring private attributes of class
private:
    Ui::UserLogin *ui;
    QMainWindow *mainWindow;
    QVector<classCitizen*> userList;
    classCitizen *ptrCurrentCitizen;

    QVector<citizenReport*> reportList;
    citizenReport **ptrNewReport;

// Declaring protected attributes of class
protected:
   void keyPressEvent(QKeyEvent* ptrPressEnter);

// Declaring public attributes of class
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
    void pbClose();

    void pbContactUs();
    void submitReport();
    void getVaccinatedLink();
    void getTestedLink();
    void learnMoreLink();
    void covidRecordLink();
    void liveFeedLink();

    void logout();
};

#endif // Ending header guard: USERLOGIN_H
