#include<bits/stdc++.h>
using namespace std;

int GCDofnumber(int num1,int num2)
{
    int GCD=0;
    for(int i=1;i<=min(num1,num2);i++)
    {
        if(num1%i==0 &&num2%i==0 )
        {
           GCD=i; 
        }
    }
    return GCD;
    
}
//More optimal is Euclidean Algorithm Approach

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int GCD=GCDofnumber(n1,n2);
    cout<<"The GCD of n1:"<<n1<<" & n2:"<<n2<<" is :"<<GCD;
    return 0;
}