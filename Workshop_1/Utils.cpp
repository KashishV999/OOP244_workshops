/*/////////////////////////////////////////////////////////////////////////
Full Name  :Kashish Verma
Student ID#:151579232
Email      :kverma45@myseneca.ca
Date       :17 May 2024

Authenticity Declaration:
I have done all the coding by myself and only copied the code that my professor 
provided to complete my workshops and assignments.

/////////////////////////////////////////////////////////////////////////*/
#define CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "Utils.h"
using namespace std;
namespace seneca {

    void flushkeys() {
        while (cin.get() != '\n');
    }

    bool ValidYesResponse(char ch) {
        return ch == 'Y' || ch == 'y' || ch == 'N' || ch == 'n';
    }

    bool yes() {
        char ch = 0;
        do {
            cin >> ch;
            flushkeys();
        } while (!ValidYesResponse(ch) && cout << "Only (Y/y) or (N/n) is acceptable: ");
        return ch == 'y' || ch == 'Y';
    }

    void readCstr(char cstr[], int len) {
        char buf[1024] = {};
        int i;
        cin.getline(buf, 1024);
        for (i = 0; i < len && buf[i]; i++) {
            cstr[i] = buf[i];
        }
        cstr[i] = 0;
    }

    int readInt(int min, int max) {
        int value = 0;
        bool done = false;
        while (!done) {
            cin >> value;
            if (!cin) {
                cin.clear();
                cout << "Bad integer, try agian: ";
            }
            else {
                if (value >= min && value <= max) {
                    done = true;
                }
                else {
                    cout << "Value out of range (" << min << "<=value<=" << max << "): ";
                }
            }
            flushkeys();
        }
        return value;
    }



}
