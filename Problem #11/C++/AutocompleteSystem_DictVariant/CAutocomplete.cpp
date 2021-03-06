//
// Created by Andrei on 4/6/2019.
//

#include "CAutocomplete.h"

CAutocomplete::CAutocomplete() {}

CAutocomplete::~CAutocomplete() {

}

bool CAutocomplete::isStringInMap(string str) {
    bool retVal = false;
    if(mWordsMap.find(str) != mWordsMap.end()) {
        retVal = true;
    }
    return  retVal;
}

/*
 * str = deer
 * mWordsMap[d] = deer
 * mWordsMap[de] = deer
 * mWordsMap[dee] = deer
 * mWordsMap[deer] = deer
 *
 * str = deal
 * mWordsMap[d] = deer, deal
 * mWordsMap[de] = deer, deal
 * mWordsMap[dea] = deal
 * mWordsMap[deal] = deal
 * */
void CAutocomplete::addWord(string str) {
    for (int i = 0; i < str.length(); ++i) {
        string temp = str.substr(0, i+1);
        (mWordsMap[temp]).insert(str);
    }
}

set<string> CAutocomplete::findWords(string str) {
    set<string> retVal;
    if(isStringInMap(str) == true) {
        retVal = mWordsMap[str];
    }
    return retVal;
}
