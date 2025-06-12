#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Datatype's
    //Integer
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<x<<endl;
    //Float
    float y;
    cout<<"Enter the value of y: ";
    cin>>y;
    cout<<y<<endl;
    //Double
    double z;
    cout<<"Enter the value of z: ";
    cin>>z;
    cout<<z<<endl;
    //String
    string s;
    cout<<"Enter your name: ";
    cin>>s;
    cout<<s<<endl;
    string s1,s2,s3;
    cout<<"Enter Name: "<<endl;
    cin>>s1>>s2>>s3;
    cout<<s1+" "+s2+" "+s3<<endl;
    string str;
    cout<<"Enter a sentence: "<<endl;
    cin.ignore(); // Clear the input buffer
    getline(cin,str);
    cout<<str;
    //Character
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    cout<<ch<<endl;
    //Boolean
    bool flag;
    cout<<"Enter true or false: ";
    cin>>flag;
    cout<<flag;
    return 0;
}