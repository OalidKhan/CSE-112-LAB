#include <bits/stdc++.h>
using namespace std;

class Book{
    string title;
    string author;
    int publication_year;
    
    public:
    void setAttributes(string tit, string aut , int year){
        title = tit;
        author = aut;
        publication_year = year;
    }
    
    void displayDetails(){
        cout << "Title: " << title << endl << "Author: " << author << endl << "Publication Year: " << publication_year << endl;
    }
};

int main() {
    Book PhysicsForCSE;
    PhysicsForCSE.setAttributes("CSE_Physics", "Garcia", 1986);
    PhysicsForCSE.displayDetails();
    
    return 0;
}
