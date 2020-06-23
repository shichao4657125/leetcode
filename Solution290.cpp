//
// Created by 27902 on 6/22/2020.
//

#include "Solution290.h"

bool Solution290::wordPattern(string pattern, string str) {
    istringstream word(str);
    string s;
    vector<string> ss;
    while (word >> s) {
        ss.push_back(s);
    }


    unordered_map<string, char> s2c;
    unordered_map<char, string> c2s;

    if (pattern.length() != ss.size()) {
        return false;
    }
    for (int i = 0; i < ss.size(); i++) {
        if (s2c[ss[i]] == 0 && c2s[pattern[i]] == "") {
            s2c[ss[i]] = pattern[i];
            c2s[pattern[i]] = ss[i];
            continue;
        }
        if (s2c[ss[i]] != pattern[i]) {
            cout<<"false"<<endl;
            return false;

        }
    }
    cout<<"true"<<endl;
    return true;


}
