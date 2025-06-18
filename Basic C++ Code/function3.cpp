#include<iostream>
using namespace std;
void function(int n){
    cout<<n<<endl;
    n+=5;
    cout<<n<<endl;
    n*=2;
    cout<<n<<endl;
    

}
int main(){
    int num;
    cin>>num;
    function(num);
    cout<<num<<endl;
    // It should print 30 But it prints 10 Because the value which is 30 is copy of the integer num and not actually num itself.
    //Pass By Value

    return 0;
}