#include<iostream>
#include<string>
using namespace std;

class Admin
{
    private:
        string username;
        string password;

    public:
        //Constructor
        Admin();

        //Member Functions
        void createAccount();
        void login(string user, string pass);

};