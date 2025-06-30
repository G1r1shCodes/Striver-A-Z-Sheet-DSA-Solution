#include<bits/stdc++.h>
#include<map>
using namespace std;

void explainMultimap()
{
    multimap<int,int>mmp;
    //Multimap is similar to map but with few different things
    //It can have duplicate keys
    //It can have multiple values for same key
    //All function Same as Map
    //O(logn)
    
}
void explainUnorderedmap()
{
    unordered_map<int,int>ump;
    //Unordered Map is same as map but only difference is it is not in sorted order
    //Implemented Using Hash Table 
    //Time complexity of operation is O(1), Worst case O(n)
    //All function Same as Map
}
int main()
{
    explainMultimap();
    explainUnorderedmap();
    return 0;
}