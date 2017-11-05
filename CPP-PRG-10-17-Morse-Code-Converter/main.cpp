//
//  main.cpp
//  CPP-PRG-10-17-Morse-Code-Converter
//
//  Created by Keith Smith on 11/5/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Morse code is a code where each letter of the English alphabet, each digit, and various
//  punctuation characters are represented by a series of dots and dashes. Table 10-10
//  shows part of the code.
//
//  Write a program that asks the user to enter a string then converts that string to Morse
//  code.
//

#include <iostream>

using namespace std;

string *getString(string *);
string *convertStringToMorseCode(string *);
string *convertCharacterToMorseCode(char *);
void displayMorseCode(string *);

int main()
{
    string *strUserString = nullptr;
    strUserString = new string;
    
    strUserString = getString(strUserString);
    
    strUserString = convertStringToMorseCode(strUserString);
    
    displayMorseCode(strUserString);
    
    return 0;
}

string *getString(string *strStr)
{
    cout << "Please enter a string to convert to Morse code:\n";
    getline(cin, *strStr);
    
    return strStr;
}

string *convertStringToMorseCode(string *strStr)
{
    string *strWord = nullptr;
    strWord = new string;
    
    string *strTemp = nullptr;
    strTemp = new string;
    
    char *chrTemp = nullptr;
    chrTemp = new char;
    
    for (int i = 0 ; i < strStr->length() ; i++)
    {
        *chrTemp = strStr->at(i);
        
        *chrTemp = toupper(*chrTemp);
        
        strWord = convertCharacterToMorseCode(chrTemp);
        
        strTemp->append(*strWord);
    }
    
    return strTemp;
}

string *convertCharacterToMorseCode(char *chrInput)
{
    string *strMorse = nullptr;
    strMorse = new string;
    
    switch(*chrInput)
    {
        case ' ':
            *strMorse = " ";
            break;
        case ',':
            *strMorse = "--**--";
            break;
        case '.':
            *strMorse = "*-*-*-";
            break;
        case '?':
            *strMorse = "**--**";
            break;
        case '0':
            *strMorse = "-----";
            break;
        case '1':
            *strMorse = "*----";
            break;
        case '2':
            *strMorse = "**---";
            break;
        case '3':
            *strMorse = "***--";
            break;
        case '4':
            *strMorse = "****-";
            break;
        case '5':
            *strMorse = "*****";
            break;
        case '6':
            *strMorse = "-****";
            break;
        case '7':
            *strMorse = "--***";
            break;
        case '8':
            *strMorse = "---**";
            break;
        case '9':
            *strMorse = "----*";
            break;
        case 'A':
            *strMorse = "*-";
            break;
        case 'B':
            *strMorse = "-***";
            break;
        case 'C':
            *strMorse = "-*-*";
            break;
        case 'D':
            *strMorse = "-**";
            break;
        case 'E':
            *strMorse = "*";
            break;
        case 'F':
            *strMorse = "**-*";
            break;
        case 'G':
            *strMorse = "--*";
            break;
        case 'H':
            *strMorse = "****";
            break;
        case 'I':
            *strMorse = "**";
            break;
        case 'J':
            *strMorse = "*---";
            break;
        case 'K':
            *strMorse = "-*-";
            break;
        case 'L':
            *strMorse = "*-**";
            break;
        case 'M':
            *strMorse = "--";
            break;
        case 'N':
            *strMorse = "-*";
            break;
        case 'O':
            *strMorse = "---";
            break;
        case 'P':
            *strMorse = "*--*";
            break;
        case 'Q':
            *strMorse = "--*-";
            break;
        case 'R':
            *strMorse = "*-*";
            break;
        case 'S':
            *strMorse = "***";
            break;
        case 'T':
            *strMorse = "-";
            break;
        case 'U':
            *strMorse = "**-";
            break;
        case 'V':
            *strMorse = "***-";
            break;
        case 'W':
            *strMorse = "*--";
            break;
        case 'X':
            *strMorse = "-**-";
            break;
        case 'Y':
            *strMorse = "-*--";
            break;
        case 'Z':
            *strMorse = "--**";
            break;
        default:
            *strMorse = " ";
            break;
    }
    
    return strMorse;
}

void displayMorseCode(string *strStr)
{
    cout << "That message in Morse code is:\n";
    cout << *strStr << endl;
}
