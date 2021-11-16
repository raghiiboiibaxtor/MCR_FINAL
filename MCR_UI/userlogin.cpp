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
#include <QUrl>
#include <QDesktopServices>

// Login for Admin/User & User Main Window
//*********************************************************

// { Overloading constructors begins :

UserLogin::UserLogin(QWidget *parent):QMainWindow(parent), ui(new Ui::UserLogin)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->pbLoginLP->setDefault(true);
    // Home page display image
    QPixmap pixmap(":/res/images/imgHome1.png");
    ui->imgHomeLP->setPixmap(pixmap);
    ui->imgHomeLP->setScaledContents(true);

    // Hidden UI Elements
    //ui->labelConfirmation->hide();
    ui->showLargeTestsFS->hide();
    ui->pbCloseImageFS->hide();
    ui->pbFullScreenFS->hide();

    // Manual UI -> Function Connections
    connect(ui->pbLoginLP, &QPushButton::clicked, this, &UserLogin::login);
    connect(ui->pbCircleLoginLP, &QPushButton::clicked, this, &UserLogin::login);


    // Home Buttons
    connect(ui->pbHomeHP, &QPushButton::clicked, this, &UserLogin::pbHome);
    connect(ui->pbHomePP, &QPushButton::clicked, this, &UserLogin::pbHome);
    connect(ui->pbHomeCP, &QPushButton::clicked, this, &UserLogin::pbHome);
    connect(ui->pbHomeFS, &QPushButton::clicked, this, &UserLogin::pbHome);

    // Profile Buttons
    connect(ui->pbProfileHP, &QPushButton::clicked, this, &UserLogin::pbMyDetails);
    connect(ui->pbProfilePP, &QPushButton::clicked, this, &UserLogin::pbMyDetails);
    connect(ui->pbProfileCP, &QPushButton::clicked, this, &UserLogin::pbMyDetails);
    connect(ui->pbProfileFS, &QPushButton::clicked, this, &UserLogin::pbMyDetails);


    // Contact Buttons
    connect(ui->pbContactHP, &QPushButton::clicked, this, &UserLogin::pbContactUs);
    connect(ui->pbContactPP, &QPushButton::clicked, this, &UserLogin::pbContactUs);
    connect(ui->pbContactCP, &QPushButton::clicked, this, &UserLogin::pbContactUs);
    connect(ui->pbContactFS, &QPushButton::clicked, this, &UserLogin::pbContactUs);


    // Logout Buttons
    connect(ui->pbLogoutHP, &QPushButton::clicked, this, &UserLogin::logout);
    connect(ui->pbLogoutPP, &QPushButton::clicked, this, &UserLogin::logout);
    connect(ui->pbLogoutCP, &QPushButton::clicked, this, &UserLogin::logout);
    connect(ui->pbLogoutFS, &QPushButton::clicked, this, &UserLogin::logout);

    // In app connections
    connect(ui->pbEnlargeCertificatePP, &QPushButton::clicked, this, &UserLogin::pbShowCertificate);
    connect(ui->pbEnlargeQRPP, &QPushButton::clicked, this, &UserLogin::pbShowQRCode);
    connect(ui->pbEnlargeResultsPP, &QPushButton::clicked, this, &UserLogin::pbShowTestResult);
    connect(ui->pbCloseImageFS, &QPushButton::clicked, this, &UserLogin::pbClose);

    connect(ui->pbSendMessageCP, &QPushButton::clicked, this, &UserLogin::submitReport);
    connect(ui->pbGetVaccinatedLinkCP, &QPushButton::clicked, this, &UserLogin::getVaccinatedLink);
    connect(ui->pbGetTestedLinkCP, &QPushButton::clicked, this, &UserLogin::getTestedLink);
    connect(ui->pbLearnMoreLinkCP, &QPushButton::clicked, this, &UserLogin::learnMoreLink);
    connect(ui->pbMCRLinkLP, &QPushButton::clicked, this, &UserLogin::covidRecordLink);

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

// Press Enter to login function
void UserLogin::keyPressEvent(QKeyEvent* ptrPressEnter)
{
if(ptrPressEnter->key() == Qt::Key_Return)login();
}

