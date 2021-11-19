// Welcome to My Covid Record!
// An application that tracks the vaccine status of citizens.
// Log in using these details: NHIAdmin, admin@mycovidrecord.co.nz , 4242
// This application is designed for desktop and is entirely open source.
// Enjoy it!
// Designed and developed by Tess Williams & Raghiiboii Baxtor

// Initialising Header Guards
#ifndef CITIZENREPORT_H
#define CITIZENREPORT_H
// Including Qt Libraries
#include "classcitizen.h"
#include <QString>
#include <QVector>


class citizenReport //: public classCitizen
{
// Declaring private attributes of class
private:
    QString preferredName;
    QString preferredContact;
    QString contactDetails;
    QString reportCategory;
    QString reportSubject;
    QString reportDetails;

// Declaring public attributes of class
public:
    // Constructor
    explicit citizenReport(QString preferredName, QString preferredContact, QString contactDetails, QString reportCategory, QString reportSubject, QString reportDetails);
    // Getters
    QString getName();
    QString getContact();
    QString getContactDetails();
    QString getCategory();
    QString getSubject();
    QString getDetails();
    // Setters
    void setName(QString preferredName);
    void setContact(QString preferredContact);
    void setContactDetails(QString contactDetails);
    void setCategory(QString reportCategory);
    void setSubject(QString reportSubject);
    void setDetails(QString reportDetails);
};

#endif // Ending header guards: CITIZENREPORT_H
