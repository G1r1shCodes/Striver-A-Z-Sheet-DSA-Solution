#include<bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks: "<<endl;
    cin>>marks;
    if(marks>=90)
    {
        cout<<"Grade:A"<<endl;
    }
    else if(marks<90&&marks>=70)
    {
        cout<<"Grade:B"<<endl;
    }
    else if(marks<70&&marks>=50)
    {
        cout<<"Grade:C"<<endl;
    }
    else if(marks<50&&marks>=35)
    {
        cout<<"Grade:D"<<endl;
    }
    else
    {
        cout<<"Failed (eww)"<<endl;
    }
}