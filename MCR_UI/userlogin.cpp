//
#include "userlogin.h"
#include "ui_userlogin.h"
#include "mainwindow.h"

#include <QListWidgetItem>
#include <QVector>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QMessageBox>


// Login for Admin/User & User Main Window
//*********************************************************

// { Overloading constructors begins :

UserLogin::UserLogin(QWidget *parent):QMainWindow(parent), ui(new Ui::UserLogin)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    // Home page display image
    QPixmap pixmap(":/res/images/imgHome1.png");
    ui->imgHome->setPixmap(pixmap);
    ui->imgHome->setScaledContents(true);

    // Hidden UI Elements
    //ui->labelConfirmation->hide();
    ui->showEnlargeTests->hide();
    ui->pbCloseImage->hide();
    ui->pbFullScreen->hide();

    // Manual UI -> Function Connections
    connect(ui->pbLogin, &QPushButton::clicked, this, &UserLogin::login);
    connect(ui->pbCircleLogin, &QPushButton::clicked, this, &UserLogin::login);


    // Home Buttons
    connect(ui->pbHome, &QPushButton::clicked, this, &UserLogin::pbHome);
    connect(ui->pbHome1, &QPushButton::clicked, this, &UserLogin::pbHome);
    connect(ui->pbHome2, &QPushButton::clicked, this, &UserLogin::pbHome);
    connect(ui->pbHome3, &QPushButton::clicked, this, &UserLogin::pbHome);

    // Profile Buttons
    connect(ui->pbProfile, &QPushButton::clicked, this, &UserLogin::pbMyDetails);
    connect(ui->pbProfile1, &QPushButton::clicked, this, &UserLogin::pbMyDetails);
    connect(ui->pbProfile2, &QPushButton::clicked, this, &UserLogin::pbMyDetails);
    connect(ui->pbProfile3, &QPushButton::clicked, this, &UserLogin::pbMyDetails);


    // Contact Buttons
    connect(ui->pbContact, &QPushButton::clicked, this, &UserLogin::pbContactUs);
    connect(ui->pbContact1, &QPushButton::clicked, this, &UserLogin::pbContactUs);
    connect(ui->pbContact2, &QPushButton::clicked, this, &UserLogin::pbContactUs);
    connect(ui->pbContact3, &QPushButton::clicked, this, &UserLogin::pbContactUs);


    // Logout Buttons
    connect(ui->pbLogout, &QPushButton::clicked, this, &UserLogin::logout);
    connect(ui->pbLogout1, &QPushButton::clicked, this, &UserLogin::logout);
    connect(ui->pbLogout2, &QPushButton::clicked, this, &UserLogin::logout);
    connect(ui->pbLogout2, &QPushButton::clicked, this, &UserLogin::logout);
    connect(ui->pbLogout3, &QPushButton::clicked, this, &UserLogin::logout);

    // In app connections
    connect(ui->pbEnlargeCertificate, &QPushButton::clicked, this, &UserLogin::pbShowCertificate);
    connect(ui->pbEnlargeQR, &QPushButton::clicked, this, &UserLogin::pbShowQRCode);
    connect(ui->pbEnlargeResults, &QPushButton::clicked, this, &UserLogin::pbShowTestResult);
    connect(ui->pbFullScreen, &QPushButton::clicked, this, &UserLogin::pbFullScreen);
    connect(ui->pbCloseImage, &QPushButton::clicked, this, &UserLogin::pbClose);
    connect(ui->pbSendMessage, &QPushButton::clicked, this, &UserLogin::submitReport);

}

// Second constructor passing single pointer for classCitizen ptrCurrentCitizen.
UserLogin::UserLogin(classCitizen* ptrCurrentCitizen, QWidget *parent) : QMainWindow(parent), ui(new Ui::UserLogin)
{
    ui->setupUi(this);
    this->ptrCurrentCitizen = ptrCurrentCitizen;
}

UserLogin::UserLogin(citizenReport*& ptrNewReport, QWidget *parent) : QMainWindow(parent), ui(new Ui::UserLogin)
{
    ui->setupUi(this);
    this->ptrNewReport = &ptrNewReport;
}
// Overloading constructors ends }


// PROGRAM FUNCTIONS
//*********************************************************


