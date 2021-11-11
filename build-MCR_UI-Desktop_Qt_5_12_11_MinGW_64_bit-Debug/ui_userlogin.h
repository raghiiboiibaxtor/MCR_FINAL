/********************************************************************************
** Form generated from reading UI file 'userlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserLogin
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QLabel *loginWhiteBackground;
    QFrame *loginBlueBackground;
    QPushButton *pbMCRLink;
    QLabel *loginImage;
    QFrame *loginTitleFrame;
    QLabel *loginCOVIDSub;
    QLabel *loginSubHeading;
    QLabel *kiaOraTitle;
    QLabel *simplyLoginSub;
    QFrame *accountLoginFrame;
    QLineEdit *enterNHI;
    QLineEdit *enterEmail;
    QLineEdit *enterAccess;
    QLabel *enterDetailsText;
    QLabel *myAccountTitle;
    QPushButton *pbLogin;
    QPushButton *pbCircleLogin;
    QWidget *userHome;
    QLabel *userHomeWhiteBackground;
    QFrame *homeBlueMenuBar;
    QPushButton *pbHome;
    QPushButton *pbProfile;
    QPushButton *pbContact;
    QFrame *userHomeHelloBar;
    QLabel *displayPicture_2;
    QLabel *label_9;
    QLabel *label_17;
    QPushButton *pbLogout;
    QFrame *userHomeDisplayFrame;
    QLabel *homeSubHeading;
    QLabel *homeTitle;
    QFrame *alerLevelUpdatesFrame;
    QFrame *communityCasesFrame;
    QFrame *vaccineStatsFrame;
    QLabel *alerLevelUpdatesTitle;
    QLabel *vaccineStatsTitle;
    QLabel *communityCasesTitle;
    QWidget *userProfile;
    QLabel *userHomeWhiteBackground_2;
    QFrame *userHomeHelloBar_2;
    QLabel *displayPicture_4;
    QLabel *label_12;
    QLabel *label_19;
    QPushButton *pbLogout_3;
    QFrame *userProfileBlueMenuBar;
    QPushButton *pbHome_4;
    QPushButton *pbProfile_4;
    QPushButton *pbContact_4;
    QFrame *userHomeDisplayFrame_2;
    QLabel *homeSubHeading_2;
    QLabel *homeTitle_2;
    QFrame *userInfoFrame;
    QLabel *showUserName;
    QLabel *userDOBHeading;
    QLabel *showUserDOB;
    QLabel *showUserNumber;
    QLabel *userNumberHeading;
    QLabel *showUserEmail;
    QLabel *userEmailHeading;
    QLabel *showUserEmergencyContact;
    QLabel *userEmercencyContactHeading;
    QFrame *vaccineDose1Frame;
    QLabel *vaccineIcon1Frame;
    QLabel *vaccine1TypeLabel;
    QLabel *dose1Text;
    QLabel *vaccine1DateRecieved;
    QLabel *imgVaccineIcon2_2;
    QLabel *myVaccinesHeading;
    QLabel *myDocsHeading;
    QFrame *vaccineDose2Frame;
    QLabel *vaccineIcon2Frame;
    QLabel *dose2Text;
    QLabel *vaccine2TypeLabel;
    QLabel *vaccine2DateRecieved;
    QLabel *imgVaccineIcon2_3;
    QFrame *userMedicalFrame;
    QLabel *userNHIHeading;
    QLabel *userVaccStatusHeading;
    QLabel *showUserCVN;
    QLabel *showUserVaccStatus;
    QLabel *userCVNHeading;
    QLabel *showUserNHI;
    QLabel *medicalInfoHeading;
    QFrame *testResultFrame;
    QLabel *imgTestResults;
    QFrame *qrCodeFrame;
    QLabel *imgQRCode;
    QFrame *certificateFrame;
    QLabel *imgCertificate;
    QLabel *myDocsSub;
    QLabel *testResultText;
    QLabel *certificateText;
    QLabel *qrCodeText;
    QWidget *userContact;
    QFrame *userProfileBlueMenuBar_2;
    QPushButton *pbHome_5;
    QPushButton *pbProfile_5;
    QPushButton *pbContact_5;
    QLabel *userHomeWhiteBackground_3;
    QFrame *userHomeDisplayFrame_3;
    QLabel *homeSubHeading_3;
    QLabel *homeTitle_3;
    QFrame *userInfoFrame_2;
    QLabel *showUserName_2;
    QLabel *userDOBHeading_2;
    QLabel *userNumberHeading_2;
    QLineEdit *editPreferredContact;
    QLineEdit *editPreferredName;
    QFrame *userMedicalFrame_3;
    QLabel *medicalInfoHeading_4;
    QLabel *userDOBHeading_3;
    QLabel *userNumberHeading_3;
    QLabel *userNumberHeading_4;
    QPlainTextEdit *editReportDetails;
    QLineEdit *editReportSubject;
    QComboBox *cbReportCategory;
    QLabel *myVaccinesHeading_2;
    QPushButton *pbMCRLink_2;
    QLabel *homeSubHeading_4;
    QPushButton *pbMCRLink_3;
    QPushButton *pbMCRLink_4;
    QFrame *userHomeHelloBar_3;
    QLabel *displayPicture_5;
    QLabel *label_13;
    QLabel *label_20;
    QPushButton *pbLogout_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserLogin)
    {
        if (UserLogin->objectName().isEmpty())
            UserLogin->setObjectName(QString::fromUtf8("UserLogin"));
        UserLogin->resize(1100, 811);
        centralwidget = new QWidget(UserLogin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-1, -1, 1101, 791));
        stackedWidget->setStyleSheet(QString::fromUtf8("background:white;"));
        loginPage = new QWidget();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        loginWhiteBackground = new QLabel(loginPage);
        loginWhiteBackground->setObjectName(QString::fromUtf8("loginWhiteBackground"));
        loginWhiteBackground->setGeometry(QRect(0, 0, 1101, 791));
        loginWhiteBackground->setStyleSheet(QString::fromUtf8("background: #F2F8FC;"));
        loginBlueBackground = new QFrame(loginPage);
        loginBlueBackground->setObjectName(QString::fromUtf8("loginBlueBackground"));
        loginBlueBackground->setGeometry(QRect(10, -200, 1081, 951));
        QFont font;
        font.setFamily(QString::fromUtf8("Quicksand"));
        loginBlueBackground->setFont(font);
        loginBlueBackground->setStyleSheet(QString::fromUtf8("background: rgba(104, 160, 229, 0.33);\n"
"border-radius: 150px;"));
        loginBlueBackground->setFrameShape(QFrame::StyledPanel);
        loginBlueBackground->setFrameShadow(QFrame::Raised);
        pbMCRLink = new QPushButton(loginBlueBackground);
        pbMCRLink->setObjectName(QString::fromUtf8("pbMCRLink"));
        pbMCRLink->setGeometry(QRect(910, 210, 161, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Quicksand"));
        font1.setBold(true);
        font1.setWeight(62);
        pbMCRLink->setFont(font1);
        pbMCRLink->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #2B528C;\n"
"font-weight: 500;\n"
"border-radius: 20px;\n"
"background:  rgba(248, 251, 255, 0.88);\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"font-size: 14px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:  rgba(248, 251, 255, 0.55);\n"
"border-color: rgba(104, 160, 229, 0.88);\n"
"font-size: 14px;\n"
"color: #2B528C;\n"
"}"));
        loginImage = new QLabel(loginBlueBackground);
        loginImage->setObjectName(QString::fromUtf8("loginImage"));
        loginImage->setGeometry(QRect(300, 310, 771, 541));
        loginImage->setPixmap(QPixmap(QString::fromUtf8(":/res/images/imgHome.png")));
        loginImage->setScaledContents(true);
        loginTitleFrame = new QFrame(loginPage);
        loginTitleFrame->setObjectName(QString::fromUtf8("loginTitleFrame"));
        loginTitleFrame->setGeometry(QRect(-120, -20, 721, 271));
        loginTitleFrame->setStyleSheet(QString::fromUtf8("background: rgba(104, 160, 229, 0.12);\n"
"border-radius: 135px;"));
        loginTitleFrame->setFrameShape(QFrame::StyledPanel);
        loginTitleFrame->setFrameShadow(QFrame::Raised);
        loginCOVIDSub = new QLabel(loginTitleFrame);
        loginCOVIDSub->setObjectName(QString::fromUtf8("loginCOVIDSub"));
        loginCOVIDSub->setGeometry(QRect(171, 160, 421, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Quicksand"));
        font2.setBold(false);
        font2.setWeight(25);
        loginCOVIDSub->setFont(font2);
        loginCOVIDSub->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 20px;\n"
"color: #2B528C;\n"
"background: rgba(104, 160, 229, 0.00);\n"
""));
        loginSubHeading = new QLabel(loginTitleFrame);
        loginSubHeading->setObjectName(QString::fromUtf8("loginSubHeading"));
        loginSubHeading->setGeometry(QRect(171, 106, 481, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font3.setBold(true);
        font3.setWeight(62);
        loginSubHeading->setFont(font3);
        loginSubHeading->setStyleSheet(QString::fromUtf8("font-weight: 500;\n"
"font-size: 23px;\n"
"color: #2B528C;\n"
"background: rgba(104, 160, 229, 0.00);\n"
""));
        kiaOraTitle = new QLabel(loginTitleFrame);
        kiaOraTitle->setObjectName(QString::fromUtf8("kiaOraTitle"));
        kiaOraTitle->setGeometry(QRect(170, 46, 511, 61));
        kiaOraTitle->setFont(font3);
        kiaOraTitle->setStyleSheet(QString::fromUtf8("font-weight: 500;\n"
"font-size: 55px;\n"
"color: #2B528C;\n"
"background: rgba(104, 160, 229, 0.00);\n"
""));
        simplyLoginSub = new QLabel(loginTitleFrame);
        simplyLoginSub->setObjectName(QString::fromUtf8("simplyLoginSub"));
        simplyLoginSub->setGeometry(QRect(171, 200, 421, 51));
        simplyLoginSub->setFont(font2);
        simplyLoginSub->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 20px;\n"
"color: #2B528C;\n"
"background: rgba(104, 160, 229, 0.00);\n"
""));
        accountLoginFrame = new QFrame(loginPage);
        accountLoginFrame->setObjectName(QString::fromUtf8("accountLoginFrame"));
        accountLoginFrame->setGeometry(QRect(20, 359, 411, 411));
        accountLoginFrame->setStyleSheet(QString::fromUtf8(" background: #2B528C;\n"
"border-radius: 80px;"));
        accountLoginFrame->setFrameShape(QFrame::StyledPanel);
        accountLoginFrame->setFrameShadow(QFrame::Raised);
        enterNHI = new QLineEdit(accountLoginFrame);
        enterNHI->setObjectName(QString::fromUtf8("enterNHI"));
        enterNHI->setGeometry(QRect(24, 140, 361, 51));
        enterNHI->setFont(font);
        enterNHI->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{background: rgba(104, 160, 229, 0.33);\n"
"border-radius: 25;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"color: #F8FBFF;\n"
"font-size: 16px; \n"
"padding-left: 3px;}\n"
"\n"
"QLineEdit:hover\n"
"{\n"
"border: 3px solid rgba(104, 160, 229, 0.00);\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"background: rgba(104, 160, 229, 0.33);\n"
"border: 3px solid rgba(104, 160, 229, 0.88);\n"
"color: #F8FBFF;\n"
"padding-left: 3px;\n"
"}"));
        enterEmail = new QLineEdit(accountLoginFrame);
        enterEmail->setObjectName(QString::fromUtf8("enterEmail"));
        enterEmail->setGeometry(QRect(24, 230, 361, 51));
        enterEmail->setFont(font);
        enterEmail->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{background: rgba(104, 160, 229, 0.33);\n"
"border-radius: 25;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"color: #F8FBFF;\n"
"font-size: 16px; \n"
"padding-left: 3px;}\n"
"\n"
"QLineEdit:hover\n"
"{\n"
"border: 3px solid rgba(104, 160, 229, 0.00);\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"background: rgba(104, 160, 229, 0.33);\n"
"border: 3px solid rgba(104, 160, 229, 0.88);\n"
"color: #F8FBFF;\n"
"padding-left: 3px;\n"
"}"));
        enterAccess = new QLineEdit(accountLoginFrame);
        enterAccess->setObjectName(QString::fromUtf8("enterAccess"));
        enterAccess->setGeometry(QRect(24, 320, 361, 51));
        enterAccess->setFont(font);
        enterAccess->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{background: rgba(104, 160, 229, 0.33);\n"
"border-radius: 25;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"color: #F8FBFF;\n"
"font-size: 16px; \n"
"padding-left: 3px;}\n"
"\n"
"QLineEdit:hover\n"
"{\n"
"border: 3px solid rgba(104, 160, 229, 0.00);\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"background: rgba(104, 160, 229, 0.33);\n"
"border: 3px solid rgba(104, 160, 229, 0.88);\n"
"color: #F8FBFF;\n"
"padding-left: 3px;\n"
"}"));
        enterDetailsText = new QLabel(accountLoginFrame);
        enterDetailsText->setObjectName(QString::fromUtf8("enterDetailsText"));
        enterDetailsText->setGeometry(QRect(41, 80, 331, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Quicksand"));
        font4.setBold(false);
        font4.setWeight(12);
        enterDetailsText->setFont(font4);
        enterDetailsText->setStyleSheet(QString::fromUtf8("color: #F8FBFF;\n"
"font-weight: 100;\n"
"font-size: 18px;"));
        myAccountTitle = new QLabel(accountLoginFrame);
        myAccountTitle->setObjectName(QString::fromUtf8("myAccountTitle"));
        myAccountTitle->setGeometry(QRect(41, 40, 331, 31));
        myAccountTitle->setFont(font3);
        myAccountTitle->setStyleSheet(QString::fromUtf8("color: #F8FBFF;\n"
"font-weight: 500;\n"
"font-size: 33px;"));
        pbLogin = new QPushButton(loginPage);
        pbLogin->setObjectName(QString::fromUtf8("pbLogin"));
        pbLogin->setGeometry(QRect(730, 650, 351, 111));
        pbLogin->setFont(font3);
        pbLogin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background: rgba(255, 200, 83, 0.77);\n"
"border-radius: 55px;\n"
"font-size: 33px;\n"
"color: #2B528C;\n"
"font-weight: 500;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:rgba(255, 200, 83, 0.99);\n"
"font-size: 33px;\n"
"color: #2B528C;\n"
"}"));
        pbLogin->setFlat(false);
        pbCircleLogin = new QPushButton(loginPage);
        pbCircleLogin->setObjectName(QString::fromUtf8("pbCircleLogin"));
        pbCircleLogin->setGeometry(QRect(1004, 675, 61, 61));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font5.setBold(true);
        font5.setWeight(75);
        pbCircleLogin->setFont(font5);
        pbCircleLogin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background: rgba(236, 151, 69, 0.88);\n"
"border-radius: 30px;\n"
"color: rgba(236, 151, 69, 0.00);\n"
"}\n"
"\n"
"QPushButton: hover{\n"
"background: rgba(255, 200, 83, 0.55);\n"
"color: rgba(236, 151, 69, 0.00);\n"
"}"));
        pbCircleLogin->setFlat(false);
        stackedWidget->addWidget(loginPage);
        loginWhiteBackground->raise();
        loginBlueBackground->raise();
        loginTitleFrame->raise();
        pbLogin->raise();
        accountLoginFrame->raise();
        pbCircleLogin->raise();
        userHome = new QWidget();
        userHome->setObjectName(QString::fromUtf8("userHome"));
        userHomeWhiteBackground = new QLabel(userHome);
        userHomeWhiteBackground->setObjectName(QString::fromUtf8("userHomeWhiteBackground"));
        userHomeWhiteBackground->setGeometry(QRect(0, 0, 1101, 791));
        userHomeWhiteBackground->setStyleSheet(QString::fromUtf8("background: #F2F8FC;"));
        homeBlueMenuBar = new QFrame(userHome);
        homeBlueMenuBar->setObjectName(QString::fromUtf8("homeBlueMenuBar"));
        homeBlueMenuBar->setGeometry(QRect(0, -100, 211, 741));
        homeBlueMenuBar->setStyleSheet(QString::fromUtf8(" background: #2B528C;\n"
"border-radius: 105px;"));
        homeBlueMenuBar->setFrameShape(QFrame::StyledPanel);
        homeBlueMenuBar->setFrameShadow(QFrame::Raised);
        pbHome = new QPushButton(homeBlueMenuBar);
        pbHome->setObjectName(QString::fromUtf8("pbHome"));
        pbHome->setGeometry(QRect(-81, 133, 271, 51));
        pbHome->setFont(font3);
        pbHome->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #2B528C;\n"
"font-weight: 500;\n"
"border-radius: 25px;\n"
"background:  white;\n"
"font-size: 16px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"font-size: 17px;\n"
"}"));
        pbProfile = new QPushButton(homeBlueMenuBar);
        pbProfile->setObjectName(QString::fromUtf8("pbProfile"));
        pbProfile->setGeometry(QRect(-50, 220, 241, 51));
        pbProfile->setFont(font3);
        pbProfile->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background: #2B528C;\n"
"font-weight: 500;\n"
"border-radius: 25px;\n"
"color:  rgba(248, 251, 255, 0.99);\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"font-size: 16px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"font-size: 18px;\n"
"}"));
        pbContact = new QPushButton(homeBlueMenuBar);
        pbContact->setObjectName(QString::fromUtf8("pbContact"));
        pbContact->setGeometry(QRect(-40, 310, 231, 51));
        pbContact->setFont(font3);
        pbContact->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background: #2B528C;\n"
"font-weight: 500;\n"
"border-radius: 25px;\n"
"color:  rgba(248, 251, 255, 0.99);\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"font-size: 16px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"font-size: 18px;\n"
"}"));
        userHomeHelloBar = new QFrame(userHome);
        userHomeHelloBar->setObjectName(QString::fromUtf8("userHomeHelloBar"));
        userHomeHelloBar->setGeometry(QRect(0, 430, 211, 511));
        userHomeHelloBar->setStyleSheet(QString::fromUtf8("background: rgba(104, 160, 229, 0.33);\n"
"border-radius: 105px;"));
        userHomeHelloBar->setFrameShape(QFrame::StyledPanel);
        userHomeHelloBar->setFrameShadow(QFrame::Raised);
        displayPicture_2 = new QLabel(userHomeHelloBar);
        displayPicture_2->setObjectName(QString::fromUtf8("displayPicture_2"));
        displayPicture_2->setGeometry(QRect(25, 25, 161, 161));
        displayPicture_2->setStyleSheet(QString::fromUtf8("background: rgba(248, 251, 255, 0.99);\n"
"border-radius: 80px;"));
        label_9 = new QLabel(userHomeHelloBar);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(18, 259, 191, 31));
        label_9->setFont(font3);
        label_9->setStyleSheet(QString::fromUtf8("color: #2B528C;\n"
"font-weight: 500;\n"
"font-size: 23px;\n"
"background: rgba(104, 160, 229, 0.00);"));
        label_17 = new QLabel(userHomeHelloBar);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(18, 229, 101, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Avenir Next"));
        font6.setBold(false);
        font6.setWeight(50);
        label_17->setFont(font6);
        label_17->setStyleSheet(QString::fromUtf8("color: #2B528C;\n"
"font-weight: 400;\n"
"font-size: 18px;\n"
"background: rgba(104, 160, 229, 0.00);"));
        pbLogout = new QPushButton(userHomeHelloBar);
        pbLogout->setObjectName(QString::fromUtf8("pbLogout"));
        pbLogout->setGeometry(QRect(10, 310, 191, 31));
        pbLogout->setFont(font3);
        pbLogout->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #2B528C;\n"
"font-weight: 500;\n"
"border-radius: 15px;\n"
"background:  rgba(248, 251, 255, 0.99);\n"
"font-size: 16px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:  rgba(248, 251, 255, 0.55);\n"
"border-color: rgba(104, 160, 229, 0.88);\n"
"font-size: 16px;\n"
"color: #2B528C;\n"
"}"));
        label_9->raise();
        label_17->raise();
        pbLogout->raise();
        displayPicture_2->raise();
        userHomeDisplayFrame = new QFrame(userHome);
        userHomeDisplayFrame->setObjectName(QString::fromUtf8("userHomeDisplayFrame"));
        userHomeDisplayFrame->setGeometry(QRect(220, -1, 881, 791));
        userHomeDisplayFrame->setStyleSheet(QString::fromUtf8("background: white;"));
        userHomeDisplayFrame->setFrameShape(QFrame::NoFrame);
        userHomeDisplayFrame->setFrameShadow(QFrame::Raised);
        homeSubHeading = new QLabel(userHomeDisplayFrame);
        homeSubHeading->setObjectName(QString::fromUtf8("homeSubHeading"));
        homeSubHeading->setGeometry(QRect(21, 50, 481, 51));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Avenir Next"));
        font7.setBold(false);
        font7.setWeight(25);
        homeSubHeading->setFont(font7);
        homeSubHeading->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 18px;\n"
"color: #2B528C;\n"
"background: rgba(104, 160, 229, 0.00);\n"
""));
        homeTitle = new QLabel(userHomeDisplayFrame);
        homeTitle->setObjectName(QString::fromUtf8("homeTitle"));
        homeTitle->setGeometry(QRect(20, 11, 511, 61));
        homeTitle->setFont(font3);
        homeTitle->setStyleSheet(QString::fromUtf8("font-weight: 500;\n"
"font-size: 40px;\n"
"color:#2B528C;\n"
"background: rgba(104, 160, 229, 0.00);\n"
""));
        alerLevelUpdatesFrame = new QFrame(userHomeDisplayFrame);
        alerLevelUpdatesFrame->setObjectName(QString::fromUtf8("alerLevelUpdatesFrame"));
        alerLevelUpdatesFrame->setGeometry(QRect(19, 159, 451, 601));
        alerLevelUpdatesFrame->setStyleSheet(QString::fromUtf8("background: #C4DBF4;\n"
"border-radius: 50px;"));
        alerLevelUpdatesFrame->setFrameShape(QFrame::StyledPanel);
        alerLevelUpdatesFrame->setFrameShadow(QFrame::Raised);
        communityCasesFrame = new QFrame(userHomeDisplayFrame);
        communityCasesFrame->setObjectName(QString::fromUtf8("communityCasesFrame"));
        communityCasesFrame->setGeometry(QRect(500, 590, 351, 171));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Avenir Next"));
        communityCasesFrame->setFont(font8);
        communityCasesFrame->setStyleSheet(QString::fromUtf8("background: rgba(254, 206, 103, 0.55);\n"
"border-radius: 50px;"));
        communityCasesFrame->setFrameShape(QFrame::StyledPanel);
        communityCasesFrame->setFrameShadow(QFrame::Raised);
        vaccineStatsFrame = new QFrame(userHomeDisplayFrame);
        vaccineStatsFrame->setObjectName(QString::fromUtf8("vaccineStatsFrame"));
        vaccineStatsFrame->setGeometry(QRect(500, 160, 351, 381));
        vaccineStatsFrame->setStyleSheet(QString::fromUtf8("background: #F2F8FC;\n"
"border-radius: 50px;"));
        vaccineStatsFrame->setFrameShape(QFrame::StyledPanel);
        vaccineStatsFrame->setFrameShadow(QFrame::Raised);
        alerLevelUpdatesTitle = new QLabel(userHomeDisplayFrame);
        alerLevelUpdatesTitle->setObjectName(QString::fromUtf8("alerLevelUpdatesTitle"));
        alerLevelUpdatesTitle->setGeometry(QRect(25, 110, 431, 50));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Avenir Next"));
        font9.setBold(false);
        font9.setWeight(37);
        alerLevelUpdatesTitle->setFont(font9);
        alerLevelUpdatesTitle->setStyleSheet(QString::fromUtf8("font-weight: 300;\n"
"font-size: 23px;\n"
"color:#2B528C;\n"
"\n"
""));
        vaccineStatsTitle = new QLabel(userHomeDisplayFrame);
        vaccineStatsTitle->setObjectName(QString::fromUtf8("vaccineStatsTitle"));
        vaccineStatsTitle->setGeometry(QRect(500, 120, 181, 30));
        vaccineStatsTitle->setFont(font9);
        vaccineStatsTitle->setStyleSheet(QString::fromUtf8("font-weight: 300;\n"
"font-size: 23px;\n"
"color:#2B528C;\n"
"\n"
""));
        communityCasesTitle = new QLabel(userHomeDisplayFrame);
        communityCasesTitle->setObjectName(QString::fromUtf8("communityCasesTitle"));
        communityCasesTitle->setGeometry(QRect(500, 550, 431, 30));
        communityCasesTitle->setFont(font9);
        communityCasesTitle->setStyleSheet(QString::fromUtf8("font-weight: 300;\n"
"font-size: 23px;\n"
"color:#2B528C;\n"
"\n"
""));
        homeSubHeading->raise();
        homeTitle->raise();
        alerLevelUpdatesTitle->raise();
        alerLevelUpdatesFrame->raise();
        vaccineStatsTitle->raise();
        vaccineStatsFrame->raise();
        communityCasesTitle->raise();
        communityCasesFrame->raise();
        stackedWidget->addWidget(userHome);
        userProfile = new QWidget();
        userProfile->setObjectName(QString::fromUtf8("userProfile"));
        userHomeWhiteBackground_2 = new QLabel(userProfile);
        userHomeWhiteBackground_2->setObjectName(QString::fromUtf8("userHomeWhiteBackground_2"));
        userHomeWhiteBackground_2->setGeometry(QRect(0, 0, 1101, 791));
        userHomeWhiteBackground_2->setStyleSheet(QString::fromUtf8("background: #F2F8FC;"));
        userHomeHelloBar_2 = new QFrame(userProfile);
        userHomeHelloBar_2->setObjectName(QString::fromUtf8("userHomeHelloBar_2"));
        userHomeHelloBar_2->setGeometry(QRect(0, 430, 211, 511));
        userHomeHelloBar_2->setStyleSheet(QString::fromUtf8("background: rgba(104, 160, 229, 0.33);\n"
"border-radius: 105px;"));
        userHomeHelloBar_2->setFrameShape(QFrame::StyledPanel);
        userHomeHelloBar_2->setFrameShadow(QFrame::Raised);
        displayPicture_4 = new QLabel(userHomeHelloBar_2);
        displayPicture_4->setObjectName(QString::fromUtf8("displayPicture_4"));
        displayPicture_4->setGeometry(QRect(25, 25, 161, 161));
        displayPicture_4->setStyleSheet(QString::fromUtf8("background: rgba(248, 251, 255, 0.99);\n"
"border-radius: 80px;"));
        label_12 = new QLabel(userHomeHelloBar_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(18, 259, 191, 31));
        label_12->setFont(font3);
        label_12->setStyleSheet(QString::fromUtf8("color: #2B528C;\n"
"font-weight: 500;\n"
"font-size: 23px;\n"
"background: rgba(104, 160, 229, 0.00);"));
        label_19 = new QLabel(userHomeHelloBar_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(18, 229, 101, 31));
        label_19->setFont(font6);
        label_19->setStyleSheet(QString::fromUtf8("color: #2B528C;\n"
"font-weight: 400;\n"
"font-size: 18px;\n"
"background: rgba(104, 160, 229, 0.00);"));
        pbLogout_3 = new QPushButton(userHomeHelloBar_2);
        pbLogout_3->setObjectName(QString::fromUtf8("pbLogout_3"));
        pbLogout_3->setGeometry(QRect(10, 310, 191, 31));
        pbLogout_3->setFont(font3);
        pbLogout_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #2B528C;\n"
"font-weight: 500;\n"
"border-radius: 15px;\n"
"background:  rgba(248, 251, 255, 0.99);\n"
"font-size: 16px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:  rgba(248, 251, 255, 0.55);\n"
"border-color: rgba(104, 160, 229, 0.88);\n"
"font-size: 16px;\n"
"color: #2B528C;\n"
"}"));
        userProfileBlueMenuBar = new QFrame(userProfile);
        userProfileBlueMenuBar->setObjectName(QString::fromUtf8("userProfileBlueMenuBar"));
        userProfileBlueMenuBar->setGeometry(QRect(0, -100, 211, 741));
        userProfileBlueMenuBar->setStyleSheet(QString::fromUtf8(" background: #2B528C;\n"
"border-radius: 105px;"));
        userProfileBlueMenuBar->setFrameShape(QFrame::StyledPanel);
        userProfileBlueMenuBar->setFrameShadow(QFrame::Raised);
        pbHome_4 = new QPushButton(userProfileBlueMenuBar);
        pbHome_4->setObjectName(QString::fromUtf8("pbHome_4"));
        pbHome_4->setGeometry(QRect(-81, 133, 271, 51));
        pbHome_4->setFont(font3);
        pbHome_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background: #2B528C;\n"
"font-weight: 500;\n"
"border-radius: 25px;\n"
"color:  rgba(248, 251, 255, 0.99);\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"font-size: 16px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"font-size: 18px;\n"
"}"));
        pbProfile_4 = new QPushButton(userProfileBlueMenuBar);
        pbProfile_4->setObjectName(QString::fromUtf8("pbProfile_4"));
        pbProfile_4->setGeometry(QRect(-50, 220, 241, 51));
        pbProfile_4->setFont(font3);
        pbProfile_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #2B528C;\n"
"font-weight: 500;\n"
"border-radius: 25px;\n"
"background:  white;\n"
"font-size: 16px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"font-size: 17px;\n"
"\n"
"}"));
        pbContact_4 = new QPushButton(userProfileBlueMenuBar);
        pbContact_4->setObjectName(QString::fromUtf8("pbContact_4"));
        pbContact_4->setGeometry(QRect(-40, 310, 231, 51));
        pbContact_4->setFont(font3);
        pbContact_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background: #2B528C;\n"
"font-weight: 500;\n"
"border-radius: 25px;\n"
"color:  rgba(248, 251, 255, 0.99);\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"font-size: 16px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"font-size: 18px;\n"
"}"));
        userHomeDisplayFrame_2 = new QFrame(userProfile);
        userHomeDisplayFrame_2->setObjectName(QString::fromUtf8("userHomeDisplayFrame_2"));
        userHomeDisplayFrame_2->setGeometry(QRect(220, 0, 881, 791));
        userHomeDisplayFrame_2->setStyleSheet(QString::fromUtf8("background: white;"));
        userHomeDisplayFrame_2->setFrameShape(QFrame::NoFrame);
        userHomeDisplayFrame_2->setFrameShadow(QFrame::Raised);
        homeSubHeading_2 = new QLabel(userHomeDisplayFrame_2);
        homeSubHeading_2->setObjectName(QString::fromUtf8("homeSubHeading_2"));
        homeSubHeading_2->setGeometry(QRect(21, 55, 481, 51));
        homeSubHeading_2->setFont(font7);
        homeSubHeading_2->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 18px;\n"
"color: #2B528C;\n"
"background: rgba(104, 160, 229, 0.00);\n"
""));
        homeTitle_2 = new QLabel(userHomeDisplayFrame_2);
        homeTitle_2->setObjectName(QString::fromUtf8("homeTitle_2"));
        homeTitle_2->setGeometry(QRect(20, 15, 511, 50));
        homeTitle_2->setFont(font3);
        homeTitle_2->setStyleSheet(QString::fromUtf8("font-weight: 500;\n"
"font-size: 40px;\n"
"color:#2B528C;\n"
"background: rgba(104, 160, 229, 0.00);\n"
""));
        userInfoFrame = new QFrame(userHomeDisplayFrame_2);
        userInfoFrame->setObjectName(QString::fromUtf8("userInfoFrame"));
        userInfoFrame->setGeometry(QRect(19, 119, 351, 341));
        userInfoFrame->setStyleSheet(QString::fromUtf8("background: #C4DBF4;\n"
"border-radius: 40px;"));
        userInfoFrame->setFrameShape(QFrame::StyledPanel);
        userInfoFrame->setFrameShadow(QFrame::Raised);
        showUserName = new QLabel(userInfoFrame);
        showUserName->setObjectName(QString::fromUtf8("showUserName"));
        showUserName->setGeometry(QRect(20, 10, 301, 30));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font10.setBold(false);
        font10.setWeight(37);
        showUserName->setFont(font10);
        showUserName->setStyleSheet(QString::fromUtf8("font-weight: 300;\n"
"font-size: 23px;\n"
"color:#2B528C;\n"
"\n"
""));
        showUserName->setAlignment(Qt::AlignCenter);
        userDOBHeading = new QLabel(userInfoFrame);
        userDOBHeading->setObjectName(QString::fromUtf8("userDOBHeading"));
        userDOBHeading->setGeometry(QRect(20, 50, 331, 20));
        userDOBHeading->setFont(font7);
        userDOBHeading->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"\n"
""));
        showUserDOB = new QLabel(userInfoFrame);
        showUserDOB->setObjectName(QString::fromUtf8("showUserDOB"));
        showUserDOB->setGeometry(QRect(15, 70, 321, 31));
        showUserDOB->setStyleSheet(QString::fromUtf8("QLabel \n"
"{background: #F8FBFF;\n"
"border-radius: 15;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"color: #F8FBFF;\n"
"font-size: 16px; \n"
"padding-left: 3px;}"));
        showUserNumber = new QLabel(userInfoFrame);
        showUserNumber->setObjectName(QString::fromUtf8("showUserNumber"));
        showUserNumber->setGeometry(QRect(10, 140, 321, 31));
        showUserNumber->setStyleSheet(QString::fromUtf8("QLabel \n"
"{background: #F8FBFF;\n"
"border-radius: 15;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"color: #F8FBFF;\n"
"font-size: 16px; \n"
"padding-left: 3px;}"));
        userNumberHeading = new QLabel(userInfoFrame);
        userNumberHeading->setObjectName(QString::fromUtf8("userNumberHeading"));
        userNumberHeading->setGeometry(QRect(15, 120, 331, 20));
        userNumberHeading->setFont(font7);
        userNumberHeading->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"\n"
""));
        showUserEmail = new QLabel(userInfoFrame);
        showUserEmail->setObjectName(QString::fromUtf8("showUserEmail"));
        showUserEmail->setGeometry(QRect(10, 210, 321, 31));
        showUserEmail->setStyleSheet(QString::fromUtf8("QLabel \n"
"{background: #F8FBFF;\n"
"border-radius: 15;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"color: #F8FBFF;\n"
"font-size: 16px; \n"
"padding-left: 3px;}"));
        userEmailHeading = new QLabel(userInfoFrame);
        userEmailHeading->setObjectName(QString::fromUtf8("userEmailHeading"));
        userEmailHeading->setGeometry(QRect(15, 190, 331, 20));
        userEmailHeading->setFont(font7);
        userEmailHeading->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"\n"
""));
        showUserEmergencyContact = new QLabel(userInfoFrame);
        showUserEmergencyContact->setObjectName(QString::fromUtf8("showUserEmergencyContact"));
        showUserEmergencyContact->setGeometry(QRect(10, 280, 321, 31));
        showUserEmergencyContact->setStyleSheet(QString::fromUtf8("QLabel \n"
"{background: #F8FBFF;\n"
"border-radius: 15;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"color: #F8FBFF;\n"
"font-size: 16px; \n"
"padding-left: 3px;}"));
        userEmercencyContactHeading = new QLabel(userInfoFrame);
        userEmercencyContactHeading->setObjectName(QString::fromUtf8("userEmercencyContactHeading"));
        userEmercencyContactHeading->setGeometry(QRect(15, 260, 331, 20));
        userEmercencyContactHeading->setFont(font7);
        userEmercencyContactHeading->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"\n"
""));
        vaccineDose1Frame = new QFrame(userHomeDisplayFrame_2);
        vaccineDose1Frame->setObjectName(QString::fromUtf8("vaccineDose1Frame"));
        vaccineDose1Frame->setGeometry(QRect(400, 160, 451, 141));
        vaccineDose1Frame->setStyleSheet(QString::fromUtf8("background: #F2F8FC;\n"
"border-radius: 50px;"));
        vaccineDose1Frame->setFrameShape(QFrame::StyledPanel);
        vaccineDose1Frame->setFrameShadow(QFrame::Raised);
        vaccineIcon1Frame = new QLabel(vaccineDose1Frame);
        vaccineIcon1Frame->setObjectName(QString::fromUtf8("vaccineIcon1Frame"));
        vaccineIcon1Frame->setGeometry(QRect(10, 10, 121, 121));
        vaccineIcon1Frame->setStyleSheet(QString::fromUtf8("background: #C4DBF4;\n"
"border-radius: 50px;"));
        vaccineIcon1Frame->setAlignment(Qt::AlignCenter);
        vaccine1TypeLabel = new QLabel(vaccineDose1Frame);
        vaccine1TypeLabel->setObjectName(QString::fromUtf8("vaccine1TypeLabel"));
        vaccine1TypeLabel->setGeometry(QRect(160, 40, 281, 21));
        vaccine1TypeLabel->setFont(font10);
        vaccine1TypeLabel->setStyleSheet(QString::fromUtf8("font-weight: 300;\n"
"font-size: 18px;\n"
"color:#2B528C;\n"
"\n"
""));
        vaccine1TypeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        dose1Text = new QLabel(vaccineDose1Frame);
        dose1Text->setObjectName(QString::fromUtf8("dose1Text"));
        dose1Text->setGeometry(QRect(160, 80, 61, 20));
        dose1Text->setFont(font7);
        dose1Text->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"\n"
""));
        vaccine1DateRecieved = new QLabel(vaccineDose1Frame);
        vaccine1DateRecieved->setObjectName(QString::fromUtf8("vaccine1DateRecieved"));
        vaccine1DateRecieved->setGeometry(QRect(250, 80, 161, 20));
        vaccine1DateRecieved->setFont(font7);
        vaccine1DateRecieved->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"\n"
""));
        vaccine1DateRecieved->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        imgVaccineIcon2_2 = new QLabel(vaccineDose1Frame);
        imgVaccineIcon2_2->setObjectName(QString::fromUtf8("imgVaccineIcon2_2"));
        imgVaccineIcon2_2->setGeometry(QRect(50, 45, 41, 51));
        imgVaccineIcon2_2->setStyleSheet(QString::fromUtf8("background: #C4DBF4;\n"
"border-radius: 50px;"));
        imgVaccineIcon2_2->setPixmap(QPixmap(QString::fromUtf8(":/res/images/iconVaccine.png")));
        imgVaccineIcon2_2->setScaledContents(true);
        imgVaccineIcon2_2->setAlignment(Qt::AlignCenter);
        myVaccinesHeading = new QLabel(userHomeDisplayFrame_2);
        myVaccinesHeading->setObjectName(QString::fromUtf8("myVaccinesHeading"));
        myVaccinesHeading->setGeometry(QRect(400, 120, 410, 30));
        myVaccinesHeading->setFont(font10);
        myVaccinesHeading->setStyleSheet(QString::fromUtf8("font-weight: 300;\n"
"font-size: 23px;\n"
"color:#2B528C;\n"
"\n"
""));
        myDocsHeading = new QLabel(userHomeDisplayFrame_2);
        myDocsHeading->setObjectName(QString::fromUtf8("myDocsHeading"));
        myDocsHeading->setGeometry(QRect(400, 483, 431, 30));
        myDocsHeading->setFont(font10);
        myDocsHeading->setStyleSheet(QString::fromUtf8("font-weight: 300;\n"
"font-size: 23px;\n"
"color:#2B528C;\n"
"\n"
""));
        vaccineDose2Frame = new QFrame(userHomeDisplayFrame_2);
        vaccineDose2Frame->setObjectName(QString::fromUtf8("vaccineDose2Frame"));
        vaccineDose2Frame->setGeometry(QRect(400, 320, 451, 141));
        vaccineDose2Frame->setStyleSheet(QString::fromUtf8("background: #F2F8FC;\n"
"border-radius: 50px;"));
        vaccineDose2Frame->setFrameShape(QFrame::StyledPanel);
        vaccineDose2Frame->setFrameShadow(QFrame::Raised);
        vaccineIcon2Frame = new QLabel(vaccineDose2Frame);
        vaccineIcon2Frame->setObjectName(QString::fromUtf8("vaccineIcon2Frame"));
        vaccineIcon2Frame->setGeometry(QRect(10, 10, 121, 121));
        vaccineIcon2Frame->setStyleSheet(QString::fromUtf8("background: #C4DBF4;\n"
"border-radius: 50px;"));
        vaccineIcon2Frame->setScaledContents(false);
        vaccineIcon2Frame->setAlignment(Qt::AlignCenter);
        dose2Text = new QLabel(vaccineDose2Frame);
        dose2Text->setObjectName(QString::fromUtf8("dose2Text"));
        dose2Text->setGeometry(QRect(160, 80, 71, 20));
        dose2Text->setFont(font7);
        dose2Text->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"\n"
""));
        vaccine2TypeLabel = new QLabel(vaccineDose2Frame);
        vaccine2TypeLabel->setObjectName(QString::fromUtf8("vaccine2TypeLabel"));
        vaccine2TypeLabel->setGeometry(QRect(160, 40, 271, 21));
        vaccine2TypeLabel->setFont(font10);
        vaccine2TypeLabel->setStyleSheet(QString::fromUtf8("font-weight: 300;\n"
"font-size: 18px;\n"
"color:#2B528C;\n"
"\n"
""));
        vaccine2TypeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        vaccine2DateRecieved = new QLabel(vaccineDose2Frame);
        vaccine2DateRecieved->setObjectName(QString::fromUtf8("vaccine2DateRecieved"));
        vaccine2DateRecieved->setGeometry(QRect(240, 80, 171, 20));
        vaccine2DateRecieved->setFont(font7);
        vaccine2DateRecieved->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"\n"
""));
        vaccine2DateRecieved->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        imgVaccineIcon2_3 = new QLabel(vaccineDose2Frame);
        imgVaccineIcon2_3->setObjectName(QString::fromUtf8("imgVaccineIcon2_3"));
        imgVaccineIcon2_3->setGeometry(QRect(51, 43, 41, 51));
        imgVaccineIcon2_3->setStyleSheet(QString::fromUtf8("background: #C4DBF4;\n"
"border-radius: 5px;"));
        imgVaccineIcon2_3->setPixmap(QPixmap(QString::fromUtf8(":/res/images/iconVaccine.png")));
        imgVaccineIcon2_3->setScaledContents(true);
        imgVaccineIcon2_3->setAlignment(Qt::AlignCenter);
        userMedicalFrame = new QFrame(userHomeDisplayFrame_2);
        userMedicalFrame->setObjectName(QString::fromUtf8("userMedicalFrame"));
        userMedicalFrame->setGeometry(QRect(20, 473, 351, 291));
        userMedicalFrame->setFont(font8);
        userMedicalFrame->setStyleSheet(QString::fromUtf8("background: rgba(254, 206, 103, 0.55);\n"
"border-radius: 40px;"));
        userMedicalFrame->setFrameShape(QFrame::StyledPanel);
        userMedicalFrame->setFrameShadow(QFrame::Raised);
        userNHIHeading = new QLabel(userMedicalFrame);
        userNHIHeading->setObjectName(QString::fromUtf8("userNHIHeading"));
        userNHIHeading->setGeometry(QRect(15, 62, 331, 20));
        userNHIHeading->setFont(font7);
        userNHIHeading->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"background: rgba(254, 206, 103, 0.00);\n"
"\n"
""));
        userVaccStatusHeading = new QLabel(userMedicalFrame);
        userVaccStatusHeading->setObjectName(QString::fromUtf8("userVaccStatusHeading"));
        userVaccStatusHeading->setGeometry(QRect(10, 202, 331, 20));
        userVaccStatusHeading->setFont(font7);
        userVaccStatusHeading->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"background: rgba(254, 206, 103, 0.00);"));
        showUserCVN = new QLabel(userMedicalFrame);
        showUserCVN->setObjectName(QString::fromUtf8("showUserCVN"));
        showUserCVN->setGeometry(QRect(10, 152, 321, 31));
        showUserCVN->setStyleSheet(QString::fromUtf8("QLabel \n"
"{background: #F8FBFF;\n"
"border-radius: 15;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"color: #F8FBFF;\n"
"font-size: 16px; \n"
"padding-left: 3px;}"));
        showUserVaccStatus = new QLabel(userMedicalFrame);
        showUserVaccStatus->setObjectName(QString::fromUtf8("showUserVaccStatus"));
        showUserVaccStatus->setGeometry(QRect(10, 222, 321, 31));
        showUserVaccStatus->setStyleSheet(QString::fromUtf8("QLabel \n"
"{background: #F8FBFF;\n"
"border-radius: 15;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"color: #F8FBFF;\n"
"font-size: 16px; \n"
"padding-left: 3px;}"));
        userCVNHeading = new QLabel(userMedicalFrame);
        userCVNHeading->setObjectName(QString::fromUtf8("userCVNHeading"));
        userCVNHeading->setGeometry(QRect(15, 132, 331, 20));
        userCVNHeading->setFont(font7);
        userCVNHeading->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"background: rgba(254, 206, 103, 0.00);"));
        showUserNHI = new QLabel(userMedicalFrame);
        showUserNHI->setObjectName(QString::fromUtf8("showUserNHI"));
        showUserNHI->setGeometry(QRect(10, 82, 321, 31));
        showUserNHI->setStyleSheet(QString::fromUtf8("QLabel \n"
"{background: #F8FBFF;\n"
"border-radius: 15;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"color: #F8FBFF;\n"
"font-size: 16px; \n"
"padding-left: 3px;}"));
        medicalInfoHeading = new QLabel(userMedicalFrame);
        medicalInfoHeading->setObjectName(QString::fromUtf8("medicalInfoHeading"));
        medicalInfoHeading->setGeometry(QRect(20, 10, 311, 30));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font11.setBold(false);
        font11.setWeight(25);
        medicalInfoHeading->setFont(font11);
        medicalInfoHeading->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 23px;\n"
"color:#2B528C;\n"
"background: rgba(254, 206, 103, 0.00);"));
        medicalInfoHeading->setAlignment(Qt::AlignCenter);
        testResultFrame = new QFrame(userHomeDisplayFrame_2);
        testResultFrame->setObjectName(QString::fromUtf8("testResultFrame"));
        testResultFrame->setGeometry(QRect(400, 540, 131, 201));
        testResultFrame->setFont(font8);
        testResultFrame->setStyleSheet(QString::fromUtf8("background: #F2F8FC;\n"
"border-radius: 50px;"));
        testResultFrame->setFrameShape(QFrame::StyledPanel);
        testResultFrame->setFrameShadow(QFrame::Raised);
        imgTestResults = new QLabel(testResultFrame);
        imgTestResults->setObjectName(QString::fromUtf8("imgTestResults"));
        imgTestResults->setGeometry(QRect(9, 10, 111, 181));
        imgTestResults->setStyleSheet(QString::fromUtf8("background: #C4DBF4;\n"
"border-radius: 50px;"));
        qrCodeFrame = new QFrame(userHomeDisplayFrame_2);
        qrCodeFrame->setObjectName(QString::fromUtf8("qrCodeFrame"));
        qrCodeFrame->setGeometry(QRect(720, 540, 131, 201));
        qrCodeFrame->setFont(font8);
        qrCodeFrame->setStyleSheet(QString::fromUtf8("background: #F2F8FC;\n"
"border-radius: 50px;"));
        qrCodeFrame->setFrameShape(QFrame::StyledPanel);
        qrCodeFrame->setFrameShadow(QFrame::Raised);
        imgQRCode = new QLabel(qrCodeFrame);
        imgQRCode->setObjectName(QString::fromUtf8("imgQRCode"));
        imgQRCode->setGeometry(QRect(10, 10, 111, 181));
        imgQRCode->setStyleSheet(QString::fromUtf8("background: #C4DBF4;\n"
"border-radius: 50px;"));
        certificateFrame = new QFrame(userHomeDisplayFrame_2);
        certificateFrame->setObjectName(QString::fromUtf8("certificateFrame"));
        certificateFrame->setGeometry(QRect(560, 540, 131, 201));
        certificateFrame->setFont(font8);
        certificateFrame->setStyleSheet(QString::fromUtf8("background: #F2F8FC;\n"
"border-radius: 50px;"));
        certificateFrame->setFrameShape(QFrame::StyledPanel);
        certificateFrame->setFrameShadow(QFrame::Raised);
        imgCertificate = new QLabel(certificateFrame);
        imgCertificate->setObjectName(QString::fromUtf8("imgCertificate"));
        imgCertificate->setGeometry(QRect(10, 10, 111, 181));
        imgCertificate->setStyleSheet(QString::fromUtf8("background: #C4DBF4;\n"
"border-radius: 50px;"));
        myDocsSub = new QLabel(userHomeDisplayFrame_2);
        myDocsSub->setObjectName(QString::fromUtf8("myDocsSub"));
        myDocsSub->setGeometry(QRect(400, 514, 431, 20));
        myDocsSub->setFont(font7);
        myDocsSub->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"\n"
""));
        testResultText = new QLabel(userHomeDisplayFrame_2);
        testResultText->setObjectName(QString::fromUtf8("testResultText"));
        testResultText->setGeometry(QRect(400, 750, 131, 20));
        testResultText->setFont(font7);
        testResultText->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"\n"
""));
        testResultText->setAlignment(Qt::AlignCenter);
        certificateText = new QLabel(userHomeDisplayFrame_2);
        certificateText->setObjectName(QString::fromUtf8("certificateText"));
        certificateText->setGeometry(QRect(560, 750, 131, 20));
        certificateText->setFont(font7);
        certificateText->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"\n"
""));
        certificateText->setAlignment(Qt::AlignCenter);
        qrCodeText = new QLabel(userHomeDisplayFrame_2);
        qrCodeText->setObjectName(QString::fromUtf8("qrCodeText"));
        qrCodeText->setGeometry(QRect(720, 750, 131, 20));
        qrCodeText->setFont(font7);
        qrCodeText->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"\n"
""));
        qrCodeText->setAlignment(Qt::AlignCenter);
        homeSubHeading_2->raise();
        homeTitle_2->raise();
        userInfoFrame->raise();
        vaccineDose1Frame->raise();
        myDocsHeading->raise();
        vaccineDose2Frame->raise();
        userMedicalFrame->raise();
        testResultFrame->raise();
        qrCodeFrame->raise();
        certificateFrame->raise();
        myDocsSub->raise();
        testResultText->raise();
        certificateText->raise();
        qrCodeText->raise();
        myVaccinesHeading->raise();
        stackedWidget->addWidget(userProfile);
        userHomeWhiteBackground_2->raise();
        userProfileBlueMenuBar->raise();
        userHomeHelloBar_2->raise();
        userHomeDisplayFrame_2->raise();
        userContact = new QWidget();
        userContact->setObjectName(QString::fromUtf8("userContact"));
        userProfileBlueMenuBar_2 = new QFrame(userContact);
        userProfileBlueMenuBar_2->setObjectName(QString::fromUtf8("userProfileBlueMenuBar_2"));
        userProfileBlueMenuBar_2->setGeometry(QRect(0, -100, 211, 741));
        userProfileBlueMenuBar_2->setStyleSheet(QString::fromUtf8(" background: #2B528C;\n"
"border-radius: 105px;"));
        userProfileBlueMenuBar_2->setFrameShape(QFrame::StyledPanel);
        userProfileBlueMenuBar_2->setFrameShadow(QFrame::Raised);
        pbHome_5 = new QPushButton(userProfileBlueMenuBar_2);
        pbHome_5->setObjectName(QString::fromUtf8("pbHome_5"));
        pbHome_5->setGeometry(QRect(-81, 133, 271, 51));
        pbHome_5->setFont(font3);
        pbHome_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background: #2B528C;\n"
"font-weight: 500;\n"
"border-radius: 25px;\n"
"color:  rgba(248, 251, 255, 0.99);\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"font-size: 16px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"font-size: 18px;\n"
"}"));
        pbProfile_5 = new QPushButton(userProfileBlueMenuBar_2);
        pbProfile_5->setObjectName(QString::fromUtf8("pbProfile_5"));
        pbProfile_5->setGeometry(QRect(-50, 220, 241, 51));
        pbProfile_5->setFont(font3);
        pbProfile_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background: #2B528C;\n"
"font-weight: 500;\n"
"border-radius: 25px;\n"
"color:  rgba(248, 251, 255, 0.99);\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"font-size: 16px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"font-size: 18px;\n"
"}"));
        pbContact_5 = new QPushButton(userProfileBlueMenuBar_2);
        pbContact_5->setObjectName(QString::fromUtf8("pbContact_5"));
        pbContact_5->setGeometry(QRect(-40, 310, 231, 51));
        pbContact_5->setFont(font3);
        pbContact_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #2B528C;\n"
"font-weight: 500;\n"
"border-radius: 25px;\n"
"background:  white;\n"
"font-size: 16px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"font-size: 17px;\n"
"\n"
"}"));
        userHomeWhiteBackground_3 = new QLabel(userContact);
        userHomeWhiteBackground_3->setObjectName(QString::fromUtf8("userHomeWhiteBackground_3"));
        userHomeWhiteBackground_3->setGeometry(QRect(0, 0, 1101, 791));
        userHomeWhiteBackground_3->setStyleSheet(QString::fromUtf8("background: #F2F8FC;"));
        userHomeDisplayFrame_3 = new QFrame(userContact);
        userHomeDisplayFrame_3->setObjectName(QString::fromUtf8("userHomeDisplayFrame_3"));
        userHomeDisplayFrame_3->setGeometry(QRect(220, 0, 881, 791));
        userHomeDisplayFrame_3->setStyleSheet(QString::fromUtf8("background: white;"));
        userHomeDisplayFrame_3->setFrameShape(QFrame::NoFrame);
        userHomeDisplayFrame_3->setFrameShadow(QFrame::Raised);
        homeSubHeading_3 = new QLabel(userHomeDisplayFrame_3);
        homeSubHeading_3->setObjectName(QString::fromUtf8("homeSubHeading_3"));
        homeSubHeading_3->setGeometry(QRect(21, 55, 481, 51));
        homeSubHeading_3->setFont(font7);
        homeSubHeading_3->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 18px;\n"
"color: #2B528C;\n"
"background: rgba(104, 160, 229, 0.00);\n"
""));
        homeTitle_3 = new QLabel(userHomeDisplayFrame_3);
        homeTitle_3->setObjectName(QString::fromUtf8("homeTitle_3"));
        homeTitle_3->setGeometry(QRect(20, 15, 511, 50));
        homeTitle_3->setFont(font3);
        homeTitle_3->setStyleSheet(QString::fromUtf8("font-weight: 500;\n"
"font-size: 40px;\n"
"color:#2B528C;\n"
"background: rgba(104, 160, 229, 0.00);\n"
""));
        userInfoFrame_2 = new QFrame(userHomeDisplayFrame_3);
        userInfoFrame_2->setObjectName(QString::fromUtf8("userInfoFrame_2"));
        userInfoFrame_2->setGeometry(QRect(500, 119, 351, 211));
        userInfoFrame_2->setStyleSheet(QString::fromUtf8("background: #C4DBF4;\n"
"border-radius: 40px;"));
        userInfoFrame_2->setFrameShape(QFrame::StyledPanel);
        userInfoFrame_2->setFrameShadow(QFrame::Raised);
        showUserName_2 = new QLabel(userInfoFrame_2);
        showUserName_2->setObjectName(QString::fromUtf8("showUserName_2"));
        showUserName_2->setGeometry(QRect(20, 10, 301, 30));
        showUserName_2->setFont(font11);
        showUserName_2->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 23px;\n"
"color:#2B528C;\n"
"background: rgba(254, 206, 103, 0.00);"));
        showUserName_2->setAlignment(Qt::AlignCenter);
        userDOBHeading_2 = new QLabel(userInfoFrame_2);
        userDOBHeading_2->setObjectName(QString::fromUtf8("userDOBHeading_2"));
        userDOBHeading_2->setGeometry(QRect(20, 60, 331, 20));
        userDOBHeading_2->setFont(font7);
        userDOBHeading_2->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"background: rgba(254, 206, 103, 0.00);\n"
"\n"
""));
        userNumberHeading_2 = new QLabel(userInfoFrame_2);
        userNumberHeading_2->setObjectName(QString::fromUtf8("userNumberHeading_2"));
        userNumberHeading_2->setGeometry(QRect(15, 130, 331, 20));
        userNumberHeading_2->setFont(font7);
        userNumberHeading_2->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"background: rgba(254, 206, 103, 0.00);\n"
"\n"
""));
        editPreferredContact = new QLineEdit(userInfoFrame_2);
        editPreferredContact->setObjectName(QString::fromUtf8("editPreferredContact"));
        editPreferredContact->setGeometry(QRect(20, 150, 311, 31));
        editPreferredContact->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{background: #F8FBFF;\n"
"border-radius: 15;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"color: #F8FBFF;\n"
"font-size: 16px; \n"
"padding-left: 3px;}"));
        editPreferredName = new QLineEdit(userInfoFrame_2);
        editPreferredName->setObjectName(QString::fromUtf8("editPreferredName"));
        editPreferredName->setGeometry(QRect(20, 80, 311, 31));
        editPreferredName->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{background: #F8FBFF;\n"
"border-radius: 15;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"color: #F8FBFF;\n"
"font-size: 16px; \n"
"padding-left: 3px;}"));
        userMedicalFrame_3 = new QFrame(userHomeDisplayFrame_3);
        userMedicalFrame_3->setObjectName(QString::fromUtf8("userMedicalFrame_3"));
        userMedicalFrame_3->setGeometry(QRect(20, 120, 461, 651));
        userMedicalFrame_3->setFont(font8);
        userMedicalFrame_3->setStyleSheet(QString::fromUtf8("background: #C4DBF4;\n"
"border-radius: 40px;"));
        userMedicalFrame_3->setFrameShape(QFrame::StyledPanel);
        userMedicalFrame_3->setFrameShadow(QFrame::Raised);
        medicalInfoHeading_4 = new QLabel(userMedicalFrame_3);
        medicalInfoHeading_4->setObjectName(QString::fromUtf8("medicalInfoHeading_4"));
        medicalInfoHeading_4->setGeometry(QRect(20, 14, 431, 30));
        medicalInfoHeading_4->setFont(font11);
        medicalInfoHeading_4->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 23px;\n"
"color:#2B528C;\n"
"background: rgba(254, 206, 103, 0.00);"));
        medicalInfoHeading_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        userDOBHeading_3 = new QLabel(userMedicalFrame_3);
        userDOBHeading_3->setObjectName(QString::fromUtf8("userDOBHeading_3"));
        userDOBHeading_3->setGeometry(QRect(20, 60, 331, 20));
        userDOBHeading_3->setFont(font7);
        userDOBHeading_3->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"background: rgba(254, 206, 103, 0.00);\n"
"\n"
""));
        userNumberHeading_3 = new QLabel(userMedicalFrame_3);
        userNumberHeading_3->setObjectName(QString::fromUtf8("userNumberHeading_3"));
        userNumberHeading_3->setGeometry(QRect(20, 130, 331, 20));
        userNumberHeading_3->setFont(font7);
        userNumberHeading_3->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"background: rgba(254, 206, 103, 0.00);\n"
"\n"
""));
        userNumberHeading_4 = new QLabel(userMedicalFrame_3);
        userNumberHeading_4->setObjectName(QString::fromUtf8("userNumberHeading_4"));
        userNumberHeading_4->setGeometry(QRect(20, 198, 331, 20));
        userNumberHeading_4->setFont(font7);
        userNumberHeading_4->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 16px;\n"
"color:#2B528C;\n"
"background: rgba(254, 206, 103, 0.00);\n"
"\n"
""));
        editReportDetails = new QPlainTextEdit(userMedicalFrame_3);
        editReportDetails->setObjectName(QString::fromUtf8("editReportDetails"));
        editReportDetails->setGeometry(QRect(20, 220, 421, 411));
        editReportDetails->setStyleSheet(QString::fromUtf8("background: #F8FBFF;\n"
"border-radius: 20;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"color: #F8FBFF;\n"
"font-size: 16px; \n"
"padding-left: 5px;"));
        editReportSubject = new QLineEdit(userMedicalFrame_3);
        editReportSubject->setObjectName(QString::fromUtf8("editReportSubject"));
        editReportSubject->setGeometry(QRect(20, 150, 421, 31));
        editReportSubject->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{background: #F8FBFF;\n"
"border-radius: 15;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"color: #F8FBFF;\n"
"font-size: 16px; \n"
"padding-left: 3px;}"));
        cbReportCategory = new QComboBox(userMedicalFrame_3);
        cbReportCategory->setObjectName(QString::fromUtf8("cbReportCategory"));
        cbReportCategory->setGeometry(QRect(21, 90, 421, 31));
        cbReportCategory->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{background: #F8FBFF;\n"
"border-radius: 15;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"color: #F8FBFF;\n"
"font-size: 16px; \n"
"padding-left: 3px;}"));
        editReportSubject->raise();
        editReportDetails->raise();
        medicalInfoHeading_4->raise();
        userDOBHeading_3->raise();
        userNumberHeading_3->raise();
        userNumberHeading_4->raise();
        cbReportCategory->raise();
        myVaccinesHeading_2 = new QLabel(userHomeDisplayFrame_3);
        myVaccinesHeading_2->setObjectName(QString::fromUtf8("myVaccinesHeading_2"));
        myVaccinesHeading_2->setGeometry(QRect(500, 360, 410, 30));
        myVaccinesHeading_2->setFont(font10);
        myVaccinesHeading_2->setStyleSheet(QString::fromUtf8("font-weight: 300;\n"
"font-size: 23px;\n"
"color:#2B528C;\n"
"\n"
""));
        pbMCRLink_2 = new QPushButton(userHomeDisplayFrame_3);
        pbMCRLink_2->setObjectName(QString::fromUtf8("pbMCRLink_2"));
        pbMCRLink_2->setGeometry(QRect(500, 440, 351, 91));
        pbMCRLink_2->setFont(font1);
        pbMCRLink_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #2B528C;\n"
"font-weight: 500;\n"
"background: #F2F8FC;\n"
"border-radius: 35px;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"font-size: 14px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:  rgba(248, 251, 255, 0.55);\n"
"border-color: rgba(104, 160, 229, 0.88);\n"
"font-size: 14px;\n"
"color: #2B528C;\n"
"}"));
        homeSubHeading_4 = new QLabel(userHomeDisplayFrame_3);
        homeSubHeading_4->setObjectName(QString::fromUtf8("homeSubHeading_4"));
        homeSubHeading_4->setGeometry(QRect(500, 390, 300, 30));
        homeSubHeading_4->setFont(font7);
        homeSubHeading_4->setStyleSheet(QString::fromUtf8("font-weight: 200;\n"
"font-size: 18px;\n"
"color: #2B528C;\n"
"background: rgba(104, 160, 229, 0.00);\n"
""));
        pbMCRLink_3 = new QPushButton(userHomeDisplayFrame_3);
        pbMCRLink_3->setObjectName(QString::fromUtf8("pbMCRLink_3"));
        pbMCRLink_3->setGeometry(QRect(500, 560, 351, 91));
        pbMCRLink_3->setFont(font1);
        pbMCRLink_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #2B528C;\n"
"font-weight: 500;\n"
"background: #F2F8FC;\n"
"border-radius: 35px;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"font-size: 14px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:  rgba(248, 251, 255, 0.55);\n"
"border-color: rgba(104, 160, 229, 0.88);\n"
"font-size: 14px;\n"
"color: #2B528C;\n"
"}"));
        pbMCRLink_4 = new QPushButton(userHomeDisplayFrame_3);
        pbMCRLink_4->setObjectName(QString::fromUtf8("pbMCRLink_4"));
        pbMCRLink_4->setGeometry(QRect(500, 680, 351, 91));
        pbMCRLink_4->setFont(font1);
        pbMCRLink_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #2B528C;\n"
"font-weight: 500;\n"
"background: #F2F8FC;\n"
"border-radius: 35px;\n"
"border-color: rgba(104, 160, 229, 0.33);\n"
"font-size: 14px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:  rgba(248, 251, 255, 0.55);\n"
"border-color: rgba(104, 160, 229, 0.88);\n"
"font-size: 14px;\n"
"color: #2B528C;\n"
"}"));
        userHomeHelloBar_3 = new QFrame(userContact);
        userHomeHelloBar_3->setObjectName(QString::fromUtf8("userHomeHelloBar_3"));
        userHomeHelloBar_3->setGeometry(QRect(0, 430, 211, 511));
        userHomeHelloBar_3->setStyleSheet(QString::fromUtf8("background: rgba(104, 160, 229, 0.33);\n"
"border-radius: 105px;"));
        userHomeHelloBar_3->setFrameShape(QFrame::StyledPanel);
        userHomeHelloBar_3->setFrameShadow(QFrame::Raised);
        displayPicture_5 = new QLabel(userHomeHelloBar_3);
        displayPicture_5->setObjectName(QString::fromUtf8("displayPicture_5"));
        displayPicture_5->setGeometry(QRect(25, 25, 161, 161));
        displayPicture_5->setStyleSheet(QString::fromUtf8("background: rgba(248, 251, 255, 0.99);\n"
"border-radius: 80px;"));
        label_13 = new QLabel(userHomeHelloBar_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(18, 259, 191, 31));
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("color: #2B528C;\n"
"font-weight: 500;\n"
"font-size: 23px;\n"
"background: rgba(104, 160, 229, 0.00);"));
        label_20 = new QLabel(userHomeHelloBar_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(18, 229, 101, 31));
        label_20->setFont(font6);
        label_20->setStyleSheet(QString::fromUtf8("color: #2B528C;\n"
"font-weight: 400;\n"
"font-size: 18px;\n"
"background: rgba(104, 160, 229, 0.00);"));
        pbLogout_4 = new QPushButton(userHomeHelloBar_3);
        pbLogout_4->setObjectName(QString::fromUtf8("pbLogout_4"));
        pbLogout_4->setGeometry(QRect(10, 310, 191, 31));
        pbLogout_4->setFont(font3);
        pbLogout_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #2B528C;\n"
"font-weight: 500;\n"
"border-radius: 15px;\n"
"background:  rgba(248, 251, 255, 0.99);\n"
"font-size: 16px; \n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:  rgba(248, 251, 255, 0.55);\n"
"border-color: rgba(104, 160, 229, 0.88);\n"
"font-size: 16px;\n"
"color: #2B528C;\n"
"}"));
        stackedWidget->addWidget(userContact);
        userHomeWhiteBackground_3->raise();
        userProfileBlueMenuBar_2->raise();
        userHomeDisplayFrame_3->raise();
        userHomeHelloBar_3->raise();
        UserLogin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(UserLogin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UserLogin->setStatusBar(statusbar);

        retranslateUi(UserLogin);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(UserLogin);
    } // setupUi

    void retranslateUi(QMainWindow *UserLogin)
    {
        UserLogin->setWindowTitle(QApplication::translate("UserLogin", "MainWindow", nullptr));
        loginWhiteBackground->setText(QString());
        pbMCRLink->setText(QApplication::translate("UserLogin", "My COVID-19 Record", nullptr));
        loginImage->setText(QString());
        loginCOVIDSub->setText(QApplication::translate("UserLogin", "Find all your COVID-19 records in one place.", nullptr));
        loginSubHeading->setText(QApplication::translate("UserLogin", "Thank you for keeping New Zealand safe.", nullptr));
        kiaOraTitle->setText(QApplication::translate("UserLogin", "Kia Ora Aotearoa!", nullptr));
        simplyLoginSub->setText(QApplication::translate("UserLogin", "Simply login below to continue.", nullptr));
        enterNHI->setPlaceholderText(QApplication::translate("UserLogin", " My NHI Number", nullptr));
        enterEmail->setPlaceholderText(QApplication::translate("UserLogin", " My Email Address", nullptr));
        enterAccess->setPlaceholderText(QApplication::translate("UserLogin", " My Access Code ", nullptr));
        enterDetailsText->setText(QApplication::translate("UserLogin", "Enter your details to continue:", nullptr));
        myAccountTitle->setText(QApplication::translate("UserLogin", "My Account", nullptr));
        pbLogin->setText(QApplication::translate("UserLogin", "Let's Go!", nullptr));
        pbCircleLogin->setText(QApplication::translate("UserLogin", "Let's Go!", nullptr));
        userHomeWhiteBackground->setText(QString());
        pbHome->setText(QApplication::translate("UserLogin", "Home", nullptr));
        pbProfile->setText(QApplication::translate("UserLogin", "My Profile", nullptr));
        pbContact->setText(QApplication::translate("UserLogin", "Contact Us", nullptr));
        displayPicture_2->setText(QApplication::translate("UserLogin", "displayPicture", nullptr));
        label_9->setText(QApplication::translate("UserLogin", "Username!", nullptr));
        label_17->setText(QApplication::translate("UserLogin", "Hey there,", nullptr));
        pbLogout->setText(QApplication::translate("UserLogin", "Logout", nullptr));
        homeSubHeading->setText(QApplication::translate("UserLogin", "You can find all COVID-19 updates here.", nullptr));
        homeTitle->setText(QApplication::translate("UserLogin", "Home ", nullptr));
        alerLevelUpdatesTitle->setText(QApplication::translate("UserLogin", "Alert Level Updates", nullptr));
        vaccineStatsTitle->setText(QApplication::translate("UserLogin", "Vaccine Statistics", nullptr));
        communityCasesTitle->setText(QApplication::translate("UserLogin", "Community Cases ", nullptr));
        userHomeWhiteBackground_2->setText(QString());
        displayPicture_4->setText(QApplication::translate("UserLogin", "displayPicture", nullptr));
        label_12->setText(QApplication::translate("UserLogin", "Username!", nullptr));
        label_19->setText(QApplication::translate("UserLogin", "Hey there,", nullptr));
        pbLogout_3->setText(QApplication::translate("UserLogin", "Logout", nullptr));
        pbHome_4->setText(QApplication::translate("UserLogin", "Home", nullptr));
        pbProfile_4->setText(QApplication::translate("UserLogin", "My Profile", nullptr));
        pbContact_4->setText(QApplication::translate("UserLogin", "Contact Us", nullptr));
        homeSubHeading_2->setText(QApplication::translate("UserLogin", "Track your COVID-19 Vaccines,  test results and more.", nullptr));
        homeTitle_2->setText(QApplication::translate("UserLogin", "My Profile", nullptr));
        showUserName->setText(QApplication::translate("UserLogin", "My Full Name", nullptr));
        userDOBHeading->setText(QApplication::translate("UserLogin", "Birthday", nullptr));
        showUserDOB->setText(QApplication::translate("UserLogin", "TextLabel", nullptr));
        showUserNumber->setText(QApplication::translate("UserLogin", "TextLabel", nullptr));
        userNumberHeading->setText(QApplication::translate("UserLogin", "Contact Number", nullptr));
        showUserEmail->setText(QApplication::translate("UserLogin", "TextLabel", nullptr));
        userEmailHeading->setText(QApplication::translate("UserLogin", "Email Address", nullptr));
        showUserEmergencyContact->setText(QApplication::translate("UserLogin", "TextLabel", nullptr));
        userEmercencyContactHeading->setText(QApplication::translate("UserLogin", "Emergency Contact", nullptr));
        vaccineIcon1Frame->setText(QString());
        vaccine1TypeLabel->setText(QApplication::translate("UserLogin", "Vaccination not yet recieved.", nullptr));
        dose1Text->setText(QApplication::translate("UserLogin", "Dose 1", nullptr));
        vaccine1DateRecieved->setText(QApplication::translate("UserLogin", "Date Recieved", nullptr));
        imgVaccineIcon2_2->setText(QString());
        myVaccinesHeading->setText(QApplication::translate("UserLogin", "My Vaccines", nullptr));
        myDocsHeading->setText(QApplication::translate("UserLogin", "My Documentation", nullptr));
        vaccineIcon2Frame->setText(QString());
        dose2Text->setText(QApplication::translate("UserLogin", "Dose 2", nullptr));
        vaccine2TypeLabel->setText(QApplication::translate("UserLogin", "Vaccination not yet recieved.", nullptr));
        vaccine2DateRecieved->setText(QApplication::translate("UserLogin", "Date Recieved", nullptr));
        imgVaccineIcon2_3->setText(QString());
        userNHIHeading->setText(QApplication::translate("UserLogin", "My NHI", nullptr));
        userVaccStatusHeading->setText(QApplication::translate("UserLogin", "Vaccine Status", nullptr));
        showUserCVN->setText(QApplication::translate("UserLogin", "TextLabel", nullptr));
        showUserVaccStatus->setText(QApplication::translate("UserLogin", "TextLabel", nullptr));
        userCVNHeading->setText(QApplication::translate("UserLogin", "My CVN ", nullptr));
        showUserNHI->setText(QApplication::translate("UserLogin", "TextLabel", nullptr));
        medicalInfoHeading->setText(QApplication::translate("UserLogin", "Medical Information", nullptr));
        imgTestResults->setText(QApplication::translate("UserLogin", "Test Image Label", nullptr));
        imgQRCode->setText(QApplication::translate("UserLogin", "QR Code", nullptr));
        imgCertificate->setText(QApplication::translate("UserLogin", "Certificate Image", nullptr));
        myDocsSub->setText(QApplication::translate("UserLogin", "Click to enlarge your documents.", nullptr));
        testResultText->setText(QApplication::translate("UserLogin", "Test Results", nullptr));
        certificateText->setText(QApplication::translate("UserLogin", "Certificates", nullptr));
        qrCodeText->setText(QApplication::translate("UserLogin", "QR Code", nullptr));
        pbHome_5->setText(QApplication::translate("UserLogin", "Home", nullptr));
        pbProfile_5->setText(QApplication::translate("UserLogin", "My Profile", nullptr));
        pbContact_5->setText(QApplication::translate("UserLogin", "Contact Us", nullptr));
        userHomeWhiteBackground_3->setText(QString());
        homeSubHeading_3->setText(QApplication::translate("UserLogin", "Fill in the form below to contact us.", nullptr));
        homeTitle_3->setText(QApplication::translate("UserLogin", "Contact Us", nullptr));
        showUserName_2->setText(QApplication::translate("UserLogin", "My Contact Details", nullptr));
        userDOBHeading_2->setText(QApplication::translate("UserLogin", "Preferred Name", nullptr));
        userNumberHeading_2->setText(QApplication::translate("UserLogin", "Preferred Contact", nullptr));
        medicalInfoHeading_4->setText(QApplication::translate("UserLogin", "Message Details", nullptr));
        userDOBHeading_3->setText(QApplication::translate("UserLogin", "What is your message about?", nullptr));
        userNumberHeading_3->setText(QApplication::translate("UserLogin", "Message Subject", nullptr));
        userNumberHeading_4->setText(QApplication::translate("UserLogin", "My Message", nullptr));
        myVaccinesHeading_2->setText(QApplication::translate("UserLogin", "Need Help?", nullptr));
        pbMCRLink_2->setText(QApplication::translate("UserLogin", "My COVID-19 Record", nullptr));
        homeSubHeading_4->setText(QApplication::translate("UserLogin", "You can find more information here.", nullptr));
        pbMCRLink_3->setText(QApplication::translate("UserLogin", "My COVID-19 Record", nullptr));
        pbMCRLink_4->setText(QApplication::translate("UserLogin", "My COVID-19 Record", nullptr));
        displayPicture_5->setText(QApplication::translate("UserLogin", "displayPicture", nullptr));
        label_13->setText(QApplication::translate("UserLogin", "Username!", nullptr));
        label_20->setText(QApplication::translate("UserLogin", "Hey there,", nullptr));
        pbLogout_4->setText(QApplication::translate("UserLogin", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserLogin: public Ui_UserLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
