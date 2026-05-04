#include <iostream>
#include "participants.h"
using namespace std;

void Participants::setMaxParticipants()
{
    cout<<"Enter Maximum Participants Allowed: ";
    cin>>maxParticipants;
}

void Participants::addParticipant()
{
    if(pCount >= maxParticipants)
    {
        cout<<"Limit reached\n";
        return;
    }

    cout<<"Enter Participant Name: ";
    cin>>participantName[pCount];

    cout<<"Enter Event Name: ";
    cin>>eventforParticipant[pCount];

    pCount++;
}

void Participants::deleteParticipant()
{
    string name;
    cout<<"Enter Participant Name: ";
    cin>>name;

    for(int i=0;i<pCount;i++)
    {
        if(participantName[i] == name)
        {
            for(int j=i;j<pCount-1;j++)
            {
                participantName[j] = participantName[j+1];
                eventforParticipant[j] = eventforParticipant[j+1];
            }
            pCount--;
            cout<<"Removed\n";
            return;
        }
    }
}

void Participants::viewParticipants()
{
    if(pCount == 0)
    {
        cout<<"No participants\n";
        return;
    }

    for(int i=0;i<pCount;i++)
    {
        cout<<"\n"<<participantName[i]<<" -> "<<eventforParticipant[i];
    }
}

void Participants::shortlistParticipants()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=0;i<n && i<pCount;i++)
    {
        cout<<participantName[i]<<endl;
    }
}

void Participants::viewEvents()
{
    cout<<"\n--- Events with Participants ---\n";
    Event::viewEvents();
    cout<<"\nParticipants:\n";
    viewParticipants();
}

void Participants::generateReport()
{
    cout<<"\n=== FULL REPORT ===\n";
    Event::generateReport();
    cout<<"\nParticipants:\n";
    viewParticipants();
}
