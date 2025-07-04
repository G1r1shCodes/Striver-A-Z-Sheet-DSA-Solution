#include<bits/stdc++.h>
using namespace std;

int ArmstrongNum(int n)
{
    int x=n;
    int sum=0;
    while(x!=0)
    {
        int ld=x%10;
        sum=sum+(ld*ld*ld);
        x=x/10;
    }
    return sum;


}
int main()
{
    int N;
    cout<<"Enter a Number:";
    cin>>N;
    int x=ArmstrongNum(N);
    if(N==x)
    {
        cout<<"It is a Armstrong Number";
    }
    else{
        cout<<"It is not a Armstrong Number";
    }
    return 0;
}