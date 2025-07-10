#include<bits/stdc++.h>
using namespace std;

void recursion(int count)
{
    //Base condition
    if(count==4)
    {
        return;
    }
    cout<<count;
    recursion(count+1);

}
int main()
{
    recursion(0);
}