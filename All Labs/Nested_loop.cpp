#include<iostream>
//The progtram illustrated nested while loop
using namespace std;
int main()
{
    int i=0, z=0;
    while (i<=5)
    {
        int j=0;
        while (j<=4)
        {
            z+=(i*j);
            ++j;
        }
        ++i;
    }
    cout<<"z="<<z;
}