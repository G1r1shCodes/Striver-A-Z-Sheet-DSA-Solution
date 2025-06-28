#include<bits/stdc++.h>
using namespace std;

void explainQueue()
{
    //Similar to Stack,Queue Priority Queue is also a Container adapter made using another Container, Default is vector with heap (min/max) similar to tree having nodes 
    //Priority Queue Highest priority element (largest) by default is at top[Max Heap]
    priority_queue<int>pq;//or priority_queue<int, vector<int>, less<int>>pq;
    pq.push(10);
    pq.push(5);
    pq.push(25);
    pq.emplace(15);
    cout<<pq.top()<<" "; //Prints 25(Largest)
    pq.pop(); //Delete Highest Priority Element(25)
    cout<<pq.top()<<" ";

    //Creating Min-Heap
    priority_queue<int, vector<int>, greater<int>>minpq;
    minpq.push(10);
    minpq.push(5);
    minpq.push(25);
    minpq.emplace(10);
    cout<<minpq.top();//Prints 5
    minpq.pop();// Delete 5 (Smallest top element)

}
int main()
{
    explainQueue();
    return 0;
}
