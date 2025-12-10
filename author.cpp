#include "author.h"
#include <iostream>
 
Author::Author(std::string firstName, std::string lastName)
    : name(firstName), surname(lastName) {}
 
void Author::print() const {
    std::cout << name << " " << surname;
}
 
std::string Author::toString() const {
    return name + " " + surname;
}
 
std::string Author::getName() const {
    return name;
}
 
std::string Author::getSurname() const {
    return surname;
}
