#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n)
{   
    static int i=0;//initialised once and retains its value (not destroyed after function ends)
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    i++;
    reverse(arr,n);
}
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,N);
    cout << "Reversed array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}