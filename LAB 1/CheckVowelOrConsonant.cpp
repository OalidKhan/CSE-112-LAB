#include <bits/stdc++.h>
using namespace std;
int main() {
    char letter;
    cin >> letter;
    if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
        cout << letter << " is a Vowel.";
    }
    else if(letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U'){
        cout << letter << " is a Vowel.";
    }
    else{
        cout << letter << " is a Consonant.";
    }   
	return 0;
}
