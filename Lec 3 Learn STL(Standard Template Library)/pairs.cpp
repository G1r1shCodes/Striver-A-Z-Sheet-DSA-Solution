#include<bits/stdc++.h>
using namespace std;

void explainpairs()
{
    pair<int,int>p1={1,2};
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int ,pair<int ,int>>p2={1,{2,3}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
    pair<int ,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].first<<" "<<arr[2].second;

}
int main()
{
    explainpairs();
    return 0;
}
