//
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "classcitizen.h"

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QStringList>
#include <QVector>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include <QDir>
#include <QPixmap>
#include <QRandomGenerator>


// Admin Main Window
//*********************************************************

// Assigning Global Variables
QString certificateImageSave = ""; /// Global QString imagePaths are used as temp variables to push_back to the vector, rather that directly assiging the classCitizen attributes with the image path file.
QString qrCodeImageSave = "";
QString testResultImageSave = "";
QString userProfilePictureSave = "";

// { Overloading constructors begins :

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    // Initialising ui
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    // Hidden Ui elements upon initialisation
    ui->pbChangeCertificateEP->hide();
    ui->pbChangeQRCodeEP->hide();
    ui->pbChangeTestResultsEP->hide();
    ui->pbChangeUserPictureAP->hide();
    ui->pbChangeCertificateAP->hide();
    ui->pbChangeQRCodeAP->hide();
    ui->pbChangeTestResultsAP->hide();
    ui->pbChangeUserPictureEP->hide();

    //**********************************
    ui->pbQuickRemoveRP->hide();
    ui->labelDeleteRP->hide();
    ui->pbQuickRemoveEP->hide();
    ui->labelDeleteEP->hide();
    ui->pbQuickRemoveAP->hide();
    ui->labelDeleteAP->hide();
    //**********************************

    // Constructing File Path Directories
   //Mac Create Directory
   QDir pathDir("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files");
       if(!pathDir.exists())
       {
           QDir().mkdir("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files");
       }

       // File path for Vaccine Certificates
       //QDir pathDir0("./VaccineCertificates");
       QDir pathDir0("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/VaccineCertificates");
       if(!pathDir0.exists())
       {
           //create it!
           //QDir().mkdir("./VaccineCertificates");
           QDir().mkdir("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/VaccineCertificates");
       }

       // File path for QRCodes
       //QDir pathDir1("./QRCodes");
       QDir pathDir1("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/QRCodes");
       if(!pathDir1.exists())
       {
           //create it!
           //QDir().mkdir("./QRCodes");
           QDir().mkdir("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/QRCodes");
       }

       // File path for Test Results
       //QDir pathDir2("./TestResults");
       QDir pathDir2("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/TestResults");
       if(!pathDir2.exists())
       {
           //create it!
           //QDir().mkdir("./TestResults");
           QDir().mkdir("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/TestResults");
       }

       // File path for User Profile Pictures
       //QDir pathDir3("./userProfilePictures");
       QDir pathDir3("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/userProfilePictures");
       if(!pathDir3.exists())
       {
           //create it!
           //QDir().mkdir("./userProfilePictures");
           QDir().mkdir("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/userProfilePictures");
       }

    //Constructing Admin Profile Picture
       QPixmap pixmap1(":/res/images/adminProfilePicture.png");
       ui->displayPictureHP->setPixmap(pixmap1);
       ui->displayPictureHP->setScaledContents(true);
       ui->displayPictureAUP->setPixmap(pixmap1);
       ui->displayPictureAUP->setScaledContents(true);
       ui->displayPictureAP->setPixmap(pixmap1);
       ui->displayPictureAP->setScaledContents(true);
       ui->displayPictureEP->setPixmap(pixmap1);
       ui->displayPictureEP->setScaledContents(true);
       ui->displayPictureRP->setPixmap(pixmap1);
       ui->displayPictureRP->setScaledContents(true);
       ui->displayPictureFS->setPixmap(pixmap1);
       ui->displayPictureFS->setScaledContents(true);

    // Manual UI-Function Connections

    /// Home Buttons
    connect(ui->pbHomeHP, &QPushButton::clicked, this, &MainWindow::pbHome);
    connect(ui->pbHomeAUP, &QPushButton::clicked, this, &MainWindow::pbHome);
    connect(ui->pbHomeAP, &QPushButton::clicked, this, &MainWindow::pbHome);
    connect(ui->pbHomeRP, &QPushButton::clicked, this, &MainWindow::pbHome);
    connect(ui->pbHomeEP, &QPushButton::clicked, this, &MainWindow::pbHome);
    connect(ui->pbHomeFS, &QPushButton::clicked, this, &MainWindow::pbHome);

    /// Add User Buttons
    connect(ui->pbAddUserHP, &QPushButton::clicked, this, &MainWindow::addNewUser);
    connect(ui->pbAddUserAUP, &QPushButton::clicked, this, &MainWindow::addNewUser);
    connect(ui->pbAddUserAP, &QPushButton::clicked, this, &MainWindow::addNewUser);
    connect(ui->pbAddUserRP, &QPushButton::clicked, this, &MainWindow::addNewUser);
    connect(ui->pbAddUserEP, &QPushButton::clicked, this, &MainWindow::addNewUser);
    connect(ui->pbAddUserFS, &QPushButton::clicked, this, &MainWindow::addNewUser);


    /// All User Buttons
    connect(ui->pbAllUsersHP, &QPushButton::clicked, this, &MainWindow::pbAllUsers);
    connect(ui->pbAllUsersAUP, &QPushButton::clicked, this, &MainWindow::pbAllUsers);
    connect(ui->pbAllUsersAP, &QPushButton::clicked, this, &MainWindow::pbAllUsers);
    connect(ui->pbAllUsersRP, &QPushButton::clicked, this, &MainWindow::pbAllUsers);
    connect(ui->pbAllUsersEP, &QPushButton::clicked, this, &MainWindow::pbAllUsers);
    connect(ui->pbAllUsersFS, &QPushButton::clicked, this, &MainWindow::pbAllUsers);

    /// Report Buttons
    connect(ui->pbReportsHP, &QPushButton::clicked, this, &MainWindow::pbReports);
    connect(ui->pbReportsAUP, &QPushButton::clicked, this, &MainWindow::pbReports);
    connect(ui->pbReportsAP, &QPushButton::clicked, this, &MainWindow::pbReports);
    connect(ui->pbReportsRP, &QPushButton::clicked, this, &MainWindow::pbReports);
    connect(ui->pbReportsEP, &QPushButton::clicked, this, &MainWindow::pbReports);
    connect(ui->pbReportsFS, &QPushButton::clicked, this, &MainWindow::pbReports);

    /// Logout Buttons
     connect(ui->pbLogoutHP, &QPushButton::clicked, this, &MainWindow::logout);
     connect(ui->pbLogoutAUP, &QPushButton::clicked, this, &MainWindow::logout);
     connect(ui->pbLogoutAP, &QPushButton::clicked, this, &MainWindow::logout);
     connect(ui->pbLogoutRP, &QPushButton::clicked, this, &MainWindow::logout);
     connect(ui->pbLogoutEP, &QPushButton::clicked, this, &MainWindow::logout);
     connect(ui->pbLogoutFS, &QPushButton::clicked, this, &MainWindow::logout);

    // In app buttons & connections.
    /// Add User connections
    connect(ui->pbAddCertificateAP, &QPushButton::clicked, this, &MainWindow::addCertificateImage);
    connect(ui->pbChangeCertificateAP, &QPushButton::clicked, this, &MainWindow::addCertificateImage);
    connect(ui->pbAddQRCodeAP, &QPushButton::clicked, this, &MainWindow::addQRCodeImage);
    connect(ui->pbChangeQRCodeAP, &QPushButton::clicked, this, &MainWindow::addQRCodeImage);
    connect(ui->pbAddTestResultsAP, &QPushButton::clicked, this, &MainWindow::addTestResultImage);
    connect(ui->pbChangeTestResultsAP, &QPushButton::clicked, this, &MainWindow::addTestResultImage);
    connect(ui->pbAddUserPictureAP, &QPushButton::clicked, this, &MainWindow::addUserPicture);
    connect(ui->pbChangeUserPictureAP, &QPushButton::clicked, this, &MainWindow::addUserPicture);
    connect(ui->pbSaveAP, &QPushButton::clicked, this, &MainWindow::saveUser);
    connect(ui->pbCancelAP, &QPushButton::clicked, this, &MainWindow::pbCancelAdd);
    /// All Users connections
    connect(ui->pbAllUsersHP, &QPushButton::clicked, this, &MainWindow::pbAllUsers);
    connect(ui->listAllUsersAUP, &QListWidget::itemClicked, this, &MainWindow::selectUserDetails);
    connect(ui->pbSearchAUP, &QPushButton::clicked, this, &MainWindow::searchUser);
    connect(ui->pbLargeCertificateAUP, &QPushButton::clicked, this, &MainWindow::pbShowCertificate);
    connect(ui->pbLargeQRCodeAUP, &QPushButton::clicked, this, &MainWindow::pbShowQRCode);
    connect(ui->pbLargeTestResultAUP, &QPushButton::clicked, this, &MainWindow::pbShowTestResult);
    //connect(ui->pbFullScreenFS, &QPushButton::clicked, this, &MainWindow::pbFullScreen);
    connect(ui->pbCloseImageFS, &QPushButton::clicked, this, &MainWindow::pbClose);
    connect(ui->pbQuickRemoveAUP,&QPushButton::clicked, this, &MainWindow::pbRemoveUser);
    /// Edit User connections
    connect(ui->pbEditUserAUP, &QPushButton::clicked, this, &MainWindow::editUser);
    connect(ui->pbEditCertificateEP, &QPushButton::clicked, this, &MainWindow::editCertificateImage);
    connect(ui->pbChangeCertificateEP, &QPushButton::clicked, this, &MainWindow::editCertificateImage);
    connect(ui->pbEditQRCodeEP, &QPushButton::clicked, this, &MainWindow::editQRCodeImage);
    connect(ui->pbChangeQRCodeEP, &QPushButton::clicked, this, &MainWindow::editQRCodeImage);
    connect(ui->pbEditTestResultsEP, &QPushButton::clicked, this, &MainWindow::editTestResultImage);
    connect(ui->pbChangeTestResultsEP, &QPushButton::clicked, this, &MainWindow::editTestResultImage);
    connect(ui->pbEditUserPictureEP, &QPushButton::clicked, this, &MainWindow::editUserPicture);
    connect(ui->pbChangeUserPictureEP, &QPushButton::clicked, this, &MainWindow::editUserPicture);
    connect(ui->pbSaveEditEP, &QPushButton::clicked, this, &MainWindow::saveEdit);
    connect(ui->pbCancelEP, &QPushButton::clicked, this, &MainWindow::pbCancelEdit);
    /// Report connections
    connect(ui->listAllReportsRP, &QListWidget::itemClicked, this, &MainWindow::selectReportDetails);
    connect(ui->pbSearchCategoryRP, &QPushButton::clicked, this, &MainWindow::searchCategory);

} // End of default constructor.

