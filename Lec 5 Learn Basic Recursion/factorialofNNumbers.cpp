#include<bits/stdc++.h>
using namespace std;

int fact(int N)
{
    if(N==1||N==0) return 1;
    
    return N*fact(N-1);


}
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    cout<<"The Factorial of "<<n<<" is :"<<(fact(n));
    return 0;
}