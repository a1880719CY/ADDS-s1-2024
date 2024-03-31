#include "Finder.h"
#include <stdbool.h>

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {

    vector<int> result;

    for(size_t i = 0; i <= s1.size() - s2.size(); i++) {
        bool matchFlag = true;
        for(int k = 0; k <= s2.size(); k++){
            if(s1.at(i+k) != s2.at(k)){
                matchFlag = false;
            }  
        }

        if(matchFlag){
            result.push_back(i);
            return result;
        }
    }
    result.push_back(-1);
    return result;
}