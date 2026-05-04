#ifndef EVENT_H
#define EVENT_H

class Event
{
    private:
        string eventName[50];
        string organiser[50];
        string date[50];
        string time[50];
        string venue[50];
        string winner[50];
        
        int count;

    public:
        //Constructor
        Event();

        //Member Functions
        void addEvent();
        void deleteEvent();
        void addSchedule();
        void viewEvents();
        void declareWinner();
        void generateReport();
        void searchEvent();
        void organiserDetails();
};

#endif