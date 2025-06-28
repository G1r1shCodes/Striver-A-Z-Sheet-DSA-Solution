#include<bits/stdc++.h>
using namespace std;

void explainQueue()
{
    //Similar to Stack, Queue is also a Container adapter made using another Container, Default is Deque
    //Queue is FIFO-First In First Out
    queue<int>q;
    q.push(1);
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.back()+=7;
    cout<<q.back()<<" ";
    cout<<q.front()<<" ";
    q.pop();//Unlike stack first Element is Deleted Because of FIFO
    q.pop();
    cout<<q.front();
    //Size and swap same as stack
    //New is back,front,FIFO(pop)


}
int main()
{
    explainQueue();
    return 0;
}
