#include<iostream>
using namespace std;
class Sorting
{
    private: 
          int arr[5];
    public:
    void initialize()
    {
       cout<<"Enter the array elements=";
       for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
       {
          cin>>arr[i];
       }  
    }
    void display()
    {
        cout<<"Array elements are:";
        for(int value:arr)
        {
            cout<<value<<" ";
        }
    }
    bool search(int search_ele)
    {
        int size=sizeof(arr)/sizeof(arr[0]);
        int flag=0;
        for(int i=0;i<size;i++)
        {
            if(search_ele==arr[i])
            {
                cout<<"Element is present at location="<<i;
                flag=1;
                break;
            }
        }
        if(flag==0)
          cout<<"element is not present in the array";
        return flag;
    }
    void update(int value,int new_value)
    {
        
        
    }

};
int main()
{
    Sorting s;
    s.initialize();
    s.display();
    s.search(23);
    s.update(1);
    return 0;
}