// Second constructor passing double pointer for classCitizen ptrNewCitizen.
MainWindow::MainWindow(classCitizen*& ptrNewCitizen, QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ptrNewCitizen = &ptrNewCitizen;

} // End of second constructor

// Third constructor passing single pointer for classCitizen ptrCurrentCitizen.
MainWindow::MainWindow(classCitizen* ptrCurrentCitizen, QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ptrCurrentCitizen = ptrCurrentCitizen;

} // End of third constructor

// Fourth constructor passing single pointer for citizenReport ptrCurrentReport.
MainWindow::MainWindow(citizenReport* ptrCurrentReport, QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ptrCurrentReport = ptrCurrentReport;

} // End of fourth constructor
// Overloading constructors ends }


// PROGRAM FUNCTIONS
//*********************************************************

// Function to display Home Page
void MainWindow::pbHome()
{
    ui->stackedWidget->setCurrentIndex(0);

} // End of pbHome()


/// Add New User Functions
///*********************************************************

// Function to display Add User Page & Push new user's information to a vector of pointers
void MainWindow::addNewUser()
{
    ui->stackedWidget->setCurrentIndex(2);

    classCitizen* newCitizen = nullptr;

    if (newCitizen != nullptr)
    {
         userList.push_back(newCitizen);
         ui->listAllUsersAUP->addItem(newCitizen->getName());
         ui->listAllUsersEP->addItem(newCitizen->getName());
         ui->listAllUsersAP->addItem(newCitizen->getName());
    }

    // Open file for reading
    //QFile inputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/Citizens.txt");
    QFile inputFile("Citizens.txt");
    inputFile.open(QIODevice::ReadOnly | QIODevice:: Text);
    QTextStream read(&inputFile);

    // Clearing existing data from vector
   for (int i = 0; i< userList.size(); i++)
    {
        delete userList.at(i);
    }
   // Clearing ui
    userList.clear();
    ui->listAllUsersAUP->clear();
    ui->listAllUsersEP->clear();
    ui->listAllUsersAP->clear();

   while(!read.atEnd()) // Start while loop to read file and push info to vec
   {
       // Reading from file and seperating info at text.split()
        QString text = read.readLine();
        QStringList info = text.split("|");

       // Add read information to ui
       ui->listAllUsersAUP->addItem(info.at(4));
       ui->listAllUsersEP->addItem(info.at(4));
       ui->listAllUsersAP->addItem(info.at(4));

       // Adding file information to vector
       classCitizen* temp = new classCitizen(info.at(0), info.at(1), info.at(2), info.at(3), info.at(4), info.at(5), info.at(6), info.at(7), info.at(8), info.at(9),
                                             info.at(10), info.at(11), info.at(12), info.at(13), info.at(14), info.at(15), info.at(16), info.at(17), info.at(18));
       userList.push_back(temp);
   } // End while

   // Flushing file and then closing.
   read.flush();
   inputFile.close();

    // CVN generator for each new user
    int randNum = QRandomGenerator::global()->bounded(00000000, 50000000);

    QString number = QString::number(randNum);
    QString cvn = "CV"+ number;

    ui->addUserCVNAP->setText(cvn);
} /// End of addNewUser()

// Function to add Vaccine Certificate Image
void MainWindow::addCertificateImage()
{
    certificateImage = "";

    QString fileName;
    fileName = QFileDialog::getOpenFileName(this, "Open Image", "./", "Image File(*.png *.jpg .*jpeg)");

    if(fileName != "")
    {
        int lastSlash = fileName.lastIndexOf("/");

        QString shortName = fileName.right(fileName.size() - lastSlash - 1);

        QFile::copy(fileName, "./vaccineCertificates/"+shortName);

        QPixmap pixmap("./vaccineCertificates/"+shortName);

        // Display on Add User Page
        ui->addCertificateAP->setPixmap(pixmap);
        ui->addCertificateAP->setScaledContents(true);
        ui->pbAddCertificateAP->hide();
        ui->pbChangeCertificateAP->show();

        certificateImageSave = "./vaccineCertificates/" + shortName;
        //QFile outputFile("vaxCertificates.txt");
        QFile outputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/VaccineCertificates/vaxCertificates.txt");
        QTextStream out(&outputFile);
        outputFile.open(QIODevice::WriteOnly | QIODevice:: Append| QIODevice::Text);
        // Writing to file
        out << certificateImageSave << Qt::endl;

    // Flushing file and then closing.
    out.flush();
    outputFile.close();

    }
} /// End of addCertificateImage()

