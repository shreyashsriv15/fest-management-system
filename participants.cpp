#include <iostream>
#include <string>
#include "Event.h"
#include "participants.h"
using namespace std ;
    // Add max participants for event  
    void Participants :: setMaxParticipants()
    {
        cout<<"Enter Maximum Participants Allowed : "<<endl;
        cin>>maxParticipants;
    }
    void Participants :: addParticipant()
    {
        if(count >= maxParticipants)
        {
            cout<<"Maximum participant limit reached\n";
            return;
        }

        cout<<"Enter Participant Name: ";
        cin>>participantName[count];

        cout<<"Enter Event Name: ";
        cin>>eventforParticipant[count];

        count++;
    }
    void Participants :: deleteParticipant()
    {
        string name;

        cout<<"Enter Participant Name to Delete: ";
        cin>>name;

        for(int i=0;i<count;i++)
        {
            if(participantName[i] == name)
            {
                for(int j=i;j<count-1;j++)
                {
                    participantName[j] = participantName[j+1];
                    eventforParticipant[j] = eventforParticipant[j+1];
                }

                count--;

                cout<<"Participant Removed\n";
                return;
            }
        }
    }
 
     void Participants :: viewParticipants()
   {
    if(count == 0)
    {
        cout<<"No participants added yet\n";
        return;
    }

    for(int i=0;i<count;i++)
    {
        cout<<"\nParticipant Name : "<<participantName[i];
        cout<<"\nEvent Name       : "<<eventforParticipant[i]<<endl;
    }
   }
    void Participants :: shortlistParticipants()
    {
        int n;

        cout<<"Enter Number of Participants to Shortlist: ";
        cin>>n;

        if(n > count)
        {
            cout<<"Not enough participants\n";
            return;
        }

        cout<<"\nShortlisted Participants:\n";

        for(int i=0;i<n;i++)
        {
            cout<<participantName[i]<<endl;
        }
    }