// Function to login
void UserLogin::login()
{
    QString email = ui->editEmailLP->text();
    QString NHI = ui->editNHILP->text();
    QString accessNumber = ui->editAccessNumberLP->text();

    // Check if login input matches, if not, an error message will be displayed
    // If correct, directed to Home Page
    if (NHI == "NHIAdmin") // Admin Login Check Loop
    {
        if (email == "admin@mycovidrecord.co.nz")
        {
            if (accessNumber == "4242")
            {
                this->hide();
                // Displays Admin Home Page
                mainWindow = new MainWindow(this);
                mainWindow->show();
            }
            else
            {
                ui->labelErrorLP->setText("Incorrect Access Number Entered");
            }
        }
        else
        {
            ui->labelErrorLP->setText("Incorrect Email Entered");
        }
    }
    else if(NHI != "NHIAdmin")
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
            QStringList info = line.split("|");

            QString fileEmail = info.at(2);
            QString fileNHI = info.at(4);

            if (email == fileEmail && NHI == fileNHI) // User Login Check Loop
            {
                if (accessNumber == "5656")
                {
                    // Adding file information to vector
                    classCitizen* temp = new classCitizen(info.at(0), info.at(1), info.at(2), info.at(3), info.at(4), info.at(5), info.at(6), info.at(7), info.at(8), info.at(9), info.at(10),
                                                          info.at(11), info.at(12), info.at(13), info.at(14), info.at(15), info.at(16), info.at(17), info.at(18));
                    userList.push_back(temp);

                    // Populating labels on My Details page
                    ui->showUserNamePP->setText(temp->getName());
                    ui->showUserNumberPP->setText(temp->getContactNumber());
                    ui->showUserEmailPP->setText(temp->getEmailAddress());
                    ui->showUserDOBPP->setText(temp->getDateOfBirth());
                    ui->showUserNHIPP->setText(temp->getNHI());
                    ui->showUserCVNPP->setText(temp->getCVN());
                    ui->showUserEmergencyPP->setText(temp->getEmergencyContact());
                    ui->showUserVaccStatusPP->setText(temp->getVaccineStatus());
                    ui->showDose1NamePP->setText(temp->getVaccineName1());
                    ui->showDose1BatchPP->setText(temp->getBatchNumber1());
                    ui->showDose1DatePP->setText(temp->getDateGiven1());
                    ui->showDose2NamePP->setText(temp->getVaccineName2());
                    ui->showDose2BatchPP->setText(temp->getBatchNumber2());
                    ui->showDose2DatePP->setText(temp->getDateGiven2());
                    QPixmap pixmap(temp->getCertificate());
                    ui->showCertificatePP->setPixmap(pixmap);
                    ui->showCertificatePP->setScaledContents(true);
                    ui->showLargeCertificateFS->setPixmap(pixmap);
                    ui->showLargeCertificateFS->setScaledContents(true);
                    QPixmap pixmap1(":/res/images/QRCodeImage.png");
                    ui->showLargeQRCodeImageFS->setPixmap(pixmap1);
                    ui->showLargeQRCodeImageFS->setScaledContents(true);
                    QPixmap pixmapQR(temp->getQRCode());
                    ui->showQRCodePP->setPixmap(pixmapQR);
                    ui->showQRCodePP->setScaledContents(true);
                    ui->showLargeQRFS->setPixmap(pixmapQR);
                    ui->showLargeQRFS->setScaledContents(true);
                    QPixmap pixmap2(temp->getTestResult());
                    ui->showTestResultsPP->setPixmap(pixmap2);
                    ui->showTestResultsPP->setScaledContents(true);
                    ui->showLargeTestsFS->setPixmap(pixmap2);
                    ui->showLargeTestsFS->setScaledContents(true);

                    // Populating labels on Contact Us page
                    ui->editPreferredNameCP->setText(temp->getName());
                    ui->editPreferredContactCP->setText(temp->getEmailAddress());

                    // Populating labels in Welcome label
                    ui->labelUserNameHP->setText(info.at(0));
                    ui->labelUserNamePP->setText(info.at(0));
                    ui->labelUserNameCP->setText(info.at(0));
                    ui->labelUserNameFS->setText(info.at(0));

                    QPixmap pixmap3(temp->getCitizenImage());
                    ui->showUserPictureHP->setPixmap(pixmap3);
                    ui->showUserPictureHP->setScaledContents(true);
                    ui->showUserPicturePP->setPixmap(pixmap3);
                    ui->showUserPicturePP->setScaledContents(true);
                    ui->showUserPictureCP->setPixmap(pixmap3);
                    ui->showUserPictureCP->setScaledContents(true);
                    ui->showUserPictureFS->setPixmap(pixmap3);
                    ui->showUserPictureFS->setScaledContents(true);

                    // Change page index to User Home Page
                    ui->stackedWidget->setCurrentIndex(1);
                }
                else
                {
                    ui->labelErrorLP->setText("Incorrect Access Number Entered");
                }
            }
            else if (email != fileEmail)
            {
                ui->labelErrorLP->setText("Incorrect Email Entered");
            }
            else
            {
                ui->labelErrorLP->setText("Incorrect NHI Entered");
            }
        }
        //Flushing file and then closing.
        read.flush();
        inputFile.close();
    }
    else
    {
        ui->labelErrorLP->setText("Incorrect NHI Entered");
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
    ui->showLargeTestsFS->hide();
    ui->showLargeQRCodeImageFS->hide();
    ui->showLargeQRFS->hide();
    ui->showLargeCertificateFS->show();
    ui->pbCloseImageFS->show();
    ui->closeImageTextFS->show();
} /// End of pbShowCertificate()

