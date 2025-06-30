#include<bits/stdc++.h>
#include<map>
using namespace std;

void explainMap()
{
    //Map is a Associative Container Stores in Key-Value Pair
    //Each key is unique 
    //Implemented by Red-black Tree
    //Stores in sorted order by key
    map<int, int>mp1;// Key-value pair {key,value}
    map<int,pair<int,int>>mp2;//{key,{val,val}}
    map<pair<int, int>,int>mp3;//{{key,key},val}

    mp1[1]=10;//Stores key-value pair {1,10}
    mp1[2]=20;// {2,20}
    mp1.emplace(3,30);//{3,30} Automatically takes key value Pair
    mp1.insert({4,40});//{4,40}
    for(auto it:mp1)
    {
        cout<<it.first<<" "<<it.second;
        cout<<endl;
    }
    //Above loop is eqivalent to this
    for (auto it = mp1.begin(); it != mp1.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }//shortcut to write (*it).first is it->first
    //To Print Value of a Key
    cout<<mp1[2]<<" ";
    cout<<mp1[3]<<" "<<endl;
    auto it=mp1.find(4);//Using find printing key-value
    cout<<it->first<<" "<<it->second<<endl;
    auto it_1=mp1.lower_bound(2);
    auto it_2=mp1.upper_bound(3);
    cout<<(*it_1).first<<" "<<it_1->second<<" ";
    cout<<(*it_2).first<<" "<<it_2->second<<endl;
}
int main()
{
    explainMap();
    return 0;
}