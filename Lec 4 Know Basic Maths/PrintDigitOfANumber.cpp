#include<bits/stdc++.h>
using namespace std;


void PrintDigitOfANumber(int n)
{
    while(n!=0)
    {
        int digit=n%10;
        n=n/10;
        cout<<digit;
    }


}
int main()
{
    int N;
    cout<<"Enter a Number:";
    cin>>N;
    PrintDigitOfANumber(N);
    return 0;
    

}