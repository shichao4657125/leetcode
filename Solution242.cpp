#include "Solution242.h"

bool Solution242::isAnagram(string s, string t) {
    if(s.length() != t.length()){
        cout<<"false"<<endl;
        return false;
    }
    int n = s.length();
    unordered_map<char,int> myMap;
    for(int i=0;i<n;i++){
        myMap[s[i]]++;
        myMap[t[i]]--;
    }
    for (auto a:myMap){
        if(a.second){
            cout<<"false"<<endl;
            return false;
        }
    }
    cout<<"True"<<endl;
    return true;
}