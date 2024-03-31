#include "Finder.h"
#include <stdbool.h>

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;

    // Precompute substrings of s2
    vector<string> substrings;
    for (size_t i = 1; i <= s2.size(); i++) {
        substrings.push_back(s2.substr(0, i));
    }

    // Search for substrings in s1
    for (const string& substr : substrings) {
        size_t found = s1.find(substr);
        if (found != string::npos) {
            result.push_back(found);
        } else {
            result.push_back(-1);
        }
    }

    return result;
}