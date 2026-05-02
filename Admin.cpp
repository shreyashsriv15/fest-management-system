#include"Admin.h"
#include<iostream>
#include<string>
using namespace std;

    //Default Account
    Admin :: Admin()
    {
        username = "admin";
        password = "1234";
    }

    void Admin :: createAccount()
    {
        cout<<"Enter the username : "<<endl;
        cin>>username;

        cout<<"Enter the password : "<<endl;
        cin>>password;
    }

    void Admin :: login(string user ,string pass)
    {
        if(user == username && pass == password)
        {
            cout<<"Login successful"<<endl;
        }
        else
        {
            cout<<"Invalid username or password"<<endl;
        }
    }