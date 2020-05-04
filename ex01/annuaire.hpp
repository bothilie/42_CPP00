#ifndef ANNUAIRE_HPP
#define ANNUAIRE_HPP

#include <iostream>
#include <cstring>

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
    int getT() { return index; }
    void init() {
        _numero = std::to_string(index);
        std::cout << "first name: ";
        std::cin >> _first;
        std::cout << "last name: ";
        std::cin >> _last;
        std::cout << "nickname: ";
        std::cin >> _nickname;
        std::cout << "login: ";
        std::cin >> _login;
        std::cout << "postal address: ";
        std::cin >> _postal;
        std::cout << "email address: ";
        std::cin >> _email;
        std::cout << "phone number: ";
        std::cin >> _phone;
        std::cout << "birthday date: ";
        std::cin >> _birthday;
        std::cout << "underwear color: ";
        std::cin >> _color;
        std::cout << "darkest secret: ";
        std::cin >> _secret;
    }
    std::string getnumero()
    {
        return _numero;
    }
    std::string getfirst()
    {
        return _first;
    }
    std::string getlast()
    {
        return _last;
    }
    std::string getnickname()
    {
        return _nickname;
    }
};

#endif