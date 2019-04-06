//
// Created by Andrei on 4/6/2019.
//

#ifndef AUTOCOMPLETESYSTEM_DICTVARIANT_CAUTOCOMPLETE_H
#define AUTOCOMPLETESYSTEM_DICTVARIANT_CAUTOCOMPLETE_H

#include <string>
#include <map>
#include <set>
using namespace std;

class CAutocomplete {
public:
    CAutocomplete();

    virtual ~CAutocomplete();

    void addWord(string str);
    set<string> findWords(string str);
private:
    bool isStringInMap(string str);

    map<string, set<string> > mWordsMap;
};


#endif //AUTOCOMPLETESYSTEM_DICTVARIANT_CAUTOCOMPLETE_H
