#include <bits/stdc++.h>
using namespace std;

class Book{
    private:
    string title;
    string author;
    int publication_year;
    
    public:
    Book(){
        title = "Unnamed";
        author = "Unknown";
        publication_year = 0;
        
        cout << "Default value is set.\n" << endl;
    }
    Book(string tit, string aut, int pubY){
        title = tit;
        author = aut;
        publication_year = pubY;
        
        cout << "Value set succefully.\n" << endl;
    }
    void displayValue(){
        cout << "Title: " << title <<endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publication_year << endl << endl;
    }
    ~Book(){
        cout << "The book name " << title << " was distroyed!!!\n" << endl;
    }
};

int main() {
    Book book1;
    book1.displayValue();
    
    Book book2("Nineteen Eighty-Four" , "George Orwell" , 1949);
    book2.displayValue();
    
    return 0;

}
