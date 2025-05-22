#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int,5> arr={1,2,3,4,5};
    cout<<"Array Elements are:-";
    
    //1.Display array element 
    for(int num:arr)
    {
        cout<<num<<" "; //display array element 
    }
    cout<<endl;

    //2. To find out array size
    cout<<"Size of array="<<arr.size()<<endl;

    //3. Front and back element of array
    cout<<"Front element of array:"<<arr.front()<<endl;
    cout<<"Back element of array:"<<arr.back()<<endl;

    //4.Point to first and last element of array
    cout<<arr.begin()<<endl;//iterate or point to first element of array
    cout<<arr.end()<<endl;

    //5.Check array is empty or not
    cout<<"Array is empty or not:"<<arr.empty()<<endl;

    //6. Element at particular index
    cout<<"Element at index 2:"<<arr.at(2);
    return 0;
}