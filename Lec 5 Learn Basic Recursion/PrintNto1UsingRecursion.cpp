#include<bits/stdc++.h>
using namespace std;

void PrintNum(int i,int n)
{
    if(i<1) return;//Base Condition
    cout<<i<<endl;
    PrintNum(i-1,n);
}
//Using Backtracking 
void PrintNumBT(int i,int n)
{
    if(i>n) return;//Base Condition
    PrintNumBT(i+1,n);
    cout<<i<<endl;
}
int main()
{
    int num;
    cout<<"Enter Number:";
    cin>>num;
    //PrintNum(1,num);
    PrintNumBT(1,num);
    return 0;
}