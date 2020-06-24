//
// Created by 27902 on 6/23/2020.
//

#include "Solution202.h"

bool Solution202::isHappy(int n) {
    unordered_set<int> mySet;
    //int m=SumOfSquare(n);
    while(n!=1){
        n = SumOfSquare(n);
        if(mySet.find(n)!=mySet.end()){
            cout<<"0"<<endl;
            return false;
        }else{
            mySet.insert({n});
        }
    }
    cout<<"1"<<endl;
    return true;
}

int Solution202::SumOfSquare(int n) {
    int m=0;
    while(n!=0){
        m+=(n%10)*(n%10);
        n=n/10;
    }
    //return sortNumber(m);
    return m;
}

int Solution202::sortNumber(int n) {
    string str = to_string(n);

    sort(str.begin(),str.end());
    //cout<<stoi(str)<<endl;

    return  stoi(str);

}


