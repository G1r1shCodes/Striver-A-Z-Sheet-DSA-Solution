#include<bits/stdc++.h>
using namespace std;

void explainLists()
{
    list<int>ls;
    ls.push_back(3);
    ls.emplace_back(4);
    ls.push_front(2);
    ls.emplace_front(1);
    list<int>::iterator it=ls.begin();
    for(auto x:ls)
    {
        cout<<x<<" ";

    }cout<<endl;
    for( auto it=ls.begin();it!=ls.end();it++ )
    {
        cout<<*(it)<<" ";

    }cout<<endl;
    //Rest function Are Same is Vectors
    //Like Begin,end,rend,rbegin,clear,insert,size,swap 

}
int main()
{
    explainLists();
    return 0;
}
