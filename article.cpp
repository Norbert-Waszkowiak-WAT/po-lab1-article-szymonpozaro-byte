#include "article.h"
#include <iostream>
 
Article::Article()
    : title(""), author(Author()), publicationYear(0), journal("") {}
 
Article::Article(std::string articleTitle, Author articleAuthor, int year, std::string journalName)
    : title(articleTitle), author(articleAuthor), publicationYear(year), journal(journalName) {}
 
Article::Article(const Article &other)
    : title(other.title), author(other.author),
      publicationYear(other.publicationYear), journal(other.journal) {}
 
void Article::displayInfo() const {
    std::cout << title << " (" << publicationYear << "), "
              << author.toString() << ", " << journal;
}
 
std::string Article::getTitle() const { return title; }
Author Article::getAuthor() const { return author; }
int Article::getPublicationYear() const { return publicationYear; }
std::string Article::getJournal() const { return journal; }