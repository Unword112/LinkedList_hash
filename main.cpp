#include <iostream>
#include "Hash_Table.h"

#include <vector>
#include <list>
#include <string>

using namespace std;

int main(){
        DirectoryHash directory;

        directory.printHash();

        char choice;
        do {
                string input;
                cout << "Enter a word: ";
                cin >> input;
                directory.addString(input);
                directory.printHash();

                cout << "Do you want to add another word? (y/n): ";
                cin >> choice;
        } while (choice == 'y' || choice == 'Y');

        cout << "Directory Hash:" << endl;
        directory.printHash();

    return 0;
}