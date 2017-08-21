#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

/*CTCI : is unique: Implement an algorithm to determine if a string has all unique characters.
 * What if you cannot use additional data structure?*/

bool isUnique(string& str){

    sort(str.begin(), str.end());
    for (int i= 0; i < str.size(); ++i){

        if (str[i] == str[i + 1]){
            return false;
        }

    }

    return true;


}

int main() {

    bool unique = false;
    string str = "";
    cout << "Enter string: " << endl;
    cin >> str;
    unique = isUnique(str);
    cout << isUnique << endl;
    return 0;

}

