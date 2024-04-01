#ifndef _HASH_TABLE_H_
#define _HASH_TABLE_H_

#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;


#define INIT_TABLE_SIZE 4
#define REHASH_THRESHOLD 80.0
#define REHASH_EXPEND 2.0

using namespace std;

class DirectoryHash {
private:
    vector<list<string>> hashTable;

    int hashFunction(char firstChar);
public:
    DirectoryHash();
    
    void addString(const string& str);
    void printHash();
};


#endif