#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <set>

using namespace std;

bool isPermutation(string& str1, string& str2){

    set<char> alphabets;
    set<char>::iterator it;

    if (str1.length() != str2.length()){

        return false;
    }

    for (int i = 0; i < str1.length(); ++i){

        alphabets.insert(str1[i]);

    }

    for (int i = 0; i < str2.length(); ++i){

        it = alphabets.find(str2[i]);

        if (it == alphabets.end()){

            return false;

        }

    }

    return true;


}

int main() {

    bool permutation = false;
    string str1 = "";
    string str2 = "";
    cout << "Enter string1: " << endl;
    cin >> str1;
    cout << "Enter string2: " << endl;
    cin >> str2;
    permutation = isPermutation(str1, str2);
    cout << permutation << endl;
    return 0;

}

