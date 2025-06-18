#include<bits/stdc++.h>
using namespace std;
//This function is used to explain how array is Pass by reference by default without even specifying Address

void ArraySomething(int ar[],int n)
{
    ar[0]+=100;
    cout<<"first element in function:"<<ar[0];
    
}
int main()
{
    int n=5;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Number"<<i<<":";
        cin>>arr[i];
    }
    ArraySomething(arr,n);
    cout<<"first element inside main"<<arr[0];
    return 0;
}