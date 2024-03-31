#include "Finder.h"
#include <vector>
#include <string>

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;
    
    int start = 0;
    int end = s1.size();

    for (size_t i = 1; i <= s2.size(); i++) {
        int found = -1;
        
        // Binary search to find the longest prefix of s2 that appears in s1
        while (start <= end) {
            int mid = start + (end - start) / 2;
            size_t pos = s1.find(s2.substr(0, mid), 0);

            if (pos != string::npos) {
                found = pos;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        result.push_back(found);
        // Reset start and end for the next iteration
        start = 0;
        end = s1.size();
    }

    return result;
}


