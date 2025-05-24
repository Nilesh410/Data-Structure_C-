#include<iostream>
#include<vector>
using namespace std;
int majority_ele(vector <int>nums)
{
    //int n=nums.size();
    // for(int i=0;i<n;i++)
    // {
    //     int count=0;
    //     int num=nums[i];
    //     for(int j=1;j<n;j++)
    //     {
    //         if(nums[j]==num)
    //         {
    //             count++;
    //         }
    //     }
    //     if(count>=(n/2))
    //         return num;
    // }
    int count = 0, candidate = 0;
    for (int num : nums) {
    if (count == 0) candidate = num;
    count += (num == candidate) ? 1 : -1;
      }
    return candidate;
}
int main()
{
    vector <int> nums={2,2,1,1,2,1,1};
    int result=majority_ele(nums);
    cout<<result;
    
    return 0;
}