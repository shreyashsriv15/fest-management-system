#ifndef EVENT_H
#define EVENT_H

#include <string>
using namespace std;

class Event
{
protected:
    string eventName[50];
    string organiser[50];
    string date[50];
    string time[50];
    string venue[50];
    string winner[50];

    int count;

public:
    Event();

    //Virtual functions (Polymorphism)
    virtual void addEvent();
    virtual void deleteEvent();
    virtual void viewEvents();
    virtual void generateReport();

    void addSchedule();
    void declareWinner();
    void searchEvent();
    void organiserDetails();

    virtual ~Event() {}
};

#endif
