#include<bits/stdc++.h>
using namespace std;

void explainSets()
{
    //Set is a container that stores unique element in sorted order
    //Implemented using Balanced search tree( Red-Black Tree )
    set<int> s;
    s.insert(15);//{15}
    s.insert(10);//{10,15}
    s.insert(5);//{5,10,15}
    s.insert(25);//{5,10,15,25}
    s.insert(20);//{5,10,15,20,25}
    s.insert(20);//Repeated Value is not inserted must be unique
    //Other functions Like:swap(),empty(),begin(),end(),rbegin(),rend(),size() Can Be Used aswell

    auto it1=s.find(5);//Store Address of 5 in it1 or return iterator pointing 5
    auto it2=s.find(20);//Store Address of 20 in it2
    s.erase(25);//Delete 25 from set
    int Count=s.count(5);
    cout<<Count<<" ";
    // Can Delete Using address like vector
    s.erase(it1,it2);//[5,20) this removes {5,10,15} from set
    
    set<int>st={1,2,3,4,5,6};

    auto lb=st.lower_bound(4);// Give valye >= 4
    auto ub=st.upper_bound(4);// Give value > then 4

    cout<<"Lower Bound of 4:"<<*lb<<endl;
    cout<<"Upper Bound of 4:"<<*ub<<endl;
}
int main(){
    explainSets();
    return 0;

}
