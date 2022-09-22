#include <iostream>
#include "sum.h"
using namespace std;
class Student {
public:
    string name;
    int subject_name[3];
    int subject_marks[3];
    int total;
    void enter_marks ()
    {
        for(int i=0; i<3; i++)
        {
            cout<<"enter subject name " << (i+1)<<endl;
            cin>>subject_name[i];
        }
    }
    void calculate_total()
    {

    }

};



int main()
{
    //Student obj;
    //obj.enter_marks();

int result =  multiply_int_wala(4,6);
cout<<result ;

    return 0;
}
