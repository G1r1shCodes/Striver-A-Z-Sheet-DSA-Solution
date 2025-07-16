#include<bits/stdc++.h>
using namespace std;

void PrintName(int n)
{
    if(n<1) return;//Base Condition
    cout<<"Girsh Kumar Yadav"<<endl;
    PrintName(n-1);
}

int main()
{
    int num;
    cout<<"Enter Number of times you want to print Name:";
    cin>>num;
    PrintName(num);
    return 0;
}