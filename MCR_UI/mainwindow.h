// Welcome to My Covid Record!
// An application that tracks the vaccine status of citizens.
// Log in using these details: NHIAdmin, admin@mycovidrecord.co.nz , 4242
// This application is designed for desktop and is entirely open source.
// Enjoy it!
// Designed and developed by Tess Williams & Raghiiboii Baxtor

// Initialising Header Guards
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
// Including Qt Libraries
#include <QMainWindow>
#include <QListWidgetItem>
#include <QVector>
#include "classcitizen.h"
#include "citizenreport.h"
#include "userlogin.h"

// Defining UI Type
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
// Initialising class MainWindow
class MainWindow : public QMainWindow
{
    Q_OBJECT

// Declaring private attributes of class
private:
    Ui::MainWindow *ui;
    QVector<classCitizen*> userList;
    classCitizen** ptrNewCitizen; // Double pointer used for coping information and pointing it to a vecor of pointers.
    classCitizen *ptrCurrentCitizen;

    QVector<citizenReport*> reportList;
    citizenReport *ptrCurrentReport;

    QString certificateImage;
    QString qrCodeImage;
    QString testResultImage;
    QString userProfilePicture;


// Declaring public attributes of class
public:
    explicit MainWindow(QWidget *parent = nullptr);
    explicit MainWindow(classCitizen*& ptrNewCitizen, QWidget *parent = nullptr);
    explicit MainWindow(classCitizen* ptrCurrentCitizen, QWidget *parent = nullptr);
    explicit MainWindow(citizenReport* ptrCurrentReport, QWidget *parent = nullptr);
    //explicit MainWindow(classCitizen* ptrReportDetails, QWidget *parent = nullptr);
    void pbHome();
    void liveFeedLink();

    void addNewUser();
    void addCertificateImage();
    void addQRCodeImage();
    void addTestResultImage();
    void addUserPicture();
    void saveUser();
    void pbShowCertificate();
    void pbShowQRCode();
    void pbShowTestResult();
    void pbClose();
    void pbFullScreen();
    void pbCancelAdd();

    void pbAllUsers();
    void selectUserDetails();
    void searchUser();

    void editUser();
    void editCertificateImage();
    void editQRCodeImage();
    void editTestResultImage();
    void editUserPicture();
    void saveEdit();
    void pbCancelEdit();

    void pbReports();
    void selectReportDetails();
    void searchCategory();

    void pbRemoveUser();
    void logout();
    ~MainWindow();

};
#endif // MAINWINDOW_H


