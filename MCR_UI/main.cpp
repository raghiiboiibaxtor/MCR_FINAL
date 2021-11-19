// Welcome to My Covid Record!
// An application that tracks the vaccine status of citizens.
// Log in using these details: NHIAdmin, admin@mycovidrecord.co.nz , 4242
// This application is designed for desktop and is entirely open source.
// You are currently in the Main() .cpp file, where program execution begins and ends.
// You'll find the logic of the program in the mainwindow.cpp & userlogin.cpp
// Enjoy it!
// Designed and developed by Tess Williams & Raghiiboii Baxtor

// Including class files
#include "mainwindow.h"
#include "userlogin.h"
// Including libraries
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow mainWindow;
    mainWindow.hide();

    UserLogin login;
    login.show();

    return a.exec();
}
