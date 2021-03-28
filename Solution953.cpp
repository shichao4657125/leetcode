//
// Created by 27902 on 2021/3/27.
//

#include "Solution953.h"

bool Solution953::isAlienSorted(vector<string>& words, string order){
    unordered_map<char,int> mp;
    //for(int i=0;i<order.length();i++){
    //    mp.insert( {order[i] , i} );
    //}

    int i=0;
    for(char c:order){
        mp[c] = i++;
    }



    for(int i=0;i<words.size()-1;i++){
        for(int j=0;j<words[i].length();j++){
            if (mp[words[i][j]] > mp[words[i+1][j]]){
                cout<<"false"<<endl;
                return false;
            }
            else if(mp[words[i][j]] < mp[words[i+1][j]]){
                break;
            }
            else{
                continue;
            }
        }
    }
    cout<<"true"<<endl;
    return true;

}


