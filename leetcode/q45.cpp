#include <iostream>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int s= nums.size();

        vector<int> val(s,s+1);
        int ptr;
        val[0]=0;
        for(int i=0; i<s ; i++)
        {
            for (int j=i+1;(j<s)&&(j<=nums[i]+i);j++)
                {
                    if(val[j]>val[i]+1)
                        val[j]=val[i]+1;
                }
        }

        return val[s-1];
    }
};