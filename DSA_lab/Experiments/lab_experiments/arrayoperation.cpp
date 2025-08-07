#include<iostream>
using namespace std;
class Arr_op
{
    private: int arr[5];
    public :
        int arr_size=sizeof(arr)/sizeof(arr[0]);
        void initialize()
        {
            cout<<"Enter the array ele=";
            for(int i=0;i,arr_size;i++)
            {
                cin>>arr[i];
            }    
        }
        void display()
        {
            cout<<"Array elements are=";
            for(int value:arr)
                cout<<value<<" ";
        }
        void insert()
        {
            int new_arr[arr_size+1];
            

        }
}
int main()
{
    return 0;
}