// Function to add QR Code Image
void MainWindow::addQRCodeImage()
{
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this, "Open Image", "./", "Image File(*.png *.jpg .*jpeg)");

    if(fileName != "")
    {
        int lastSlash = fileName.lastIndexOf("/");

        QString shortName = fileName.right(fileName.size() - lastSlash - 1);

        QFile::copy(fileName, "./qrCodes/"+shortName);

        QPixmap pixmap1("./qrCodes/"+shortName);

        // Display on Add User Page
        ui->addQRCodeAP->setPixmap(pixmap1);
        ui->addQRCodeAP->setScaledContents(true);
        ui->pbAddQRCodeAP->hide();
        ui->pbChangeQRCodeAP->show();

        qrCodeImageSave = "./qrCodes/" + shortName;

        //QFile outputFile("issuedQRCodes.txt");
        QFile outputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/QRCodes/issuedQRCodes.txt");
        QTextStream out(&outputFile);
        outputFile.open(QIODevice::WriteOnly | QIODevice:: Append| QIODevice::Text);
        // Writing to file
        out << qrCodeImageSave << Qt::endl;

    // Flushing file and then closing.
    out.flush();
    outputFile.close();
    }
} /// End of addQRCodeImage()

// Function to add QR Code
void MainWindow::addTestResultImage()
{
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this, "Open Image", "./", "Image File(*.png *.jpg .*jpeg)");

    if(fileName != "")
    {
        int lastSlash = fileName.lastIndexOf("/");

        QString shortName = fileName.right(fileName.size() - lastSlash - 1);

        QFile::copy(fileName, "./testResults/"+shortName);

        QPixmap pixmap2("./testResults/"+shortName);

        // Display on Add User Page
        ui->addTestResultsAP->setPixmap(pixmap2);
        ui->addTestResultsAP->setScaledContents(true);
        ui->pbAddTestResultsAP->hide();
        ui->pbChangeTestResultsAP->show();

        testResultImageSave = "./testResults/" + shortName;

        //QFile outputFile("issuedTestResults.txt");
        QFile outputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/TestResults/issuedTestResults.txt");
        QTextStream out(&outputFile);
        outputFile.open(QIODevice::WriteOnly | QIODevice:: Append| QIODevice::Text);
        // Writing to file
        out << testResultImageSave << Qt::endl;
    // Flushing file and then closing.
    out.flush();
    outputFile.close();

    }
} /// End of addTestResultImage()

// Function to add User Profile Picture
void MainWindow::addUserPicture()
{
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this, "Open Image", "./", "Image File(*.png *.jpg .*jpeg)");

    if(fileName != "")
    {
        int lastSlash = fileName.lastIndexOf("/");

        QString shortName = fileName.right(fileName.size() - lastSlash - 1);

        QFile::copy(fileName, "./userProfilePictures/"+shortName);

        QPixmap pixmap3("./userProfilePictures/"+shortName);

        // Display on Add User Page
        ui->addUserPictureAP->setPixmap(pixmap3);
        ui->addUserPictureAP->setScaledContents(true);
        ui->pbAddUserPictureAP->hide();
        ui->pbChangeUserPictureAP->show();

        userProfilePictureSave = "./userProfilePictures/" + shortName;

        //QFile outputFile("ProfilePictures.txt");
        QFile outputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/userProfilePictures/ProfilePictures.txt");
        QTextStream out(&outputFile);
        outputFile.open(QIODevice::WriteOnly | QIODevice:: Append| QIODevice::Text);
        // Writing to file
        out << userProfilePictureSave << Qt::endl;
    // Flushing file and then closing.
    out.flush();
    outputFile.close();
    }
} /// End of addUserPicture()

// Saving new user information to file
void MainWindow::saveUser()
{
    QString addName = ui->addUserNameAP->text();
    QString addPhone = ui->addUserPhoneAP->text();
    QString addEmail = ui->addUserEmailAP->text();
    QString addDob = ui->addUserDOBAP->text();
    QString addNhi = ui->addUserNHIAP->text();
    QString addEmergencyContact = ui->addUserEmergencyAP->text();
    QString addNotes = ui->addNotesAP->toPlainText();
    QString addVaccStatus = ui->addVaccStatusAP->currentText();
    QString addCvn = ui->addUserCVNAP->text();
    QString add1VaccName = ui->add1stDoseNameAP->text();
    QString add1BatchNum = ui->add1stDoseBatchAP->text();
    QString add1Date = ui->add1stDoseDateAP->text();
    QString add2VaccName = ui->add2ndDoseNameAP->text();
    QString add2BatchNum = ui->add2ndDoseBatchAP->text();
    QString add2Date = ui->add2ndDoseDateAP->text();

    if (addName.trimmed() != "" && addNhi.trimmed() != "" && addEmail.trimmed() != "")
    {
        classCitizen *ptrNewCitizen = new classCitizen(addName, addPhone, addEmail, addDob, addNhi, addEmergencyContact, addNotes, addVaccStatus, addCvn,
                                                       add1VaccName, add1BatchNum, add1Date, add2VaccName, add2BatchNum, add2Date, certificateImageSave, qrCodeImageSave, testResultImageSave, userProfilePictureSave);
        userList.push_back(ptrNewCitizen);

        // Updating ui list widgets to display added user.
        ui->listAllUsersAUP->addItem(ptrNewCitizen->getNHI());
        ui->listAllUsersEP->addItem(ptrNewCitizen->getNHI());
        ui->listAllUsersAP->addItem(ptrNewCitizen->getNHI());
        // Writing to file
        /// Windows File Path
        //QFile outputFile("Citizens.txt");
        /// Mac File Path
        QFile outputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/Citizens.txt");

        QTextStream out(&outputFile);
        outputFile.open(QIODevice::WriteOnly | QIODevice::Text);

            for (int i = 0; i < userList.size(); i++)
               {
                out << userList.at(i)->getName() << "|";
                out << userList.at(i)->getContactNumber() << "|";
                out << userList.at(i)->getEmailAddress() << "|";
                out << userList.at(i)->getDateOfBirth() << "|";
                out << userList.at(i)->getNHI() << "|";
                out << userList.at(i)->getEmergencyContact() << "|";
                out << userList.at(i)->getAdditionalNotes() << "|";
                out << userList.at(i)->getVaccineStatus() << "|";
                out << userList.at(i)->getCVN()<< "|";
                out << userList.at(i)->getVaccineName1() << "|";
                out << userList.at(i)->getBatchNumber1() << "|";
                out << userList.at(i)->getDateGiven1() << "|";
                out << userList.at(i)->getVaccineName2() << "|";
                out << userList.at(i)->getBatchNumber2() << "|";
                out << userList.at(i)->getDateGiven2() << "|";
                out << userList.at(i)->getCertificate() << "|";
                out << userList.at(i)->getQRCode() << "|";
                out << userList.at(i)->getTestResult() << "|";
                out << userList.at(i)->getCitizenImage() << Qt::endl;
               }
            // Flushing file and then closing.
            out.flush();
            outputFile.close();

            // Clearing input from labels
            ui->addUserNameAP->clear();
            ui->addUserPhoneAP->clear();
            ui->addUserEmailAP->clear();
            ui->addUserDOBAP->clear();
            ui->addUserNHIAP->clear();
            ui->addUserEmergencyAP->clear();
            ui->addNotesAP->clear();
            ui->addUserCVNAP->clear();
            ui->add1stDoseNameAP->clear();
            ui->add1stDoseBatchAP->clear();
            ui->add1stDoseDateAP->clear();
            ui->add2ndDoseNameAP->clear();
            ui->add2ndDoseBatchAP->clear();
            ui->add2ndDoseDateAP->clear();
            ui->addCertificateAP->clear();
            ui->addQRCodeAP->clear();
            ui->addTestResultsAP->clear();
            ui->addUserPictureAP->clear();
            // Changing ui
            ui->pbChangeCertificateEP->hide();
            ui->pbChangeQRCodeEP->hide();
            ui->pbChangeTestResultsEP->hide();
            ui->pbChangeUserPictureAP->hide();
            ui->pbChangeCertificateAP->hide();
            ui->pbChangeQRCodeAP->hide();
            ui->pbChangeTestResultsAP->hide();
            ui->pbChangeUserPictureEP->hide();
            ui->pbAddCertificateAP->show();
            ui->pbEditCertificateEP->show();
            ui->pbAddQRCodeAP->show();
            ui->pbEditQRCodeEP->show();
            ui->pbAddTestResultsAP->show();
            ui->pbEditTestResultsEP->show();
            ui->pbAddUserPictureAP->show();
            ui->pbEditUserPictureEP->show();

           // Clearing global variables
            certificateImageSave = "";
            qrCodeImageSave = "";
            testResultImageSave = "";
            userProfilePictureSave = "";
    }
    else
    {
       QMessageBox::information(this, "More Details Required",
                                      "Please ensure the Name, Email, and National Health Index has been entered...");
    }

} /// End of saveUser()


