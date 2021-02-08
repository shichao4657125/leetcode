//
// Created by 27902 on 2021/2/7.
//
#include "Solution387.h"

int Solution387::firstUniqChar(string s) {
    unordered_map <char,int> mp;
    for(auto c:s){
        mp[c]++;
    }
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]==1){
            cout<<i<<endl;
            return i;
        }
    }
    cout<<"-1"<<endl;
    return -1;
}
