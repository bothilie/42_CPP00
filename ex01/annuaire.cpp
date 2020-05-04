#include "annuaire.hpp"


std::string    reformater(std::string str){
    std::string tmp = str;
     if (tmp.length() > 10){
                tmp.resize(9);
                tmp.append(1, '.');
                }
    else {
        tmp.append(10 - tmp.length(), ' ');
    }
    return tmp;
}

int main() {
    std::string n;
    Contact *annuaire[8];
    int i = 0;
    while(1) {
        std::cout << "Enter a command: "; // no flush needed
        std::cin >> n;
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
            std::cout << "Index     |First name|Last name |Pseudo    \n";
            if (i != 0){
                int j = 1;
                while (j <= i){
                    std::cout << reformater(annuaire[j]->getnumero()) << "|";
                    std::cout << reformater(annuaire[j]->getfirst()) << "|";
                    std::cout << reformater(annuaire[j]->getlast()) << "|";
                    std::cout << reformater(annuaire[j]->getnickname()) << "\n";
                    j++;
                }
            }
        }
        else if (n == "EXIT")
            return 0;
        else
            std::cout << "Please enter a valid command" << std::endl;
    }
}