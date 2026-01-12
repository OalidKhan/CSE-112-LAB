#include <bits/stdc++.h>
using namespace std;

class Animal{
  public:
  string name;
  string color;
  string sound;
  
  void showname(){
      cout << name << endl;
  }
  
  void printinfo(){
      cout << color << endl << sound << endl;
  }
  
};

int main()
{
    Animal Cat;
    Cat.name = "PUTU";
    Cat.color = "White and Black";
    Cat.sound = "Meow Meow";
    Cat.showname();
    Cat.printinfo();
    
	return 0;
}
