#include <iostream>

using namespace std;

// class declarations need a ; afterwards
class Book {
    private:
        // cannot modify properties outside of class
        string quality;
    public:
        string author;
        string title;
        int pages;

        // constructor
        Book(string argTitle, string argAuthor, int argPages, string argQuality) {
            title = argTitle;
            argAuthor = argAuthor;
            pages = argPages;
            quality = argQuality;
        }

        Book() {

        }

        bool isBigBook() {
            if(pages >= 100) {
                return true;
            }
            return false;
        }
        // getters and setters
        void setRating(string aQuality) {
            if(aQuality == "Great" || aQuality == "Okay" || aQuality == "Bad") {
                quality = aQuality;
            } else {
                quality = "Okay";
            }
        }
    
};

int main() {

    Book book1; // Uses default constructor
    book1.title = "But How Do It Know?";
    book1.author = "J. Clark Scott";
    book1.pages = 244;
    // book1.quality = "Great"; (private)

    // Use constructors
    Book book2("But How Do It Know?", "J. Clark Scott", 244, "Great");
    book2.setRating("Great");

    cout << book2.isBigBook();

    return 0;

}


