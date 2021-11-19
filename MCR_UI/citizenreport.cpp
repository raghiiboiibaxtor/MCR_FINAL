// Welcome to My Covid Record!
// An application that tracks the vaccine status of citizens.
// Log in using these details: NHIAdmin, admin@mycovidrecord.co.nz , 4242
// This application is designed for desktop and is entirely open source.
// Enjoy it!
// Designed and developed by Tess Williams & Raghiiboii Baxtor

// Including class files
#include "citizenreport.h"
// Including Qt libraries
#include <QString>

// Initialising constructor
citizenReport::citizenReport(QString preferredName, QString preferredContact, QString contactDetails, QString reportCategory, QString reportSubject, QString reportDetails)
{
    this->preferredName = preferredName;
    this->preferredContact = preferredContact;
    this->contactDetails = contactDetails;
    this->reportCategory = reportCategory;
    this->reportSubject = reportSubject;
    this->reportDetails = reportDetails;
}

// Defining Setters & Getters
QString citizenReport::getName()
{
    return preferredName;
}

QString citizenReport::getContact()
{
    return preferredContact;
}

QString citizenReport::getContactDetails()
{
    return contactDetails;
}


QString citizenReport::getCategory()
{
    return reportCategory;
}

QString citizenReport::getSubject()
{
    return reportSubject;
}

QString citizenReport::getDetails()
{
    return reportDetails;
}

void citizenReport::setName(QString preferredName)
{
    this->preferredName = preferredName;
}

void citizenReport::setContact(QString preferredContact)
{
    this->preferredContact = preferredContact;
}

void citizenReport::setContactDetails(QString contactDetails)
{
    this->contactDetails = contactDetails;
}

void citizenReport::setCategory(QString reportCategory)
{
    this->reportCategory = reportCategory;
}

void citizenReport::setSubject(QString reportSubject)
{
    this->reportSubject = reportSubject;
}

void citizenReport::setDetails(QString reportDetails)
{
    this->reportDetails = reportDetails;
}
