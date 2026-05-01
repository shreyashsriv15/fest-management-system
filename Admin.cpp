#include "Admin.h"

class Admin
{
private:
    string username;
    string password;
               
public:

    // default account
    Admin()
    {
        username = "admin";
        password = "1234";
    }

    void createAccount()
    {
        cout<<"Enter the username : "<<endl;
        cin>>username;

        cout<<"Enter the password : "<<endl;
        cin>>password;
    }

    void login(string user ,string pass)
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
};