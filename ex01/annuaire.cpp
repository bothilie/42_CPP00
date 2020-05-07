#include "annuaire.hpp"


    void Contact::init() {
        _numero = std::to_string(index);
        std::cout << "first name: ";
        getline(std::cin, _first);
        std::cout << "last name: ";
        getline(std::cin, _last);
        std::cout << "nickname: ";
        getline(std::cin, _nickname);
        std::cout << "login: ";
        getline(std::cin, _login);
        std::cout << "postal address: ";
        getline(std::cin, _postal);
        std::cout << "email address: ";
        getline(std::cin, _email);
        std::cout << "phone number: ";
        getline(std::cin, _phone);
        std::cout << "birthday date: ";
        getline(std::cin, _birthday);
        std::cout << "underwear color: ";
        getline(std::cin, _color);
        std::cout << "darkest secret: ";
        getline(std::cin, _secret);
     }
    int Contact::getT() { return index; }

    std::string Contact::getnumero()
    {
        return _numero;
    }
    std::string Contact::getfirst()
    {
        return _first;
    }
    std::string Contact::getlast()
    {
        return _last;
    }
    std::string Contact::getnickname()
    {
        return _nickname;
    }   
    std::string Contact::getcolor()
    {
        return _color;
    }   
    std::string Contact::getsecret()
    {
        return _secret;
    }   
    std::string Contact::getbirthday()
    {
        return _birthday;
    }   
    std::string Contact::getlogin()
    {
        return _login;
    }   
    std::string Contact::getemail()
    {
        return _email;
    }   
    std::string Contact::getpostal()
    {
        return _postal;
    }   
    std::string Contact::getphone()
    {
        return _phone;
    }   
std::string    reformater(std::string str){
    std::string tmp = str;
     if (tmp.length() > 10){
                tmp.resize(9);
                tmp.append(1, '.');
                }
    //else {
    //    tmp.append(10 - tmp.length(), ' ');
    //}
    return tmp;
}

int main() {
    std::string n;
    std::stringstream ss;
    std::string str_index;
    int index;
    Contact *annuaire[8];
    int i = 0;
    while(1) {
        std::cout << "Enter a command: ";
        getline(std::cin, n);
        if (n == "ADD"){
            if (i < 8){
                i++;
                annuaire[i]= new Contact(i);
                annuaire[i]->init();
            }
            else {
                std::cout << "The directory is full\n";
            }
        }
        else if (n == "SEARCH") {
            if (i == 0)
                std::cout << "The directory is empty" << std::endl;
            if (i != 0)
            {
                std::cout << std::setw(10) << "Index"<< "|";
                std::cout << std::setw(10) << "First name" << "|";
                std::cout << std::setw(10) << "Last name"<< "|";
                std::cout << std::setw(10) << "Pseudo" << std::endl;
                int j = 1;
                while (j <= i){
                    std::cout << std::setw(10) << reformater(annuaire[j]->getnumero()) << "|";
                    std::cout << std::setw(10) << reformater(annuaire[j]->getfirst()) << "|";
                    std::cout << std::setw(10) << reformater(annuaire[j]->getlast()) << "|";
                    std::cout << std::setw(10) << reformater(annuaire[j]->getnickname()) << "\n";
                    j++;
                }
                std::cout << "Enter an index you want to see: ";
                getline(std::cin, str_index);
                std::stringstream ss(str_index);
                ss >> index;
                if (index > 0 && index <= i)
                {
                  std::cout << "First Name: " << annuaire[index]->getfirst() << std::endl;
                  std::cout << "Last name: " << annuaire[index]->getlast() << std::endl;
                  std::cout << "Nickname: " << annuaire[i]->getnickname() << std::endl;
                    std::cout << "Login: " << annuaire[index]->getlogin() << std::endl;
                  std::cout << "Postal address: " << annuaire[index]->getpostal() << std::endl;
                  std::cout << "Email addresse: " << annuaire[index]->getemail() << std::endl;
                    std::cout << "Phone number: " << annuaire[index]->getphone() << std::endl;
                   std::cout << "Birthday date: " << annuaire[index]->getbirthday() << std::endl;
                   std::cout << "underwear color: " << annuaire[index]->getcolor() << std::endl;
                   std::cout << "Darkest secret: " << annuaire[index]->getsecret() << std::endl;
               } 
                else
                {
                    std::cout << "The index is not valid" << std::endl;
                } 
            }  
        }
        else if (n == "EXIT")
            return 0;
        else
            std::cout << "Please enter a valid command" << std::endl;
    }
}