void MainWindow::pbCancelAdd()
{
    // Clearing input from labels
    ui->addUserNameAP->clear();
    ui->addUserPhoneAP->clear();
    ui->addUserEmailAP->clear();
    ui->addUserDOBAP->clear();
    ui->addUserNHIAP->clear();
    ui->addUserEmergencyAP->clear();
    ui->addNotesAP->clear();
    ui->addUserCVNAP->clear();
    ui->add1stDoseNameAP->clear();
    ui->add1stDoseBatchAP->clear();
    ui->add1stDoseDateAP->clear();
    ui->add2ndDoseNameAP->clear();
    ui->add2ndDoseBatchAP->clear();
    ui->add2ndDoseDateAP->clear();
    ui->addCertificateAP->clear();
    ui->addQRCodeAP->clear();
    ui->addTestResultsAP->clear();
    ui->addUserPictureAP->clear();

    ui->stackedWidget->setCurrentIndex(1);
}


/// Display List of All Users & Info Functions
///*********************************************************

// Function to display All Users Page
void MainWindow::pbAllUsers()
{
    ui->stackedWidget->setCurrentIndex(1);

    // Open file for reading
    QFile inputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/Citizens.txt");
    //QFile inputFile("Citizens.txt");
    inputFile.open(QIODevice::ReadOnly | QIODevice:: Text);
    QTextStream read(&inputFile);

    // Clearing existing data from vector
   for (int i = 0; i< userList.size(); i++)
    {
        delete userList.at(i);
    }
   // Clearing ui
    userList.clear();
    ui->listAllUsersAUP->clear();
    ui->listAllUsersEP->clear();
    ui->listAllUsersAP->clear();

   while(!read.atEnd()) // Start while loop to read file and push info to vec
   {
       // Reading from file and seperating info at text.split()
        QString text = read.readLine();
        QStringList info = text.split("|");

       // Add read information to ui
       ui->listAllUsersAUP->addItem(info.at(4));
       ui->listAllUsersEP->addItem(info.at(4));
       ui->listAllUsersAP->addItem(info.at(4));

       // Adding file information to vector
       classCitizen* temp = new classCitizen(info.at(0), info.at(1), info.at(2), info.at(3), info.at(4), info.at(5), info.at(6), info.at(7), info.at(8), info.at(9),
                                             info.at(10), info.at(11), info.at(12), info.at(13), info.at(14), info.at(15), info.at(16), info.at(17), info.at(18));
       userList.push_back(temp);
   } // End while

   // Flushing file and then closing.
   read.flush();
   inputFile.close();

} // End of pbAllUsers()


// Function to show user's information when selected from list widget
void MainWindow::selectUserDetails()
{
    int index = ui->listAllUsersAUP->currentRow();
    int index2 = ui->listAllUsersEP->currentRow();
    int index3 = ui->listAllUsersAP->currentRow();

    if (index >= 0 || index2 >= 0 || index3 >= 0)
    {
        classCitizen *selectedUser = userList.at(index);
        ui->showUserNameAUP->setText(selectedUser->getName());
        ui->showUserPhoneAUP->setText(selectedUser->getContactNumber());
        ui->showUserEmailAUP->setText(selectedUser->getEmailAddress());
        ui->showUserDOBAUP->setText(selectedUser->getDateOfBirth());
        ui->showUserNHIAUP->setText(selectedUser->getNHI());
        ui->showUserEmergencyAUP->setText(selectedUser->getEmergencyContact());
        ui->showUserNotesAUP->setText(selectedUser->getAdditionalNotes());
        ui->showUserVaccStatusAUP->setText(selectedUser->getVaccineStatus());
        ui->showUserCVNAUP->setText(selectedUser->getCVN());
        ui->show1stDoseNameAUP->setText(selectedUser->getVaccineName1());
        ui->show1stDoseBatchAUP->setText(selectedUser->getBatchNumber1());
        ui->show1stDoseDateAUP->setText(selectedUser->getDateGiven1());
        ui->show2ndDoseNameAUP->setText(selectedUser->getVaccineName2());
        ui->show2ndDoseBatchAUP->setText(selectedUser->getBatchNumber2());
        ui->show2ndDoseDateAUP->setText(selectedUser->getDateGiven2());
        QPixmap pixmap(selectedUser->getCertificate());
        ui->showCertificateAUP->setPixmap(pixmap);
        ui->showCertificateAUP->setScaledContents(true);
        ui->showLargeCertificateFS->setPixmap(pixmap);
        ui->showLargeCertificateFS->setScaledContents(true);
        /// QR Code Template
        QPixmap pixmapQR(":/res/images/QRCodeImage.png");
        ui->showLargeQRCodeImageFS->setPixmap(pixmapQR);
        ui->showLargeQRCodeImageFS->setScaledContents(true);
        /// Unique QR Code
        QPixmap pixmap1(selectedUser->getQRCode());
        ui->showQRCodeAUP->setPixmap(pixmap1);
        ui->showQRCodeAUP->setScaledContents(true);
        ui->showLargeQRFS->setPixmap(pixmap1);
        ui->showLargeQRFS->setScaledContents(true);
        QPixmap pixmap2(selectedUser->getTestResult());
        ui->showTestResultsAUP->setPixmap(pixmap2);
        ui->showTestResultsAUP->setScaledContents(true);
        ui->showLargeTestsFS->setPixmap(pixmap2);
        ui->showLargeTestsFS->setScaledContents(true);
        QPixmap pixmap3(selectedUser->getCitizenImage());
        ui->showUserPictureAUP->setPixmap(pixmap3);
        ui->showUserPictureAUP->setScaledContents(true);
    }

} /// End of selectUserDetails()

