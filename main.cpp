#include <iostream>
#include "participants.h"
#include "Admin.h"
using namespace std;

int main()
{
    Admin a1;

    int n;

    cout<<"New Admin ? Press 1 to create an account and press 2 to login"<<endl;
    cin>>n;

    if(n==1)
    {
        a1.createAccount();

        string user, pass;

        cout<<"Enter the username again : "<<endl;
        cin>>user;

        cout<<"Enter the password again : "<<endl;
        cin>>pass;

        a1.login(user, pass);
    }
    else if(n==2)
    {
        string user , pass;

        cout<<"Enter the username : "<<endl;
        cin>>user;

        cout<<"Enter the password : "<<endl;
        cin>>pass;

        a1.login(user, pass);
    }
    else
    {
        cout<<"Try again"<<endl;
        return 0;
    }

    Participants p;

    int choice;

    do
    {
        cout<<"\n===== Event & Participant Management System =====\n";

        cout<<"---- Event Management ----\n";
        cout<<"1 Add Event\n";
        cout<<"2 Delete Event\n";
        cout<<"3 Add Date/Time/Venue\n";
        cout<<"4 View Events\n";
        cout<<"5 Declare Winner\n";
        cout<<"6 Generate Report\n";
        cout<<"7 Search Event\n";
        cout<<"8 Organiser Details\n";

        cout<<"\n---- Participant Management ----\n";
        cout<<"9 Set Maximum Participants\n";
        cout<<"10 Add Participant\n";
        cout<<"11 Delete Participant\n";
        cout<<"12 View Participants\n";
        cout<<"13 Shortlist Participants\n";

        cout<<"14 Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            // 🔹 Event functions (inherited)
            case 1: p.addEvent(); break;
            case 2: p.deleteEvent(); break;
            case 3: p.addSchedule(); break;
            case 4: p.viewEvents(); break;       // overridden → polymorphism works
            case 5: p.declareWinner(); break;
            case 6: p.generateReport(); break;   // overridden
            case 7: p.searchEvent(); break;
            case 8: p.organiserDetails(); break;

            // 🔹 Participant functions
            case 9: p.setMaxParticipants(); break;
            case 10: p.addParticipant(); break;
            case 11: p.deleteParticipant(); break;
            case 12: p.viewParticipants(); break;
            case 13: p.shortlistParticipants(); break;

            case 14: cout<<"Exiting...\n"; break;

            default: cout<<"Invalid choice\n";
        }

    } while(choice != 14);

    return 0;
}
