#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector <int> number={10,15,7,5,25};

    // for(int data:number)
    // {
    //     cout<<data<<" ";
    // }
    //1. add elements in vector 
    number.push_back(2);
    number.push_back(4);
    number.push_back(7);
    number.push_back(9);
    number.push_back(10);
    //2.Display vector elements 
    for(int data:number)
    {
        cout<<data<<" ";
    }
    cout<<endl;
    //3. size and capacity of vector
    cout<<"size:"<<number.size()<<endl;
    cout<<"capacity:"<<number.capacity()<<endl;

    //4. vector front and back element 
    cout<<"Front element:"<<number.front()<<endl;
    cout<<"Back element:"<<number.back()<<endl;
    
    //5. Vector begin and end method
    auto value_begin=number.begin();
    auto value_end=number.end();
    cout<<"Begin:"<<*(value_begin)<<endl;
    cout<<"End:"<<*(value_end-2)<<endl;

   //6.insert function to insert the element at particular location 
   number.insert(number.begin()+1,65);
   for(auto value:number)
   {
    cout<<value<<" ";
   }
   cout<<endl;

   number.insert(number.begin()+3,2,17);
   for(auto value:number)
   {
    cout<<value<<" ";
   }
   cout<<endl;
    //7.Erase method to delete the element vector
    number.erase(number.begin()+1,number.end()-2);
    cout<<"After erase vector elements:"<<endl;
    for(auto value:number)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    //8. at() element at particular index
    cout<<number.at(2);
     cout<<endl;
    //9. pop() remove the elmenets from last
    number.pop_back();
    for(auto value:number)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    //10. clear function 
    cout<<"Before clear vector size:"<<number.size()<<endl;
    number.clear();
    cout<<"After clear vector size:"<<number.size()<<endl;
      return 0;
}