// Function to search for user in list widget
void MainWindow::searchUser()
{
    QString search = ui->labelSearchUserAUP->text();

    if(search !="")
    {
        // Loop to remove highlight on orginal search before highlighting next search
        for (int i=0; i < ui->listAllUsersAUP->count(); i++)
        {
            QListWidgetItem* user = ui->listAllUsersAUP->item(i);
            user->setBackground(Qt::transparent);
        }
        for (int i=0; i < ui->listAllUsersAP->count(); i++)
        {
            QListWidgetItem* user = ui->listAllUsersAP->item(i);
            user->setBackground(Qt::transparent);
        }
        for (int i=0; i < ui->listAllUsersEP->count(); i++)
        {
            QListWidgetItem* user = ui->listAllUsersEP->item(i);
            user->setBackground(Qt::transparent);
        }

        QList<QListWidgetItem*> list = ui->listAllUsersAUP->findItems(search, Qt::MatchContains);
        QList<QListWidgetItem*> addList = ui->listAllUsersAP->findItems(search, Qt::MatchContains);
        QList<QListWidgetItem*> editList = ui->listAllUsersEP->findItems(search, Qt::MatchContains);

        // Loop to highlight matching users
        for (int i = 0; i <list.count(); i++)
        {
            QListWidgetItem* item = list.at(i);
            item->setBackground(Qt::cyan);
        }

        for (int i = 0; i <addList.count(); i++)
        {
            QListWidgetItem* item = addList.at(i);
            item->setBackground(Qt::cyan);
        }

        for (int i = 0; i <editList.count(); i++)
        {
            QListWidgetItem* item = editList.at(i);
            item->setBackground(Qt::cyan);
        }
    }
    else if (search == "")
    {
        QMessageBox::information(this, "Invalid Search",
                                       "Please type the National Health Index in the search bar...");
        // Loop to remove highlight
        for (int i = 0; i < ui->listAllUsersAUP->count(); i++)
        {
            QListWidgetItem* item = ui->listAllUsersAUP->item(i);
            item->setBackground(Qt::transparent);
        }

        for (int i = 0; i < ui->listAllUsersAP->count(); i++)
        {
            QListWidgetItem* item = ui->listAllUsersAP->item(i);
            item->setBackground(Qt::transparent);
        }

        for (int i = 0; i < ui->listAllUsersEP->count(); i++)
        {
            QListWidgetItem* item = ui->listAllUsersEP->item(i);
            item->setBackground(Qt::transparent);
        }
    }
} /// End of searchUser()

// Function to show Enlarged Certificate Image
void MainWindow::pbShowCertificate()
{
    ui->stackedWidget->setCurrentIndex(5);
    ui->showLargeTestsFS->hide();
    ui->showLargeQRCodeImageFS->hide();
    ui->showLargeQRFS->hide();
    ui->showLargeCertificateFS->show();
    ui->pbCloseImageFS->show();
} /// End of pbShowCertificate()

// Function to show Enlarged QR Code Image
void MainWindow::pbShowQRCode()
{
    ui->stackedWidget->setCurrentIndex(5);
    ui->showLargeTestsFS->hide();
    ui->showLargeCertificateFS->hide();
    ui->showLargeQRCodeImageFS->show();
    ui->showLargeQRFS->show();
    ui->pbCloseImageFS->show();
} /// End of pbShowQRCode

// Function to show Enlarged Test Results Image
void MainWindow::pbShowTestResult()
{
    ui->stackedWidget->setCurrentIndex(5);
    ui->showLargeCertificateFS->hide();
    ui->showLargeQRCodeImageFS->hide();
    ui->showLargeQRFS->hide();
    ui->showLargeTestsFS->show();
    ui->pbCloseImageFS->show();
} /// End of pbShowTestResult


// Function to close enlarged images
void MainWindow::pbClose()
{
    ui->stackedWidget->setCurrentIndex(1);
} /// End of pbClose()

// Function to make images full screen
void MainWindow::pbFullScreen()
{
    ui->showLargeTestsFS->showFullScreen();
    ui->pbCloseImageFS->show();
}

void MainWindow::pbRemoveUser()
{
    int index = ui->listAllUsersAUP->currentRow();

    if (index >= 0)
    {
        int reply = QMessageBox::question(this, "Remove User", "Are you sure you want to remove this user?", QMessageBox::Yes, QMessageBox::No);
        if (reply == QMessageBox::Yes)
        {
            //remove from vector
            classCitizen* ptrRemoveCitizen = userList.at(index);
            delete ptrRemoveCitizen;
            userList.removeAt(index);

            // Writing edit to file
            /// Windows File Path
            //QFile outputFile("Citizens.txt");
            /// Mac File Path
            QFile outputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/Citizens.txt");

            QTextStream out(&outputFile);
            outputFile.open(QIODevice::WriteOnly | QIODevice::Text);

                for (int i = 0; i < userList.size(); i++)
                {
                 out << userList.at(i)->getName() << "|";
                 out << userList.at(i)->getContactNumber() << "|";
                 out << userList.at(i)->getEmailAddress() << "|";
                 out << userList.at(i)->getDateOfBirth() << "|";
                 out << userList.at(i)->getNHI() << "|";
                 out << userList.at(i)->getEmergencyContact() << "|";
                 out << userList.at(i)->getAdditionalNotes() << "|";
                 out << userList.at(i)->getVaccineStatus() << "|";
                 out << userList.at(i)->getCVN()<< "|";
                 out << userList.at(i)->getVaccineName1() << "|";
                 out << userList.at(i)->getBatchNumber1() << "|";
                 out << userList.at(i)->getDateGiven1() << "|";
                 out << userList.at(i)->getVaccineName2() << "|";
                 out << userList.at(i)->getBatchNumber2() << "|";
                 out << userList.at(i)->getDateGiven2() << "|";
                 out << userList.at(i)->getCertificate() << "|";
                 out << userList.at(i)->getQRCode() << "|";
                 out << userList.at(i)->getTestResult() << "|";
                 out << userList.at(i)->getCitizenImage() << "|" << Qt::endl; //Qt::endl;
                }
             // Flushing file and then closing.
             out.flush();
             outputFile.close();

            //remove from list widget in the UI
            delete ui->listAllUsersAUP->currentItem();
        }

    }

    // Clearing Ui labels
    ui->showUserNameAUP->clear();
    ui->showUserPhoneAUP->clear();
    ui->showUserEmailAUP->clear();
    ui->showUserDOBAUP->clear();
    ui->showUserNHIAUP->clear();
    ui->showUserEmergencyAUP->clear();
    ui->showUserNotesAUP->clear();
    ui->showUserCVNAUP->clear();
    ui->show1stDoseNameAUP->clear();
    ui->show1stDoseBatchAUP->clear();
    ui->show1stDoseDateAUP->clear();
    ui->show2ndDoseNameAUP->clear();
    ui->show2ndDoseBatchAUP->clear();
    ui->show2ndDoseDateAUP->clear();
    ui->showCertificateAUP->clear();
    ui->showQRCodeAUP->clear();
    ui->showTestResultsAUP->clear();
    ui->showUserPictureAUP->clear();
}


/// Edit User Functions
///*********************************************************

// Function to edit existing user's information
void MainWindow:: editUser()
{
    int listNum = ui->listAllUsersAUP->currentRow();

    if (listNum != -1)
    {
        // Changing UI page
        ui->stackedWidget->setCurrentIndex(4);

        ptrCurrentCitizen = userList.at(listNum);

            if (ptrCurrentCitizen != nullptr)
           {
                // Populating labels with existing info
                ui->editUserNameEP->setText(ptrCurrentCitizen->getName());
                ui->editUserPhoneEP->setText(ptrCurrentCitizen->getContactNumber());
                ui->editUserEmailEP->setText(ptrCurrentCitizen->getEmailAddress());
                ui->editUserDOBEP->setText(ptrCurrentCitizen->getDateOfBirth());
                ui->showNHIEP->setText(ptrCurrentCitizen->getNHI()); // Non-editable
                ui->editUserEmergencyEP->setText(ptrCurrentCitizen->getEmergencyContact());
                ui->editUserNotesEP->setPlainText(ptrCurrentCitizen->getAdditionalNotes());
                ui->editUserVaccineSBEP->setCurrentText(ptrCurrentCitizen->getVaccineStatus());
                ui->showUserCVNEP->setText(ptrCurrentCitizen->getCVN()); // Non-editable
                ui->edit1stDoseNameEP->setText(ptrCurrentCitizen->getVaccineName1());
                ui->edit1stDoseBatchEP->setText(ptrCurrentCitizen->getBatchNumber1());
                ui->edit1stDoseDateEP->setText(ptrCurrentCitizen->getDateGiven1());
                ui->edit2ndDoseNameEP->setText(ptrCurrentCitizen->getVaccineName2());
                ui->edit2ndDoseBatchEP->setText(ptrCurrentCitizen->getBatchNumber2());
                ui->edit2ndDoseDateEP->setText(ptrCurrentCitizen->getDateGiven2());
                QPixmap pixmap(ptrCurrentCitizen->getCertificate());
                ui->editCertificateEP->setPixmap(pixmap);
                ui->editCertificateEP->setScaledContents(true);
                QPixmap pixmap1(ptrCurrentCitizen->getQRCode());
                ui->editQRCodeEP->setPixmap(pixmap1);
                ui->editQRCodeEP->setScaledContents(true);
                QPixmap pixmap2(ptrCurrentCitizen->getTestResult());
                ui->editTestResultsEP->setPixmap(pixmap2);
                ui->editTestResultsEP->setScaledContents(true);
                QPixmap pixmap3(ptrCurrentCitizen->getCitizenImage());
                ui->editUserPictureEP->setPixmap(pixmap3);
                ui->editUserPictureEP->setScaledContents(true);
            }
    }
    else
    {
        QMessageBox::information(this, "No User Selected",
                                       "Please select a user to edit...");
    }
} /// End of editUser()

