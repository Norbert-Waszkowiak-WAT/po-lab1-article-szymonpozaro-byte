 #pragma once
#include <string>
#include "author.h"
 
class Article {
private:
    std::string title;
    Author author;
    int publicationYear;
    std::string journal;
 
public:
    Article();
    Article(std::string articleTitle, Author articleAuthor, int year, std::string journalName);
    Article(const Article &other);
 
    void displayInfo() const;
 
    std::string getTitle() const;
    Author getAuthor() const;
    int getPublicationYear() const;
    std::string getJournal() const;
};
 
 
 
 
};
#endif

 
 
 
 
 
 