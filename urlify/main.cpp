#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>

/*
 * URLify : Write a method to replace all spaces in a string with '%20  You may assume that the
 * string has suf cient space at the end to hold the additional characters,
 * and that you are given the "true" length of the string.
 * */

using namespace std;

/**
 * Function to convert spaces in a string to a url
 * by inserting %20 where each space is
 * @param str - the char array holding input
 */

void convertToUrl(char str[] ){

    int size = strlen(str);
    str[size] = '\0';
    int spaceCount = 0;
    cout << size << endl;

    for (int i = 0; i < size; ++i){

        if (str[i] == ' '){

            spaceCount++;

        }

    }

    cout << spaceCount << endl;

    int newStrSize = size + (spaceCount * 2) + 1;
    char newStr[newStrSize];
    newStr[newStrSize] = '\0';

    int newStringPosition = 0;

    for (int i = 0; i < size ; i++){

        if (str[i] == ' '){

            newStr[newStringPosition] = '%';
            newStr[newStringPosition+1] = '2';
            newStr[newStringPosition+2] = '0';
            newStringPosition+= 3;

        }

        else{

            newStr[newStringPosition] = str[i];
            newStringPosition++;

        }

    }


    cout << newStr << endl;


}

int main() {

    char input[256] = "Jane Doe and John Smith ";
    convertToUrl(input);
    return 0;
}