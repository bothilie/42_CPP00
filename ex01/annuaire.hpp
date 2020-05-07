#ifndef ANNUAIRE_HPP
#define ANNUAIRE_HPP

#include <iostream>
#include <cstring>
#include <iomanip>
#include <sstream>

class Contact{
    const int   index;
    private:
    std::string _numero;
    std::string _first;
    std::string _last;
    std::string _nickname;
    std::string _login;
    std::string _postal;
    std::string _email;
    std::string _phone;
    std::string _birthday;
    std::string _meal;
    std::string _color;
    std::string _secret;
    public:
    Contact(int index):index(index) {}  //Initializer list must be used 
    int getT();
    void init();
   
    std::string getnumero();
    std::string getfirst();
    std::string getlast();
    std::string getnickname(); 
    std::string getsecret();
    std::string getphone(); 
    std::string getbirthday();
    std::string getlogin();   
    std::string getemail(); 
    std::string getpostal(); 
    std::string getcolor(); 
};

#endif