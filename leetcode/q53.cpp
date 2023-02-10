class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int max_so_far = INT_MIN;
    int max_ending=0;

    int s=nums.size();
    for(int i=0; i<s; i++)
    {
        max_ending=max_ending+nums[i];

        if(max_so_far<max_ending)
            max_so_far=max_ending;
        if(max_ending<0)
            max_ending=0;
    }
    //cout<<max_so_far;
    return max_so_far;
    }
};