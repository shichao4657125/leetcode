//
// Created by 27902 on 6/18/2020.
//

#include "Solution383.h"


bool Solution383::canConstruct(string ransomNote, string magazine) {
    buildMap(magazine);

    for (auto a:ransomNote) {
        if (mp.find(a) == mp.end()) {   // not exist in mag
            cout << "false" << endl;
            return false;
        } else if (mp[a] == 0) { //exist in mag but out of use
            cout << "false" << endl;
            return false;
        } else { //  exist and still in use
            mp[a]--;
        }
    }
    cout << "true" << endl;
    return true;

}


void Solution383::buildMap(string magazine) {
    for (auto c:magazine) {
        if (mp.find(c) != mp.end()) {
            mp[c]++;
        } else {
            mp.insert({c, 1});
        }
    }
}