// Function to add Vaccine Certificate Image
void MainWindow::editCertificateImage()
{
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this, "Open Image", "./", "Image File(*.png *.jpg .*jpeg)");

    if(fileName != "")
    {
        int lastSlash = fileName.lastIndexOf("/");

        QString shortName = fileName.right(fileName.size() - lastSlash - 1);

        QFile::copy(fileName, "./vaccineCertificates/"+shortName);

        QPixmap pixmap("./vaccineCertificates/"+shortName);

        ui->editCertificateEP->setPixmap(pixmap);
        ui->editCertificateEP->setScaledContents(true);
        ui->pbEditCertificateEP->hide();
        ui->pbChangeCertificateEP->show();

        certificateImageSave = "./vaccineCertificates/" + shortName;

        ui->editCertificateEP->setPixmap(pixmap);
        ptrCurrentCitizen->setCertificate(certificateImageSave);
    }
} /// End of addQRCodeImage()

// Function to add QR Code Image
void MainWindow::editQRCodeImage()
{
    //ui->pbEditQRCodeEP->hide();
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this, "Open Image", "./", "Image File(*.png *.jpg .*jpeg)");

    if(fileName != "")
    {
        int lastSlash = fileName.lastIndexOf("/");

        QString shortName = fileName.right(fileName.size() - lastSlash - 1);

        QFile::copy(fileName, "./qrCodes/"+shortName);

        QPixmap pixmap1("./qrCodes/"+shortName);

        ui->editQRCodeEP->setPixmap(pixmap1);
        ui->editQRCodeEP->setScaledContents(true);
        ui->pbEditQRCodeEP->hide();
        ui->pbChangeQRCodeEP->show();

        qrCodeImageSave = "./qrCodes/" + shortName;
        ui->editQRCodeEP->setPixmap(pixmap1);
        ptrCurrentCitizen->setQRCode(qrCodeImageSave);
    }
} /// End of addQRCodeImage()

// Function to add QR Code
void MainWindow::editTestResultImage()
{
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this, "Open Image", "./", "Image File(*.png *.jpg .*jpeg)");

    if(fileName != "")
    {
        int lastSlash = fileName.lastIndexOf("/");

        QString shortName = fileName.right(fileName.size() - lastSlash - 1);

        QFile::copy(fileName, "./testResults/"+shortName);

        QPixmap pixmap2("./testResults/"+shortName);

        ui->editTestResultsEP->setPixmap(pixmap2);
        ui->editTestResultsEP->setScaledContents(true);
        ui->pbEditTestResultsEP->hide();
        ui->pbChangeTestResultsEP->show();


        testResultImageSave = "./testResults/" + shortName;
        ui->editTestResultsEP->setPixmap(pixmap2);
        ptrCurrentCitizen->setTestResult(testResultImageSave);
    }
} /// End of addTestResultImage()

// Function to add QR Code
void MainWindow::editUserPicture()
{
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this, "Open Image", "./", "Image File(*.png *.jpg .*jpeg)");

    if(fileName != "")
    {
        int lastSlash = fileName.lastIndexOf("/");

        QString shortName = fileName.right(fileName.size() - lastSlash - 1);

        QFile::copy(fileName, "./userProfilePictures/"+shortName);

        QPixmap pixmap2("./userProfilePictures/"+shortName);

        ui->editUserPictureEP->setPixmap(pixmap2);
        ui->editUserPictureEP->setScaledContents(true);
        ui->pbEditUserPictureEP->hide();
        ui->pbChangeUserPictureEP->show();

        userProfilePictureSave = "./userProfilePictures/" + shortName;
        ui->editUserPictureEP->setPixmap(pixmap2);
        ptrCurrentCitizen->setCitizenImage(userProfilePictureSave);
    }
} /// End of addTestResultImage()

