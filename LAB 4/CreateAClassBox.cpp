#include <bits/stdc++.h>
using namespace std;

class Box{
    int length, width, height;
    
    public:
    Box(int len, int wid, int hei){
        length = len;
        width = wid;
        height = hei;
    }
    int volume(){
        return length * width * height;
    }
    void display(){
        cout << "Length = " << length << "\nWidth = " << width << "\nHeight = " << height << endl;
    }
};

void VolumeByValue(Box obj){
    cout << "The volume of the box = " << obj.volume() << endl;
}

int main() {
    Box box(7, 4, 3);
    box.display();
    VolumeByValue(box);
    
    return 0;
}
