#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1, pair<int,int> p2) {
    if (p1.second < p2.second)
        return true;  // keep as is
    else if (p1.second == p2.second) {
        if (p1.first > p2.first)
            return true;  // p1 comes first because first is greater
        return false;     // otherwise, p2 comes first
    }
    return false;  // default: p2.second < p1.second, so p2 comes first
}
void explainAlgorithms()
{
    //Sorting
    int arr[]={4,9,3,2,1,5,7,10,25,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int x:arr)
    {
        cout<<x<<" ";
    }cout<<endl;
    //Vector
    vector<int>v1={5,2,1,3,4};
    sort(v1.begin(),v1.end());
    for(int x:v1)
    {
        cout<<x<<" ";
    }cout<<endl;
    //Descending Order
    sort(arr,arr+n,greater<int>());//Built in function for descending array
    //Use paranthesis
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    //Creating Your Own Comparator
    //sort according to second element
    //if second element is same then sort it according to first element in descending order
    vector<pair<int,int>> _arr = {{3, 2}, {1, 2}, {5, 1}, {4, 3}};
    sort(_arr.begin(), _arr.end(), comp);
    for(auto x:_arr)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    //popcount
    //Count number of set bit(1) in a number
    int num=7;
    int count = __builtin_popcount(num);
    cout<<count<<endl;
    long long _num=124435345341543;
    int Count = __builtin_popcount(_num);
    cout<<Count<<endl;
    //Permutation
    string s="1234";
    do{
        cout<<s<<endl;
    }while (next_permutation(s.begin(),s.end()));
    //sort the permutation if you want all permutations
    //min & max
    int _max=*max_element(arr,arr+n);
    int _min=*min_element(arr,arr+n);
    cout<<_max<<endl;
    cout<<_min<<endl;
}
int main()
{
    explainAlgorithms();
    return 0;
}