// Function to login
void UserLogin::login()
{
    QString email = ui->editEmail->text();
    QString NHI = ui->editNHI->text();
    QString accessNumber = ui->editAccessNumber->text();

    // Check if login input matches, if not, an error message will be displayed
    // If correct, directed to Home Page
    if (email == "1") // Admin Login Check Loop
    {
        if (NHI == "1")
        {
            if (accessNumber == "1")
            {
                this->hide();
                // Displays Admin Home Page
                mainWindow = new MainWindow(this);
                mainWindow->show();
            }
            else
            {
                ui->labelError->setText("Incorrect Access Number Entered");
            }
        }
        else
        {
            ui->labelError->setText("Incorrect NHI Number Entered");
        }
    }
    else if(email != "1")
    {
        QFile inputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/Citizens.txt");
        //QFile inputFile("Citizens.txt");
        inputFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream read(&inputFile);

        // Clearing existing data from vector
        for (int i = 0; i< userList.size(); i++)
        {
            delete userList.at(i);
        }
        // Clearing ui
        userList.clear();

        while (!read.atEnd())
        {
            QString line = read.readLine();
            QStringList info = line.split(",");

            QString fileEmail = info.at(2);
            QString fileNHI = info.at(4);

            if (email == fileEmail && NHI == fileNHI) // User Login Check Loop
            {
                if (accessNumber == "1234")
                {
                    // Adding file information to vector
                    classCitizen* temp = new classCitizen(info.at(0), info.at(1), info.at(2), info.at(3), info.at(4), info.at(5), info.at(6), info.at(7), info.at(8), info.at(9), info.at(10),
                                                          info.at(11), info.at(12), info.at(13), info.at(14), info.at(15), info.at(16), info.at(17), info.at(18));
                    userList.push_back(temp);

                    // Populating labels on My Details page
                    ui->showUserName->setText(temp->getName());
                    ui->showUserNumber->setText(temp->getContactNumber());
                    ui->showUserEmail->setText(temp->getEmailAddress());
                    ui->showUserDOB->setText(temp->getDateOfBirth());
                    ui->showUserNHI->setText(temp->getNHI());
                    ui->showUserCVN->setText(temp->getCVN());
                    ui->showUserEmergency->setText(temp->getEmergencyContact());
                    ui->showUserVaccStatus->setText(temp->getVaccineStatus());
                    ui->showDose1Name->setText(temp->getVaccineName1());
                    ui->showDose1Batch->setText(temp->getBatchNumber1());
                    ui->showDose1Date->setText(temp->getDateGiven1());
                    ui->showDose2Name->setText(temp->getVaccineName2());
                    ui->showDose2Batch->setText(temp->getBatchNumber2());
                    ui->showDose2Date->setText(temp->getDateGiven2());
                   /* QPixmap pixmap(temp->getCertificate());
                    ui->showCertificate->setPixmap(pixmap);
                    ui->showCertificate->setScaledContents(true);
                    ui->showEnlargeCertificate->setPixmap(pixmap);
                    ui->showEnlargeCertificate->setScaledContents(true);
                    QPixmap pixmap1(temp->getQRCode());
                    ui->showQRCode->setPixmap(pixmap1);
                    ui->showQRCode->setScaledContents(true);
                    ui->showLargeQR->setPixmap(pixmap1);
                    ui->showLargeQR->setScaledContents(true);
                    QPixmap pixmap2(temp->getTestResult());
                    ui->showTestResults->setPixmap(pixmap2);
                    ui->showTestResults->setScaledContents(true);
                    ui->showEnlargeTests->setPixmap(pixmap2);
                    ui->showEnlargeTests->setScaledContents(true);*/

                    // Populating labels on Contact Us page
                    ui->editPreferredName->setText(temp->getName());
                    ui->editPreferredContact->setText(temp->getEmailAddress());

                    // Populating labels in Welcome label
                    ui->labelUserName->setText(info.at(0));
                    ui->labelUserName1->setText(info.at(0));
                    ui->labelUserName2->setText(info.at(0));
                    ui->labelUserName3->setText(info.at(0));

                    QPixmap pixmap3(temp->getCitizenImage());
                    ui->showUserPicture->setPixmap(pixmap3);
                    ui->showUserPicture->setScaledContents(true);

                    // Change page index to User Home Page
                    ui->stackedWidget->setCurrentIndex(1);
                }
                else
                {
                    ui->labelError->setText("Incorrect Access Number Entered");
                }
            }
            else if (email != fileEmail)
            {
                ui->labelError->setText("Incorrect Email Entered");
            }
            else
            {
                ui->labelError->setText("Incorrect NHI Number Entered");
            }
        }
        //Flushing file and then closing.
        read.flush();
        inputFile.close();
    }
    else
    {
        ui->labelError->setText("Incorrect Email Entered");
    }
} /// End of login()

