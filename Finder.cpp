#include "Finder.h"
#include <stdbool.h>

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;

    const int base = 256; // Base for the rolling hash
    const int mod = 1000000007; // Modulus to avoid integer overflow

    int s1Hash = 0;
    int s2Hash = 0;
    int basePower = 1;

    // Calculate the hash of s2 and the initial hash of the first substring of s1
    for (char c : s2) {
        s2Hash = (s2Hash * base + c) % mod;
    }
    for (size_t i = 0; i < s2.size(); i++) {
        s1Hash = (s1Hash * base + s1[i]) % mod;
        if (i != 0) {
            basePower = (basePower * base) % mod;
        }
    }

    // Search for s2 in s1 using the rolling hash
    for (size_t i = 0; i + s2.size() <= s1.size(); i++) {
        if (s1Hash == s2Hash) {
            // Check character by character to confirm the match
            bool match = true;
            for (size_t j = 0; j < s2.size(); j++) {
                if (s1[i + j] != s2[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                result.push_back(i);
            }
        }

        // Update the hash for the next substring of s1
        if (i + s2.size() < s1.size()) {
            s1Hash = (s1Hash * base - s1[i] * basePower + s1[i + s2.size()]) % mod;
            if (s1Hash < 0) {
                s1Hash += mod; // Ensure positive hash value
            }
        }
    }

    if (result.empty()) {
        result.push_back(-1);
    }

    return result;
}
