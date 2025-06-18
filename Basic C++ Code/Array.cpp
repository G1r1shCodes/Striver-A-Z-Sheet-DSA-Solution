#include<bits/stdc++.h>
using namespace std;

int main() {
    // Declare an array of integers
    int arr[5] = {1, 2, 3, 4, 5};
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    // Print the elements of the array
    for (int i = 0; i < 3; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    // Print the size of the array
    cout << "Size of array: " << sizeof(arr) / sizeof(arr[0]) << endl;
    //2D array
    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // Print the elements of the 2D array
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    // Print the size of the 2D array
    cout << "Size of 2D array: " << sizeof(b) / sizeof(b[0][0]) << endl;
    //String array
    string c="Hello World";
    cout<<c[0];
    cout<<c[1]<<endl;
    int len=c.size();
    cout<<len<<endl;
    int g[4];
    for(int i = 0; i < 4; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> g[i];
    }
    return 0;
}