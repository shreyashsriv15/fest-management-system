#include <iostream>
#include "Admin.h"
using namespace std;

int main()
{
    Admin a1;

    int n;

    cout << "New Admin ? Press 1 to create an account and press 2 to login" << endl;
    cin >> n;

    if(n == 1)
    {
        a1.createAccount();

        string user, pass;

        cout<<"Enter the username again : "<<endl;
        cin>>user;

        cout<<"Enter the password again : "<<endl;
        cin>>pass;

        a1.login(user,pass);
    }
}