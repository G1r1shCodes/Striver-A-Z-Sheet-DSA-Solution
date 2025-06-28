#include<bits/stdc++.h>
using namespace std;

void explainDQ()
{
    deque<int> dq;
    dq.push_back(5);
    dq.push_back(5);
    dq.push_front(1);
    dq.emplace_front(0);
    dq.pop_front();
    dq.pop_back();
    //Rest function Are Same is Vectors
    //Like Begin,end,rend,rbegin,clear,insert,size,swap 
    //Deque is series of fixed array mapped using pointer
    //Fast front and end insertion/deletion
    //Slow in middle(Shift all elements)
    //Made of series of Fixed Array Mapped using pointer
    cout<<dq[0]<<" ";//Can use Indexing
    cout<<dq[1];


}
int main()
{
    explainDQ();
    return 0;
}
