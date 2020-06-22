//
// Created by 27902 on 6/21/2020.
//

#include "Solution136.h"

int Solution136::singleNumber(vector<int>& nums){
    unordered_map<int,int> mp;
    vector<int>::iterator it;
    for(it = nums.begin();it!=nums.end();it++){
        if(mp.find(*it)==mp.end()){
            mp.insert({*it,1});
        }
        else{
            mp[*it]++;
        }
    }
    for(auto it:nums){
        if(mp[it]==1){
            cout<<it<<endl;
            return it;
        }
    }

}
