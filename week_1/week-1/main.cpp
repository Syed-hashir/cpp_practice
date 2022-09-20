#include <iostream>
using namespace std;
int main()
{
    int limit;
    cout<<"enter the limit"<<endl;
    cin>> limit;

    string names[limit];

    for(int i=0; i<limit; i++)
    {
        cout<<"enter name"<< (i+1) <<endl;
        cin>>names[i];
    }

    cout<<"entered names"<<endl;
    for(int i=0; i<limit; i++)
    {
        cout<<names[i] <<endl;
    }

}
