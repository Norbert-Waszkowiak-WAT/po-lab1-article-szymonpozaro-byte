#pragma once
#include <string>
#include <vector>
#include "author.h"
#include "chapter.h"
 
class Book {
private:
    std::string title;
    Author author;
    int publicationYear;
    std::vector<Chapter> chapters;
 
public:
    Book();
    Book(std::string bookTitle, Author bookAuthor, int year, std::vector<Chapter> bookChapters);
 
    void addChapter(const Chapter &newChapter);
    void displayInfo() const;
 
    std::string getTitle() const;
    Author getAuthor() const;
    int getPublicationYear() const;
    std::vector<Chapter> getChapters() const;
};