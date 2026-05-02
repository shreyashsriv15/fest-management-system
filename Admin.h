#ifndef ADMIN_H
#define ADMIN_H

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

#endif