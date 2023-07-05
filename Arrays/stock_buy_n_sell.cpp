#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int res1;
        for(int i=0;i<prices.size();i++){
            for(int j=1;j<prices.size();j++){
                if(j>i){
                    res1=prices[j]-prices[i];
                    if(res1>=res && res1>=0){
                        res = res1;
                    }
                }
            }
        }
        return res;
    }
};