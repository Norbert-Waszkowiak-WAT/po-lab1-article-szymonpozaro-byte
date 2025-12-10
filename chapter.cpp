#include "chapter.h"
#include <iostream>
 
Chapter::Chapter() : title(""), author(Author()), chapterNumber(0) {}
 
Chapter::Chapter(std::string chapterTitle, Author chapterAuthor, int number)
    : title(chapterTitle), author(chapterAuthor), chapterNumber(number) {}
 
Chapter::Chapter(const Chapter &other)
    : title(other.title), author(other.author), chapterNumber(other.chapterNumber) {}
 
void Chapter::displayInfo() const {
    std::cout << chapterNumber << ". " << title
              << " (" << author.toString() << ")";
}
 
std::string Chapter::getTitle() const {
    return title;
}
 
Author Chapter::getAuthor() const {
    return author;
}
 
int Chapter::getChapterNumber() const {
    return chapterNumber;
}