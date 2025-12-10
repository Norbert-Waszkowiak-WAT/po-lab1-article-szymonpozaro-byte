#include "book.h"
#include <iostream>
 
Book::Book() : title(""), author(Author()), publicationYear(0), chapters() {}
 
Book::Book(std::string bookTitle, Author bookAuthor, int year, std::vector<Chapter> bookChapters)
    : title(bookTitle), author(bookAuthor), publicationYear(year), chapters(bookChapters) {}
 
void Book::addChapter(const Chapter &newChapter) {
    chapters.push_back(newChapter);
}
 
void Book::displayInfo() const {
    std::cout << "Book: " << title << " (" << publicationYear << ")\n"
              << "Author: " << author.toString() << "\n";
 
    std::cout << "Chapters:\n";
    for (const auto &c : chapters) {
        std::cout << "  - ";
        c.displayInfo();
        std::cout << "\n";
    }
}
 
std::string Book::getTitle() const { return title; }
Author Book::getAuthor() const { return author; }
int Book::getPublicationYear() const { return publicationYear; }
std::vector<Chapter> Book::getChapters() const { return chapters; }