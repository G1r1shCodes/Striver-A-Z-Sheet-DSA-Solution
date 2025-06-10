#include<iostream>
using namespace std;

class solution{ // class declaration Similar to Java
    public:
    void printNumber(){ //function similar to Method in Java
        int num;
        cin>>num;
        cout<<num;
    }
};

int main()
{
    solution obj;//object creation of the class similar to java
    obj.printNumber();//calling function using object name similar to java
}