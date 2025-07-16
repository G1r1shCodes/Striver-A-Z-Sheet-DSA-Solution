#include<bits/stdc++.h>
using namespace std;

void Print1toN(int i,int n)
{
    if(i>n)
        return;
    cout<<i<<endl;
    Print1toN(i+1,n);
}

//By Backtracking
void Print1toNBT(int i,int n)
{
    if(i<1)
        return;
    Print1toNBT(i-1,n);
    cout<<i<<endl;
}

int main()
{
    int N;
    cin>>N;
    //Print1toN(1,N);
    Print1toNBT(N,N);
    return 0;
}