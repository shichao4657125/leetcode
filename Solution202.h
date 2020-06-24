//
// Created by 27902 on 6/23/2020.
//

#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <string>

using namespace std;

#ifndef LEETCODESHI_SOLUTION202_H
#define LEETCODESHI_SOLUTION202_H


class Solution202 {
public:
    bool isHappy(int n);
private:
    int SumOfSquare(int n);
    int sortNumber(int n);
};


#endif //LEETCODESHI_SOLUTION202_H
