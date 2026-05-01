#ifndef ADMIN_H
#define ADMIN_H

class Admin{
    private:
        string username;
        string password;
    
    public:
        //Constructor
        Admin();

        //Member functions
        void createAccount();
        void login(string user, string pass);
};

#endif