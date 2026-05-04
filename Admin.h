#ifndef ADMIN_H
#define ADMIN_H

class Admin
{
    private:
        string username;
        string password;

    public:
        
        Admin();

       
        void createAccount();
        void login(string user, string pass);

};

#endif
