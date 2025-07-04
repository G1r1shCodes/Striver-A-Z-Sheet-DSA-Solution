#include<bits/stdc++.h>
using namespace std;

//BruteForce
int CountDigit(int n)
{
    int Count=0;
    while(n!=0)
    {
        Count++;
        n=n/10;
    }
    return Count;


}
//Optimal
int countDigit(int n)
{
    int Count=(int)(log10(n)+1);
    return Count;
}
int main()
{
    int N;
    cout<<"Enter a Number:";
    cin>>N;
    int x=countDigit(N);
    cout<<"Number of digit:"<<x;
    return 0;
    

}