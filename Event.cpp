#include "Event.h"
#include <iostream>
using namespace std;

Event::Event()
{
    count = 0;
}

void Event::addEvent()
{
    if(count >= 50)
    {
        cout<<"Event list is full\n";
        return;
    }

    cout<<"Enter Event Name: ";
    cin>>eventName[count];

    cout<<"Enter Organiser Name: ";
    cin>>organiser[count];

    cout<<"Enter Date: ";
    cin>>date[count];

    cout<<"Enter Time: ";
    cin>>time[count];

    cout<<"Enter Venue: ";
    cin>>venue[count];

    winner[count] = "NotDeclared";

    count++;
    cout<<"Event Added Successfully\n";
}

void Event::deleteEvent()
{
    string name;
    cout<<"Enter Event Name to delete: ";
    cin>>name;

    for(int i=0;i<count;i++)
    {
        if(eventName[i] == name)
        {
            for(int j=i;j<count-1;j++)
            {
                eventName[j] = eventName[j+1];
                organiser[j] = organiser[j+1];
                date[j] = date[j+1];
                time[j] = time[j+1];
                venue[j] = venue[j+1];
                winner[j] = winner[j+1];
            }
            count--;
            cout<<"Event Deleted Successfully\n";
            return;
        }
    }
    cout<<"Event not found\n";
}

void Event::addSchedule()
{
    string name;
    cout<<"Enter Event Name: ";
    cin>>name;

    for(int i=0;i<count;i++)
    {
        if(eventName[i] == name)
        {
            cout<<"Enter New Date: ";
            cin>>date[i];

            cout<<"Enter Time: ";
            cin>>time[i];

            cout<<"Enter Venue: ";
            cin>>venue[i];

            cout<<"Schedule Updated\n";
            return;
        }
    }
    cout<<"Event not found\n";
}

void Event::viewEvents()
{
    if(count == 0)
    {
        cout<<"No events available\n";
        return;
    }

    for(int i=0;i<count;i++)
    {
        cout<<"\nEvent Name : "<<eventName[i];
        cout<<"\nOrganiser  : "<<organiser[i];
        cout<<"\nDate       : "<<date[i];
        cout<<"\nTime       : "<<time[i];
        cout<<"\nVenue      : "<<venue[i];
        cout<<"\nWinner     : "<<winner[i]<<endl;
    }
}

void Event::declareWinner()
{
    string name;
    cout<<"Enter Event Name: ";
    cin>>name;

    for(int i=0;i<count;i++)
    {
        if(eventName[i] == name)
        {
            cout<<"Enter Winner Name: ";
            cin>>winner[i];
            cout<<"Winner Declared Successfully\n";
            return;
        }
    }
    cout<<"Event not found\n";
}

void Event::generateReport()
{
    cout<<"\n------ Event Report ------\n";

    for(int i=0;i<count;i++)
    {
        cout<<"\nEvent Name : "<<eventName[i];
        cout<<"\nOrganiser  : "<<organiser[i];
        cout<<"\nDate       : "<<date[i];
        cout<<"\nVenue      : "<<venue[i];
        cout<<"\nWinner     : "<<winner[i]<<endl;
    }
}

void Event::searchEvent()
{
    int choice;
    string key;

    cout<<"Search By\n1.Event Name\n2.Date\n3.Organiser\n";
    cin>>choice;

    cout<<"Enter value: ";
    cin>>key;

    for(int i=0;i<count;i++)
    {
        if((choice==1 && eventName[i]==key) ||
           (choice==2 && date[i]==key) ||
           (choice==3 && organiser[i]==key))
        {
            cout<<"\nEvent Name : "<<eventName[i];
            cout<<"\nOrganiser  : "<<organiser[i];
            cout<<"\nDate       : "<<date[i];
            cout<<"\nTime       : "<<time[i];
            cout<<"\nVenue      : "<<venue[i];
            cout<<"\nWinner     : "<<winner[i]<<endl;
            return;
        }
    }
    cout<<"Event not found\n";
}

void Event::organiserDetails()
{
    string name;
    cout<<"Enter Event Name: ";
    cin>>name;

    for(int i=0;i<count;i++)
    {
        if(eventName[i] == name)
        {
            cout<<"Organiser : "<<organiser[i]<<endl;
            return;
        }
    }
    cout<<"Event not found\n";
}
