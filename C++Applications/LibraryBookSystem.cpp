#include <iostream>
#include <string>
using namespace std;

class library{
    private:
    string bookName;
    string author;
    int pages[3];

    public:
    void getBookData(){
        cout << "Enter book name: " << endl;
        cin >> bookName;

        cout << "Enter author name: " << endl;
        cin >> author;

        cout << "Enter pages of 3 chapters: ";
        for (int i = 0; i < 3; i++){
            cin >> pages[i];
        }
    }
    void displayBookData(){
        cout << "\nBook Name: " << bookName << endl;
        cout << "Author: " << author << endl;

        cout << "Pages in chapters: ";
        for (int i = 0; i < 3; i++){
            cout << pages[i] << " ";
        }
        cout << endl;
    }
    inline int totalPages(){
        return pages[0] + pages[1] + pages[2];
    }
    friend void compareBooks(library b);
};

void compareBooks(library b){
    cout << "\nTotal Pages in book: " << b.totalPages() << endl;

    if(b.totalPages() > 300)
    cout << "This is a large book." << endl;
    else
    cout << "This is a small book." << endl;
}

int main(){
    library book1;

    book1.getBookData();
    book1.displayBookData();

    cout << "Total Pages: " << book1.totalPages() << endl;

    compareBooks(book1);

    string message = "Library";
    cout << "\nString length of '" << message << "' is: " << message.length() << endl;

    cout << "Program Finished." << endl;
    
    return 0;
}