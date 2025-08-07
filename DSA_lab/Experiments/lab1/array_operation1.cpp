#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    cout<<"Array elements are=";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void initialize(int arr[],int n)
{
    cout<<"Enter the array elements=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    display(arr,n);
}
bool search(int arr[],int n,int search_ele)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search_ele)
        {
           cout<<"Element is found at index="<<i;
           flag=1;
           return i;
        }
    }
    if(flag==0)
    {
        cout<<"Element is not found";
        return -1;
    }  
}
void update(int arr[],int n,int updated_ele,int updated_value)
{
    int index=search(arr,n,updated_ele);
    if(index>=0)
    {
        arr[index]=updated_value;
        display(arr,n);
    }
}
int* insert(int arr[],int& n,int location,int insert_ele_val)
{   
    if (location < 0 || location > n) {
        cout << "Invalid location!" << endl;
        return arr;
    }
    int new_size=n+1;
    int *new_arr=new int[new_size];
    for (int i = 0; i < location; i++) {
        new_arr[i] = arr[i];
    }

    new_arr[location] = insert_ele_val;

    for (int i = location; i < n; i++) {
        new_arr[i + 1] = arr[i];
    }
    n++; // Update size
    delete[] arr; // free previous memory
    display(new_arr, n);
    return new_arr;

}
int* delete_ele(int arr[], int& n, int ele_delete) {
    int index_del = search(arr, n, ele_delete);
    if (index_del == -1) {
        return arr;
    }

    int* new_arr = new int[n - 1];

    for (int i = 0; i < index_del; i++) {
        new_arr[i] = arr[i];
    }

    for (int i = index_del + 1; i < n; i++) {
        new_arr[i - 1] = arr[i];
    }

    n--; // Update size
    delete[] arr;
    display(new_arr, n);
    return new_arr;
}
int main()
{
    int n;
    cout<<"enter the array size=";
    cin>>n;
    int *arr=new int[n];
    int choice, ch;
    do{
        cout<<"Array operation="<<endl;
        cout<<"1.Initialize"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Search"<<endl;
        cout<<"4.Update"<<endl;
        cout<<"5.Insert"<<endl;
        cout<<"6.Delete"<<endl;
        cout<<"Select the array operation"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: initialize(arr,n);
                    break;
            case 2: display(arr,n);
                    break;
            case 3: int ele_search;
                    cout<<"enter the ele to search=";
                    cin>>ele_search;
                    search(arr,n,ele_search);
                    break;
            case 4:int ele,updated_ele;
                    cout<<"Enter the ele of search to update=";
                    cin>>ele;
                    cout<<"Enter updated_value";
                    cin>>updated_ele;
                    update(arr,n,ele,updated_ele);
                    break;
            case 5: int insert_ele;
                    int location;
                    cout<<"enter the location to insert the ele=";
                    cin>>location;
                    cout<<"Enter the element to insert=";
                    cin>>insert_ele;
                    arr=insert(arr,n,location,insert_ele);
                    break;
            case 6:int delete_value;
                cout << "Enter the element to delete: ";
                cin >> delete_value;
                arr = delete_ele(arr, n, delete_value);
                break;
            default:cout<<"Invalid operation";
                    break;
        }
        cout<<"If you want continue then press 1 otherwise 0";
        cin>>ch;
    }while(ch!=0);
     delete[] arr;
    return 0;
}