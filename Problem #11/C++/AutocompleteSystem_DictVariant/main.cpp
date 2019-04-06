#include <iostream>
#include "CAutocomplete.h"

int main() {
    CAutocomplete *autocomplete = new CAutocomplete();
    autocomplete->addWord("dog");
    autocomplete->addWord("deer");
    autocomplete->addWord("deal");

    set<string> words = autocomplete->findWords("de");
    cout << "Results for 'de':" << endl;
    for(set<string>::iterator it = words.begin(); it != words.end(); ++it) {
        cout << "\t" << *it << endl;
    }

    words = autocomplete->findWords("test");
    cout << "Results for 'test':" << endl;
    for(set<string>::iterator it = words.begin(); it != words.end(); ++it) {
        cout << "\t" << *it << endl;
    }

    words = autocomplete->findWords("d");
    cout << "Results for 'd':" << endl;
    for(set<string>::iterator it = words.begin(); it != words.end(); ++it) {
        cout << "\t" << *it << endl;
    }

    delete autocomplete;
    return 0;
}