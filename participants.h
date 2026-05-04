#ifndef PARTICIPANTS_H
#define PARTICIPANTS_H

#include <string>
#include "Event.h"
using namespace std;

class Participants : public Event
{
private:
    string participantName[100];
    string eventforParticipant[100];
    int pCount = 0;
    int maxParticipants = 0;

public:
    void setMaxParticipants();
    void addParticipant();
    void deleteParticipant();
    void viewParticipants();
    void shortlistParticipants();

    //Overriding 
    void viewEvents() override;
    void generateReport() override;
};

#endif
