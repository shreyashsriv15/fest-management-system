#ifndef PARTICIPANTS_H
#define PARTICIPANTS_H
#include <string>
using namespace std;
class Participants : public Event
{
    private :
    string participantName[100];
    string eventforParticipant[100];
    int count = 0;
    int maxParticipants=0;
    public :
    // Add max participants for event  
    void setMaxParticipants();
    void addParticipant();
    void deleteParticipant();
    void viewParticipants();
    void shortlistParticipants();
};
#endif