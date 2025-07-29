#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Precompute
    map<long,long>mpp;// or unordered map
    //the time complexity of the map data structure is O(log N) in the cases 
    //Where as the time complexity of the unordered map is O(1) in best and average case the only case where it is O(N) depends on the number of elements in the array
    //int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]+=1;
    }
    for(auto it:mpp)
    {
        cout<<it.first<<"-->"<<it.second<<endl;
    }
    int query;
    cin>>query;
    while(query--)
    {
        //fetch
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }
    return 0;
}