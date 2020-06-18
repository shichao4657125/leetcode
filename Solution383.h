//
// Created by 27902 on 6/18/2020.
//
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

#ifndef LEETCODESHI_SOLUTION383_H
#define LEETCODESHI_SOLUTION383_H


class Solution383 {
public:
    bool canConstruct(string ransomNote, string magazine);

private:
    unordered_map<char, int> mp;

    void buildMap(string magazine);

};

#endif //LEETCODESHI_SOLUTION383_H
