#include<bits/stdc++.h>
using namespace std;

void pattern01(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void pattern02(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void pattern03(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern04(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern05_01(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num-i+1;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void pattern05_02(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int j=num;j>=i;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void pattern06(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern07(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i*2-1;k++)
        {
            cout<<"*";
        }
        for(int l=1;l<=num-i;l++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern08(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*(num-i)+1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
//pattern 9 is pattern 7 & 8 combined
void pattern10(int num){
    for(int i=1;i<=2*num -1;i++)
    {
        int stars=i;
        if(i>num){

            stars=2*num-i;
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";

        }cout<<endl;
    }
}
void pattern11(int num){
    for(int i=0;i<num;i++)
    {
        int start=1;
        if(i%2==0)
        {
            start=1;
        }
        else{
            start=0;
        }
        for(int j=0;j<=i;j++)
        {
            cout<<start<<" ";
            start=1-start;
        }cout<<endl;

    }
}
void pattern12(int num){
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=2*(num-i);j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }

}
void pattern13(int num){
    int x=1;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<x<<" ";
            x+=1;
        }
        cout<<endl;
    }
}
void pattern14(int num){
    
    for(int i=1;i<=num;i++){
        char ch='A';
        for(int j=1;j<=i;j++){
            
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
}
void pattern16_01(int num){
    char ch='A';
    for(int i=1;i<=num;i++){
        ch++;
        for(int j=1;j<=i;j++){

            cout<<char(ch-1)<<" ";
            
        }
        cout<<endl;
    }
}
void pattern15(int num){
    for(int i=1;i<=num;i++){
        char ch='A';
        for(int j=1;j<=num-i+1;j++){
            cout<<ch<<" ";
            ch=ch+1;
            
        }
        cout<<endl;
    }
}
void pattern17(int num)
{
    for(int i=1;i<=num;i++)
    {
        char ch='A';
        int bp=(2*i-1)/2;
        for(int j=1;j<=num-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i*2-1;k++)
        {
            cout<<ch;
            if(k<=bp) ch++;
            else ch--;
        }
        cout<<endl;
    }
}
void pattern18(int num) {
    for (int i = 0; i < num; i++) {
        char start = 'E' - i;
        for (char ch = start; ch <= 'E'; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern21(int num){
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(i==0||i==num-1||j==0||j==num-1)
            {
                cout<<"*"<<" ";

            }
            else cout<<" "<<" ";
        }
        cout<<endl;
    }
}
void pattern19_01(int num){
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num-i+1;j++)
        {
            cout<<"*"<<" ";
        }
        for(int j=1;j<=2*(i-1);j++)
        {
            cout<<" "<<" ";
        }
        for(int j=1;j<=num-i+1;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        for(int j=1;j<=2*(num-i);j++)
        {
            cout<<" "<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }

        cout<<endl;
    }
}
void pattern20(int num){
    int spaces=2*num-2;
    for(int i=1;i<=2*num-1;i++)
    {
        int stars=i;
        if(i>num) stars=2*num-i;
        for(int j=1;j<=stars;j++)
        {
            cout<<"*"<<" ";
        }
        for(int j=1;j<=spaces;j++)
        {
            cout<<" "<<" ";
        }
        for(int j=1;j<=stars;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        if (i<num) spaces-=2;
        else spaces +=2;

    }
}
void pattern22(int num)
{
    for(int i=0;i<2*num-1;i++)
    {
        for(int j=0;j<2*num-1;j++)
        {
            int top=i;
            int left=j;
            int down=2*num-2-i;
            int right=2*num-2-j;
            cout<<(num-min(min(top,down),min(left,right)))<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter Value for n:";
    cin>>n;
    pattern01(n);
    pattern02(n);
    pattern03(n);
    pattern04(n);
    pattern05_01(n);
    pattern05_02(n);
    pattern06(n);
    pattern07(n);
    pattern08(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16_01(n);
    pattern17(n);
    pattern18(n);
    pattern21(n);
    pattern19_01(n);
    pattern20(n);
    pattern22(n);
    return 0;
}
