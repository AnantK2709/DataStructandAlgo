#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int start = 0;
        int end = nums.size()-1;
        while(start<=end)
        {
            if(start+end == target)
            {
                cout<<start<<endl;
                cout<<end<<endl;
            }
            else if(start+end < target)
            {
                start+=1;
            }
            else
            {
                end-=1;
            }
        }
        return {0,0};
    }

int main()
{
    vector<int>nums{2,7,11,15};
    twoSum(nums,9);
}