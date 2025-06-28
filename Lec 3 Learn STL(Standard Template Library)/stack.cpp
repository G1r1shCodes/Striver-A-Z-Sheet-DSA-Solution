#include<bits/stdc++.h>
using namespace std;

void explainStack()
{
    //Stack is Container Adapter(Made using Another Container)
    //By Default Stack is made of Deque But Restricted 
    //No Indexing ,No Back Insertion/Deletion Only Inserted into top of stack
    //Stack function are push,pop,size,swap,top,empty
    //All stack operation are O(1) Time Complexity
    stack<int> st;
    st.push(1);
    st.push(2);
    st.emplace(3);
    st.pop();//Removed Top Element of Stack L-I-F-O
    cout<<st.top()<<" ";//Print top element of stack
    cout<<st.empty();// 1 Mean True & 0 Means False
    //there is st.swap also using 2 stack's
}
int main()
{
    explainStack();
    return 0;
}
