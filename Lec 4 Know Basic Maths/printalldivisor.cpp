#include<bits/stdc++.h>
using namespace std;
//BruteForce
int Printalldivisor_1(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i;
            cout<<endl;
        }
        
    }
    cout<<endl;

}
//Time Complexity O(N)
//Optimal Approach
int Printalldivisor_2(int n)
{
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<i;
            if((n/i)!=i)
            {
                cout<<(n/i);
            }
            cout<<endl;
            
        }
    }
    cout<<endl;
}
int main()
{
    int num;
    cin>>num;
    Printalldivisor_1(num);
    Printalldivisor_2(num);
    return 0;
}
