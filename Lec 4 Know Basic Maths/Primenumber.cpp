#include<bits/stdc++.h>
using namespace std;

void Primenumber(int num)
{
    int count=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"Prime Number:"<<num;
    }
    else{
        cout<<"Not Prime:"<<num;
    }
}

//Optimal Approach
void Primenumber_O(int num)
{
    
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    Primenumber(n);
    return 0;
}