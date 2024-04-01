#include "Hash_Table.h"

#include <iostream>

using namespace std;

int DirectoryHash::hashFunction(char firstChar) {
    if (firstChar < 'a' || firstChar > 'z') {
        throw invalid_argument("Key must start with a letter from A to Z");
    }
    return firstChar - 'a';
}

DirectoryHash::DirectoryHash() {
        hashTable.resize(26);
}

void DirectoryHash::addString(const string& str) {
    char firstChar = tolower(str[0]);
    int index = hashFunction(firstChar);
    hashTable[index].push_back(str);
}

void DirectoryHash::printHash() {
    for (int i = 0; i < 26; ++i) {
        cout << static_cast<char>('A' + i) << " -> ";
        bool isFirst = true;
        for (const auto& str : hashTable[i]) {
            if (!isFirst) {
                cout << " -> ";
            }
            cout << str;
            isFirst = false;
        }
        cout << endl;
    }
}