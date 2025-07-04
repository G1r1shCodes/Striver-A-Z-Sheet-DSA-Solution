#include<bits/stdc++.h>
using namespace std;

int reversenum(int n)
{
    int revNum=0;
    while(n!=0)
    {
        int lastdigit=n%10;
        revNum=revNum*10+lastdigit;
        
        n=n/10;
    }
    return revNum;


}
int main()
{
    int N;
    cout<<"Enter a Number:";
    cin>>N;
    int x=reversenum(N);
    cout<<"Reversed Number:"<<x;
    return 0;
    

}