// Function to save edited information and re-writing file
void MainWindow::saveEdit()
{
    // Retrieving edited information from ui
    QString editName = ui->editUserNameEP->text();
    QString editPhone = ui->editUserPhoneEP->text();
    QString editEmail = ui->editUserEmailEP->text();
    QString editDob = ui->editUserDOBEP->text();
    QString editEmergencyContact = ui->editUserEmergencyEP->text();
    QString editNotes = ui->editUserNotesEP->toPlainText();
    QString editVaccStatus = ui->editUserVaccineSBEP->currentText();
    QString editCVNum = ui->showUserCVNEP->text();
    QString edit1VaccName = ui->edit1stDoseNameEP->text();
    QString edit1BatchNum = ui->edit1stDoseBatchEP->text();
    QString edit1Date = ui->edit1stDoseDateEP->text();
    QString edit2VaccName = ui->edit2ndDoseNameEP->text();
    QString edit2BatchNum = ui->edit2ndDoseBatchEP->text();
    QString edit2Date = ui->edit2ndDoseDateEP->text();


    QPixmap pixmap(ptrCurrentCitizen->getCertificate());
    ui->editCertificateEP->setPixmap(pixmap);
    QPixmap pixmap1(ptrCurrentCitizen->getQRCode());
    ui->editQRCodeEP->setPixmap(pixmap1);
    QPixmap pixmap2(ptrCurrentCitizen->getTestResult());
    ui->editTestResultsEP->setPixmap(pixmap2);
    QPixmap pixmap3(ptrCurrentCitizen->getCitizenImage());
    ui->editUserPictureEP->setPixmap(pixmap3);


    if(editName.trimmed() != "" && editEmail.trimmed() != "")
    {
        // Changing the information of the current citizen
        ptrCurrentCitizen->setName(editName);
        ptrCurrentCitizen->setContactNumber(editPhone);
        ptrCurrentCitizen->setEmailAddress(editEmail);
        ptrCurrentCitizen->setDateOfBirth(editDob);
        ptrCurrentCitizen->setEmergencyContact(editEmergencyContact);
        ptrCurrentCitizen->setAdditionalNotes(editNotes);
        ptrCurrentCitizen->setVaccineStatus(editVaccStatus);
        ptrCurrentCitizen->setCVN(editCVNum);
        ptrCurrentCitizen->setVaccineName1(edit1VaccName);
        ptrCurrentCitizen->setBatchNumber1(edit1BatchNum);
        ptrCurrentCitizen->setDateGiven1(edit1Date);
        ptrCurrentCitizen->setVaccineName2(edit2VaccName);
        ptrCurrentCitizen->setBatchNumber2(edit2BatchNum);
        ptrCurrentCitizen->setDateGiven2(edit2Date);

        // Writing edit to file
        /// Windows File Path
        //QFile outputFile("Citizens.txt");
        /// Mac File Path
        QFile outputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/Citizens.txt");

        QTextStream out(&outputFile);
        outputFile.open(QIODevice::WriteOnly | QIODevice::Text);

            for (int i = 0; i < userList.size(); i++)
               {
                out << userList.at(i)->getName() << "|";
                out << userList.at(i)->getContactNumber() << "|";
                out << userList.at(i)->getEmailAddress() << "|";
                out << userList.at(i)->getDateOfBirth() << "|";
                out << userList.at(i)->getNHI() << "|";
                out << userList.at(i)->getEmergencyContact() << "|";
                out << userList.at(i)->getAdditionalNotes() << "|";
                out << userList.at(i)->getVaccineStatus() << "|";
                out << userList.at(i)->getCVN()<< "|";
                out << userList.at(i)->getVaccineName1() << "|";
                out << userList.at(i)->getBatchNumber1() << "|";
                out << userList.at(i)->getDateGiven1() << "|";
                out << userList.at(i)->getVaccineName2() << "|";
                out << userList.at(i)->getBatchNumber2() << "|";
                out << userList.at(i)->getDateGiven2() << "|";
                out << userList.at(i)->getCertificate() << "|";
                out << userList.at(i)->getQRCode() << "|";
                out << userList.at(i)->getTestResult() << "|";
                out << userList.at(i)->getCitizenImage() << Qt::endl;
               }
            // Flushing file and then closing.
            out.flush();
            outputFile.close();

            /// Arranging ui to meet ux standards
            // Clear input from edit labels
            ui->editUserNameEP->clear();
            ui->editUserPhoneEP->clear();
            ui->editUserEmailEP->clear();
            ui->editUserDOBEP->clear();
            ui->showUserNHIFS->clear();
            ui->editUserEmergencyEP->clear();
            ui->editUserNotesEP->clear();
            ui->editUserVaccineSBEP->setCurrentText("Select Vaccine Status");
            ui->showUserCVNEP->clear();
            ui->edit1stDoseNameEP->clear();
            ui->edit1stDoseBatchEP->clear();
            ui->edit1stDoseDateEP->clear();
            ui->edit2ndDoseNameEP->clear();
            ui->edit2ndDoseBatchEP->clear();
            ui->edit1stDoseDateEP->clear();
            ui->editCertificateEP->clear();
            ui->editQRCodeEP->clear();
            ui->editTestResultsEP->clear();
            ui->editUserPictureEP->clear();
            // Changing ui buttons
            ui->pbChangeCertificateEP->hide();
            ui->pbChangeQRCodeEP->hide();
            ui->pbChangeTestResultsEP->hide();
            ui->pbChangeUserPictureAP->hide();
            ui->pbChangeCertificateAP->hide();
            ui->pbChangeQRCodeAP->hide();
            ui->pbChangeTestResultsAP->hide();
            ui->pbChangeUserPictureEP->hide();
            ui->pbAddCertificateAP->show();
            ui->pbEditCertificateEP->show();
            ui->pbAddQRCodeAP->show();
            ui->pbEditQRCodeEP->show();
            ui->pbAddTestResultsAP->show();
            ui->pbEditTestResultsEP->show();
            ui->pbAddUserPictureAP->show();
            ui->pbEditUserPictureEP->show();

            // Changing input from view user labels
            ui->showUserNameAUP->setText(ptrCurrentCitizen->getName());
            ui->showUserPhoneAUP->setText(ptrCurrentCitizen->getContactNumber());
            ui->showUserEmailAUP->setText(ptrCurrentCitizen->getEmailAddress());
            ui->showUserDOBAUP->setText(ptrCurrentCitizen->getDateOfBirth());
            ui->showUserNHIAUP->setText(ptrCurrentCitizen->getNHI());
            ui->showUserEmergencyAUP->setText(ptrCurrentCitizen->getEmergencyContact());
            ui->showUserNotesAUP->setText(ptrCurrentCitizen->getAdditionalNotes());
            ui->showUserVaccStatusAUP->setText(ptrCurrentCitizen->getVaccineStatus());
            ui->showUserCVNAUP->setText(ptrCurrentCitizen->getCVN());
            ui->show1stDoseNameAUP->setText(ptrCurrentCitizen->getVaccineName1());
            ui->show1stDoseBatchAUP->setText(ptrCurrentCitizen->getBatchNumber1());
            ui->show1stDoseDateAUP->setText(ptrCurrentCitizen->getDateGiven1());
            ui->show2ndDoseNameAUP->setText(ptrCurrentCitizen->getVaccineName2());
            ui->show2ndDoseBatchAUP->setText(ptrCurrentCitizen->getBatchNumber2());
            ui->show2ndDoseDateAUP->setText(ptrCurrentCitizen->getDateGiven2());
            QPixmap pixmap(ptrCurrentCitizen->getCertificate());
            ui->showCertificateAUP->setPixmap(pixmap);
            ui->showCertificateAUP->setScaledContents(true);
            ui->showLargeCertificateFS->setPixmap(pixmap);
            ui->showLargeCertificateFS->setScaledContents(true);
            QPixmap pixmap1(ptrCurrentCitizen->getQRCode());
            ui->showQRCodeAUP->setPixmap(pixmap1);
            ui->showQRCodeAUP->setScaledContents(true);
            ui->showLargeQRFS->setPixmap(pixmap1);
            ui->showLargeQRFS->setScaledContents(true);
            QPixmap pixmap2(ptrCurrentCitizen->getTestResult());
            ui->showTestResultsAUP->setPixmap(pixmap2);
            ui->showTestResultsAUP->setScaledContents(true);
            ui->showLargeTestsFS->setPixmap(pixmap2);
            ui->showLargeTestsFS->setScaledContents(true);
            QPixmap pixmap3(ptrCurrentCitizen->getCitizenImage());
            ui->showUserPictureAUP->setPixmap(pixmap3);
            ui->showUserPictureAUP->setScaledContents(true);

            //Changing page back to All Users
            ui->stackedWidget->setCurrentIndex(1);
    }
    else
    {
        QMessageBox::information(this, "More Details Required",
                                       "Please ensure the Name and Email fields have been entered...");
    }
} /// End of saveEdit()

void MainWindow::pbCancelEdit()
{
    // Clearing input from labels
    ui->editUserNameEP->clear();
    ui->editUserPhoneEP->clear();
    ui->editUserEmailEP->clear();
    ui->editUserDOBEP->clear();
    ui->showUserNHIFS->clear();
    ui->editUserEmergencyEP->clear();
    ui->editUserNotesEP->clear();
    ui->editUserVaccineSBEP->clear();
    ui->showUserCVNEP->clear();
    ui->edit1stDoseNameEP->clear();
    ui->edit1stDoseBatchEP->clear();
    ui->edit1stDoseDateEP->clear();
    ui->edit2ndDoseNameEP->clear();
    ui->edit2ndDoseBatchEP->clear();
    ui->edit1stDoseDateEP->clear();
    ui->editCertificateEP->clear();
    ui->editQRCodeEP->clear();
    ui->editTestResultsEP->clear();
    ui->editUserPictureEP->clear();

    ui->stackedWidget->setCurrentIndex(1);
}

/// Citizen Report Functions
///*********************************************************

