#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int x=n;
    int revNum=0;
    while(x!=0)
    {
        int lastdigit=x%10;
        revNum=revNum*10+lastdigit;
        
        x=x/10;
    }
    if(revNum==n){
        return true;
    }
    else{
        return false;
    }


}
int main()
{
    int N;
    cout<<"Enter a Number:";
    cin>>N;
    bool x=palindrome(N);
    if(x==1)
    {
        cout<<"It is a Palindrome Number";
    }
    else if(x==0){
        cout<<"It is not a Palindrome Number";
    }
    return 0;
    

}