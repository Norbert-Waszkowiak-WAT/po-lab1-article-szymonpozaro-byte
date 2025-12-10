#pragma once
#include <string>
#include "author.h"
 
class Chapter {
private:
    std::string title;
    Author author;
    int chapterNumber;
 
public:
    Chapter();
    Chapter(std::string chapterTitle, Author chapterAuthor, int number);
    Chapter(const Chapter &other);
 
    void displayInfo() const;
 
    std::string getTitle() const;
    Author getAuthor() const;
    int getChapterNumber() const;
};
 