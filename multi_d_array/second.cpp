#include<iostream>
using namespace std;
int main()
{
    int arr[2][2]={{1,2},{3,4}};
    int row=sizeof(arr)/sizeof(arr[0]);
    int clmn=sizeof(arr[0])/sizeof(arr[0][0]);

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<clmn;j++)
        {
            cout<<"arr["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }
    }
    //Display 
    cout<<"Array elements are="<<"\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<clmn;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}