// Function to display Home Page
void UserLogin::pbHome()
{
    ui->stackedWidget->setCurrentIndex(1);
} /// End of pbHome()


/// Display User Details Functions
///*********************************************************

// Function to display User Profile page
void UserLogin::pbMyDetails()
{
    ui->stackedWidget->setCurrentIndex(2);
} /// End of pbMyDetails()

// Function to show Enlarged Certificate Image
void UserLogin::pbShowCertificate()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->showEnlargeTests->hide();
    ui->showEnlargeQRCodeImage->hide();
    ui->showLargeQR->hide();
    ui->showEnlargeCertificate->show();
    ui->pbCloseImage->show();
    ui->closeImageText->show();
} /// End of pbShowCertificate()

// Function to show Enlarged QR Code Image
void UserLogin::pbShowQRCode()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->showEnlargeTests->hide();
    ui->showEnlargeCertificate->hide();
    ui->showEnlargeQRCodeImage->show();
    ui->showLargeQR->show();
    ui->pbCloseImage->show();
    ui->closeImageText->show();
} /// End of pbShowQRCode

// Function to show Enlarged Test Results Image
void UserLogin::pbShowTestResult()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->showEnlargeCertificate->hide();
    ui->showEnlargeQRCodeImage->hide();
    ui->showLargeQR->hide();
    ui->showEnlargeTests->show();
    ui->pbCloseImage->show();
    ui->closeImageText->show();

} /// End of pbShowTestResult


// Function to close enlarged images
void UserLogin::pbClose()
{
    ui->stackedWidget->setCurrentIndex(2);
   // ui->showEnlargeImage->hide();
   // ui->closeImageText->hide();
   // ui->pbCloseImage->hide();
} /// End of pbClose()

// Function to make images full screen
void UserLogin::pbFullScreen()
{
    ui->showEnlargeTests->showFullScreen();
    ui->pbCloseImage->show();
    ui->closeImageText->show();
}

/// Report Functions
///*********************************************************

// Function to display Contact Us page
void UserLogin::pbContactUs()
{
    ui->stackedWidget->setCurrentIndex(3);

    citizenReport* ptrNewReport = nullptr;

    if (ptrNewReport != nullptr)
    {
        reportList.push_back(ptrNewReport);
    }
} /// End of pbContactUs();

// Function to submit user's report
void UserLogin::submitReport()
{
    QString addName = ui->editPreferredName->text();
    QString addContact = ui->editPreferredContact->text();
    QString addCategory = ui->cbReportCategory->currentText();
    QString addSubject = ui->editReportSubject->text();
    QString addDetails = ui->editReportDetails->toPlainText();

    if (addSubject.trimmed() != "" && addDetails.trimmed() != "")
    {
        citizenReport *ptrNewReport = new citizenReport(addName, addContact, addCategory, addSubject, addDetails);
        reportList.push_back(ptrNewReport);
    }
    else
    {
        QMessageBox::information(this, "More Details Required",
                                       "Please ensure the Subject and Message has been entered...");
    }

    // Writing to file
    /// Windows File Path
    //QFile outputFile("UserReports.txt");
    /// Mac File Path
    QFile outputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/UserReports.txt");

    QTextStream out(&outputFile);
    outputFile.open(QIODevice::WriteOnly | QIODevice::Text);

    for (int i = 0; i < reportList.size(); i++)
       {
        out << reportList.at(i)->getName() << ",";
        out << reportList.at(i)->getContact() << ",";
        out << reportList.at(i)->getCategory() << ",";
        out << reportList.at(i)->getSubject() << ",";
        out << reportList.at(i)->getDetails()<< Qt::endl; //Qt::endl;
       }


    // Flushing file and then closing.
    out.flush();
    outputFile.close();

    // Clear input from labels
    ui->editReportSubject->clear();
    ui->editReportDetails->clear();

    // Displaying saved message for admin user
    //ui->labelConfirmation->show();
} /// End of submitReport()


// Function to logout
void UserLogin::logout()
{
    UserLogin *login;
    close();
    //Displays Login window
    login = new UserLogin(this);
    login->show();
} // E/nd of logout()


/// Destructor : End of Program.
///*********************************************************
UserLogin::~UserLogin()
{
    for (int i=0; i<reportList.size(); i++)
    {
        delete reportList.at(i);
    }
    reportList.clear();

    delete ui;
}
