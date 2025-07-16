#include<bits/stdc++.h>
using namespace std;

int sum(int N)
{
    if(N<1) return 0;
    
    return N+sum(N-1);


}
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    cout<<"The Sum is:"<<(sum(n));
    return 0;
}