#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    
    //1.Insert at last
    cout<<"---1.Insert Element----"<<endl;
    v1.push_back(23);
    v1.push_back(12);
    v1.push_back(45);
    v1.push_back(56);
    v1.push_back(67);
    for(int i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //2.Size and capacity
    cout<<"---2.Size and Capacity---";
    cout<<"\nsize="<<v1.size();
    cout<<"\ncapacity="<<v1.capacity();

    //3.Remove from last
    v1.pop_back();
    for(int i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //4. front and back element
    cout<<"Front element="<<v1.front()<<endl;
    cout<<"Back element="<<v1.back()<<endl;

    //5.Begin and end 
    auto value_begin=v1.begin();
    cout<<"Begin element address="<<*(value_begin)<<endl;
    cout<<"Last element address="<<*(v1.end())<<endl;

   //6.Ineert and delete using begin
   v1.insert(v1.begin()+1,65);
   for(int i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
   
   //7.Delete the elements usign erase
   v1.erase(v1.begin()+1,v1.end()-2);
    for(int i:v1)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;
    return 0;
}