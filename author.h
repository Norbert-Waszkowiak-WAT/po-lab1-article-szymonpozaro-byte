#pragma once
#include <string>
 
class Author {
private:
    std::string name;
    std::string surname;
 
public:
    Author(std::string firstName = "", std::string lastName = "");
 
    void print() const;
    std::string toString() const;
 
    std::string getName() const;
    std::string getSurname() const;
};
 
 