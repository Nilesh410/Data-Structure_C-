#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,5> arr={1,56,23,5,8};

    //access loop through
    cout<<"---Access through loop---"<<endl;
    for(int num:arr)
    {
        cout<<num<<" ";
    }
    cout<<endl;

    //access
    cout<<"---Access by index and at---"<<endl; 
    cout<<"arr[3]="<<arr[3]<<endl;
    cout<<"by using at="<<arr.at(2)<<endl;
   

    //front and back 
    cout<<"---Front and Back-----"<<endl;
    cout<<"front ele="<<arr.front()<<endl;
    cout<<"back ele="<<arr.back()<<endl;

     //Begin ang end work as pointer 
     cout<<"---Beign and end---"<<endl;
    cout<<"array begin="<<arr.begin()<<endl;
    cout<<"array end="<<arr.end()<<endl;
    int arr1[3];


    //size of array
    cout<<"size of array---"<<endl;
    cout<<"array size="<<arr.size()<<endl;;

    //array empty or not
    cout<<"--Empty or not---"<<endl;
    cout<<"array is empty or not="<<arr.empty()<<endl;

    //cout<<"array capacity="-> capacity cant find out ;
    //insert and delete --> 
    // arr.push_back(34);

    //Fill Function 
    cout<<"---Fill Function---"<<endl;
     arr.fill(34);
     for(int num:arr)
    {
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}