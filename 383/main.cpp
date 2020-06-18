#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {

public:

    bool canConstruct(string ransomNote, string magazine) {
        buildMap(magazine);

        for(auto a:ransomNote){
            if(mp.find(a)==mp.end()){   // not exist in mag
                cout<<"false"<<endl;
                return false;
            }
            else if(mp[a]==0){ //exist in mag but out of use
                cout<<"false"<<endl;
                return false;
            }
            else{ //  exist and still in use
                mp[a]--;
            }
        }
        cout<<"true"<<endl;
        return true;

    }

private:

    unordered_map<char,int> mp;
    void buildMap(string magazine){
        for(auto c:magazine){
            if(mp.find(c)!=mp.end()){
                mp[c]++;
            }
            else{
                mp.insert({c,1});
            }
        }
    }

};
int main() {
    Solution solution;
    string magazine = "abcdefg";
    string ransomNote ="aegg";
    solution.canConstruct(ransomNote, magazine);
}