// Function to show Enlarged QR Code Image
void UserLogin::pbShowQRCode()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->showLargeTestsFS->hide();
    ui->showLargeCertificateFS->hide();
    ui->showLargeQRCodeImageFS->show();
    ui->showLargeQRFS->show();
    ui->pbCloseImageFS->show();
    ui->closeImageTextFS->show();
} /// End of pbShowQRCode

// Function to show Enlarged Test Results Image
void UserLogin::pbShowTestResult()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->showLargeCertificateFS->hide();
    ui->showLargeQRCodeImageFS->hide();
    ui->showLargeQRFS->hide();
    ui->showLargeTestsFS->show();
    ui->pbCloseImageFS->show();
    ui->closeImageTextFS->show();

} /// End of pbShowTestResult


// Function to close enlarged images
void UserLogin::pbClose()
{
    ui->stackedWidget->setCurrentIndex(2);
} /// End of pbClose()

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
    QString addName = ui->editPreferredNameCP->text();
    QString addContact = ui->editPreferredContactCP->text();
    QString addCategory = ui->cbReportCategoryCP->currentText();
    QString addSubject = ui->editReportSubjectCP->text();
    QString addDetails = ui->editReportDetailsCP->toPlainText();
    QString addContactDetails = ui->cbContactMethodCP->currentText();

    if (addSubject.trimmed() != "" && addDetails.trimmed() != "")
    {
        citizenReport *ptrNewReport = new citizenReport(addName, addContact, addContactDetails, addCategory, addSubject, addDetails);
        reportList.push_back(ptrNewReport);

        QMessageBox::information(this, "Confirmation",
                                       "Thank you! Your message has been sent. We'll get back to you soon.");
    }
    else
    {
        QMessageBox::information(this, "More Details Required",
                                       "Please ensure the Subject and Message has been entered...");
    }

    // Starting if Else Block to determine which file information will be written to.
    if (addCategory == "General Enquiries")
    {
        // Writing to file
        /// Windows File Path
        //QFile outputFile("GeneralEnquiries.txt");
        /// Mac File Path
        QFile outputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/GeneralEnquiries.txt");

        addDetails.replace(QString("\n"), QString ("<br>"));
        QString paragraph(addDetails);

        //inputFile.seek(0);

        QTextStream out(&outputFile);
        outputFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);

        out << addName << "|";
        out << addContactDetails << "|";
        out << addContact << "|";
        out << addCategory << "|";
        out << addSubject << "|";
        out << paragraph << Qt::endl; //Qt::endl;

        // Flushing file and then closing.
        out.flush();
        outputFile.close();


    }
    else if (addCategory == "COVID-19 Vaccine")
    {
        // Writing to file
        /// Windows File Path
        //QFile outputFile("COVID19Vaccine.txt");
        /// Mac File Path
        QFile outputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/COVID19Vaccine.txt");

        addDetails.replace(QString("\n"), QString ("<br>"));
        QString paragraph(addDetails);

        //inputFile.seek(0);

        QTextStream out(&outputFile);
        outputFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);

        out << addName << "|";
        out << addContactDetails << "|";
        out << addContact << "|";
        out << addCategory << "|";
        out << addSubject << "|";
        out << paragraph << Qt::endl; //Qt::endl;


        // Flushing file and then closing.
        out.flush();
        outputFile.close();
    }
    else if (addCategory == "Change/Update Personal Details")
    {
        // Writing to file
        /// Windows File Path
        //QFile outputFile("ChangePersonalDetails.txt");
        /// Mac File Path
        QFile outputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/ChangePersonalDetails.txt");

        addDetails.replace(QString("\n"), QString ("<br>"));
        QString paragraph(addDetails);

        //inputFile.seek(0);

        QTextStream out(&outputFile);
        outputFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);

        out << addName << "|";
        out << addContactDetails << "|";
        out << addContact << "|";
        out << addCategory << "|";
        out << addSubject << "|";
        out << paragraph << Qt::endl; //Qt::endl;


        // Flushing file and then closing.
        out.flush();
        outputFile.close();
    }
    else if (addCategory == "My COVID Record Application")
    {
        // Writing to file
        /// Windows File Path
        //QFile outputFile("COVIDRecordApp.txt");
        /// Mac File Path
        QFile outputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/COVIDRecordApp.txt");

        addDetails.replace(QString("\n"), QString ("<br>"));
        QString paragraph(addDetails);

        //inputFile.seek(0);

        QTextStream out(&outputFile);
        outputFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);

        out << addName << "|";
        out << addContactDetails << "|";
        out << addContact << "|";
        out << addCategory << "|";
        out << addSubject << "|";
        out << paragraph << Qt::endl; //Qt::endl;

        // Flushing file and then closing.
        out.flush();
        outputFile.close();
    }
    else
    {
        // Writing to file
        /// Windows File Path
        //QFile outputFile("Other.txt");
        /// Mac File Path
        QFile outputFile("/Users/raghiiboiibaxtor/Documents/MCR_FINAL/MCR_UI/files/Other.txt");

        addDetails.replace(QString("\n"), QString ("<br>"));
        QString paragraph(addDetails);

        //inputFile.seek(0);

        QTextStream out(&outputFile);
        outputFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);


        out << addName << "|";
        out << addContactDetails << "|";
        out << addContact << "|";
        out << addCategory << "|";
        out << addSubject << "|";
        out << paragraph << Qt::endl; //Qt::endl;

        // Flushing file and then closing.
        out.flush();
        outputFile.close();
    }

    // Clear input from labels
    ui->editReportSubjectCP->clear();
    ui->editReportDetailsCP->clear();
} /// End of submitReport()

// Function to direct user to Book My Vaccine
void UserLogin::getVaccinatedLink()
{
    QString link = "https://bookmyvaccine.covid19.health.nz/";
    QDesktopServices::openUrl(QUrl(link));
} /// End of getVaccinatedLink()

// Function to direct user to COVID-19 Testing
void UserLogin::getTestedLink()
{
    QString link = "https://covid19.govt.nz/health-and-wellbeing/covid-19-testing/get-tested-for-covid-19/";
    QDesktopServices::openUrl(QUrl(link));
}/// End of getTestLink()

// Function to direct user to COVID-19.govt
void UserLogin::learnMoreLink()
{
    QString link = "https://covid19.govt.nz/";
    QDesktopServices::openUrl(QUrl(link));
}/// End of learnMoreLink()

// Function to direct user to My COVID Record
void UserLogin::covidRecordLink()
{
    QString link = "https://mycovidrecord.health.nz/";
    QDesktopServices::openUrl(QUrl(link));
}
/// End of covidRecordLink()

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
