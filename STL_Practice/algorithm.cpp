#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector <int> arr;
    arr.push_back(34);
    arr.push_back(23);
    arr.push_back(12);
    arr.push_back(52);
    
    //1.sortng the array
    cout<<"Before sorting the vector elements = ";
    for(auto num:arr)
        cout<<num<<" ";
    cout<<endl;

    cout<<"After sorting the vector elements = ";
    sort(arr.begin(),arr.end());
    for(auto num:arr)
        cout<<num<<" ";
    cout<<endl;

    //2.Binary search
    cout<<"Enter the element to search from the vector = ";
    int search_ele;
    cin>>search_ele;
    bool result=binary_search(arr.begin(),arr.end(),search_ele);
    (result==1)?cout<<"Number is present":cout<<"Number is not present";

    //3.Max and min element from the array
    int maxi=*max(arr.begin(),arr.end()-1);
    cout<<"Maxi ele ="<<maxi<<endl;
    int mini=*min(arr.begin(),arr.end()-1);
    cout<<"mini ele ="<<mini<<endl;

    //4. swap two numbers
    int a=10,b=20;
    cout<<"Before swapping a = "<<a<<" & b = "<<b<<endl;
    swap(a,b);
    cout<<"After swapping a = "<<a<<" & b = "<<b<<endl;

    //5. Reverse the array elements

    vector <int> arr1;
    arr1.push_back(34);
    arr1.push_back(23);
    arr1.push_back(12);
    arr1.push_back(52);
    cout<<"Before reversing array ele =";
    for(auto num:arr1)
        cout<<num<<" ";
    cout<<endl;
    reverse(arr1.begin(),arr1.end());
    cout<<"After reversing array ele =";
    for(auto num:arr1)
        cout<<num<<" ";
    cout<<endl;

    //6. Rotate the array elements 
    rotate(arr1.begin(),arr1.begin()+1,arr1.end());
    cout<<"After rotating array ele =";
    for(auto num:arr1)
        cout<<num<<" ";
    cout<<endl;
    return 0;
}