// Display Reports Page
void MainWindow::pbReports()
{
    ui->stackedWidget->setCurrentIndex(3);

    // Open file for reading
    QFile inputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/UserReports.txt");
    //QFile inputFile("GeneralEnquiries.txt");
    inputFile.open(QIODevice::ReadOnly | QIODevice:: Text);
    QTextStream read(&inputFile);

    // Clearing existing data from vector
   for (int i = 0; i< reportList.size(); i++)
    {
        delete reportList.at(i);
    }
    // Clearing UI
    reportList.clear();
    ui->listAllReportsRP->clear();

    while(!read.atEnd())
    {
        // Reading from file and seperating info at text.split()
        QString text = read.readLine();
        QStringList info = text.split("|");

        // Add read information to ui list widget
        ui->listAllReportsRP->addItem(info.at(4)); // Display subject in list widget

        // Adding file information to vector
        citizenReport* temp = new citizenReport(info.at(0), info.at(1), info.at(2), info.at(3), info.at(4), info.at(5));
        reportList.push_back(temp);
    } // End while

    // Flushing file and then closing.
    read.flush();
    inputFile.close();

} /// End of pbReports()

// Function to show report details when selected
void MainWindow::selectReportDetails()
{
    int index = ui->listAllReportsRP->currentRow();

        if (index >= 0)
        {
            citizenReport *selectedReport = reportList.at(index);
            ui->showReportSubjectRP->setText(selectedReport->getSubject());
            ui->showReportCategoryRP->setText(selectedReport->getCategory());
            ui->showReportDetailsRP->setText(selectedReport->getDetails());
            ui->showPreferredNameRP->setText(selectedReport->getName());
            ui->showContactDetailsRP->setText(selectedReport->getContact());
        }
} /// End of selectedReportDetails()

// Function to search report category in list widget
void MainWindow::searchCategory()
{
    QString search = ui->cbReportCategoryRP->currentText();

    if (search == "General Enquiries")
    {
        // Writing to file
        /// Windows File Path
        //QFile inputFile("GeneralEnquiries.txt");
        /// Mac File Path
        QFile inputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/GeneralEnquiries.txt");
        inputFile.open(QIODevice::ReadOnly |QIODevice::Text);
        QTextStream read(&inputFile);

        // Clearing existing data from vector
       for (int i = 0; i< reportList.size(); i++)
        {
            delete reportList.at(i);
        }
        // Clearing UI
        reportList.clear();
        ui->listAllReportsRP->clear();

        while(!read.atEnd())
        {
            // Reading from file and seperating info at text.split()
            QString text = read.readLine();
            QStringList info = text.split("|");

            // Add read information to ui list widget
            ui->listAllReportsRP->addItem(info.at(4)); // Display subject in list widget

            // Adding file information to vector
            citizenReport* temp = new citizenReport(info.at(0), info.at(1), info.at(2), info.at(3), info.at(4), info.at(5));
            reportList.push_back(temp);
        } // End while


        // Flushing file and then closing.
        read.flush();
        inputFile.close();
    }
    else if (search == "COVID-19 Vaccine")
    {
        // Writing to file
        /// Windows File Path
        //QFile inputFile("COVID19Vaccine.txt");
        /// Mac File Path
        QFile inputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/COVID19Vaccine.txt");
        inputFile.open(QIODevice::ReadOnly |QIODevice::Text);
        QTextStream read(&inputFile);


        // Clearing existing data from vector
       for (int i = 0; i< reportList.size(); i++)
        {
            delete reportList.at(i);
        }
        // Clearing UI
        reportList.clear();
        ui->listAllReportsRP->clear();

        while(!read.atEnd())
        {
            // Reading from file and seperating info at text.split()
            QString text = read.readLine();
            QStringList info = text.split("|");

            // Add read information to ui list widget
            ui->listAllReportsRP->addItem(info.at(4)); // Display subject in list widget

            // Adding file information to vector
            citizenReport* temp = new citizenReport(info.at(0), info.at(1), info.at(2), info.at(3), info.at(4), info.at(5));
            reportList.push_back(temp);
        } // End while


        // Flushing file and then closing.
        read.flush();
        inputFile.close();
    }
    else if (search == "Change/Update Personal Details")
    {
        // Writing to file
        /// Windows File Path
        //QFile inputFile("ChangePersonalDetails.txt");
        /// Mac File Path
        QFile inputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/ChangePersonalDetails.txt");
        inputFile.open(QIODevice::ReadOnly |QIODevice::Text);
        QTextStream read(&inputFile);

        // Clearing existing data from vector
       for (int i = 0; i< reportList.size(); i++)
        {
            delete reportList.at(i);
        }
        // Clearing UI
        reportList.clear();
        ui->listAllReportsRP->clear();

        while(!read.atEnd())
        {
            // Reading from file and seperating info at text.split()
            QString text = read.readLine();
            QStringList info = text.split("|");

            // Add read information to ui list widget
            ui->listAllReportsRP->addItem(info.at(4)); // Display subject in list widget

            // Adding file information to vector
            citizenReport* temp = new citizenReport(info.at(0), info.at(1), info.at(2), info.at(3), info.at(4), info.at(5));
            reportList.push_back(temp);
        } // End while

        // Flushing file and then closing.
        read.flush();
        inputFile.close();
    }
    else if (search == "My COVID Record Application")
    {
        // Writing to file
        /// Windows File Path
        //QFile inputFile("COVIDRecordApp.txt");
        /// Mac File Path
        QFile inputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/COVIDRecordApp.txt");
        inputFile.open(QIODevice::ReadOnly |QIODevice::Text);
        QTextStream read(&inputFile);

        // Clearing existing data from vector
       for (int i = 0; i< reportList.size(); i++)
        {
            delete reportList.at(i);
        }
        // Clearing UI
        reportList.clear();
        ui->listAllReportsRP->clear();

        while(!read.atEnd())
        {
            // Reading from file and seperating info at text.split()
            QString text = read.readLine();
            QStringList info = text.split("|");

            // Add read information to ui list widget
            ui->listAllReportsRP->addItem(info.at(4)); // Display subject in list widget

            // Adding file information to vector
            citizenReport* temp = new citizenReport(info.at(0), info.at(1), info.at(2), info.at(3), info.at(4), info.at(5));
            reportList.push_back(temp);
        } // End while


        // Flushing file and then closing.
        read.flush();
        inputFile.close();
    }
    else
    {
        // Writing to file
        /// Windows File Path
        //QFile inputFile("Other.txt");
        /// Mac File Path
        QFile inputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/Other.txt");
        inputFile.open(QIODevice::ReadOnly |QIODevice::Text);
        QTextStream read(&inputFile);

        // Clearing existing data from vector
       for (int i = 0; i< reportList.size(); i++)
        {
            delete reportList.at(i);
        }
        // Clearing UI
        reportList.clear();
        ui->listAllReportsRP->clear();

        while(!read.atEnd())
        {
            // Reading from file and seperating info at text.split()
            QString text = read.readAll();
            QStringList info = text.split("|");

            // Add read information to ui list widget
            ui->listAllReportsRP->addItem(info.at(4)); // Display subject in list widget

            // Adding file information to vector
            citizenReport* temp = new citizenReport(info.at(0), info.at(1), info.at(2), info.at(3), info.at(4), info.at(5));
            reportList.push_back(temp);
        } // End while

        // Flushing file and then closing.
        read.flush();
        inputFile.close();
    }

} /// End of searchCategory()

// Function to logout
void MainWindow::logout()
{
    int reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?", QMessageBox::Yes, QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        UserLogin *login;
        close();
        //Displays Login window
        login = new UserLogin(this);
        login->show();
    }

} // End of logout()


/// Destructor : End of Program.
///*********************************************************
MainWindow::~MainWindow()
{
    for (int i=0; i<userList.size(); i++)
    {
        delete userList.at(i);
    }
    userList.clear();

    delete ui;
}
