#include<iostream>
#include<vector>
using namespace std;
 vector<int> plusOne(vector<int>& digits) {
        int integer_num=0;
        vector<int>result;
        int countofDigit=0;
        for(int digit:digits)
        {
            integer_num=(integer_num*10)+digit;
            countofDigit++;
        }
        if(digits[digits.size()-1]==9)
        {
            countofDigit++;
        }
        integer_num +=1;
        //cout<<integer_num;
        while(integer_num>0)
        {
             result.insert(result.begin(),(integer_num%10));
             integer_num /=10;
        }
        return result;
        
    }
int main()
{
    vector<int> nums={1,2,3};
    vector <int> result=plusOne(nums);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i];
    }
    return 0;
}

for(int i=1;i<n;i++)
{
   for(int j=1;j*j<n;j++)
   {
    a++;
   }
}
int i=0,j=0;
for(;i<n;i++)
    while(j<n&&arr[i]<arr[j])
        j++;

