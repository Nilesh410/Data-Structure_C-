#include<iostream>
using namespace std;
int main()
{
    int row;
    int clmn;
    cout<<"Decide the row size=";
    cin>>row;
    cout<<"Decide the column size=";
    cin>>clmn;
    int arr[row][clmn];
    
    cout<<"enter the array elements:-";
    //Initialize
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