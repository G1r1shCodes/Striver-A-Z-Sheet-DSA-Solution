#include <bits/stdc++.h>
using namespace std;

void explainVectors()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << v[0] << " " << v[1] << endl;
    vector<int> v1(5, 10);
    vector<int> v2(10); // Declare a vector with 10 Garbage Value/Zero's depend on compiler
    vector<int> v3(v1); // Copy Vector V1 into V3
    vector<int> v4 = {1, 2, 3, 4, 5};
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
        cout << endl;
    }
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2); // Automatically take it as a pair

    // Iterator Declaration
    vector<int> vect = {10, 20, 30, 40, 50};
    vector<int>::iterator it1 = vect.begin();
    cout << *(it1) << " ";
    it1++;
    cout << *(it1) << " ";
    it1 = it1 + 2;
    cout << *(it1) << " " << endl;
    cout << vect.back() << endl; // for printing last element
    vector<int>::iterator it2 = vect.end();
    for (vector<int>::iterator it3 = vect.begin(); it3 != vect.end(); it3++)
    {
        cout << (*it3) << " ";
    }
    cout << endl;
    for (auto it3 = vect.begin(); it3 != vect.end(); it3++)
    {
        cout << (*it3) << " ";
    }
    cout << endl;
    for (auto x : vect)
    {
        cout << x << " ";
    }
    cout << endl;
    // Erase element in vector
    vect.erase(vect.begin());
    vect.erase(vect.begin() + 2, vect.begin() + 4);
    for (auto x : vect)
    {
        cout << x << " ";
    }
    cout << endl;
    // Insert element in vector
    vector<int> v10(3, 10);
    v10.insert(v10.begin(), 5);
    v10.insert(v10.begin() + 1, 2, 6); // Put 2 times 6 after first element in vector
    for (auto x : v10)
    {
        cout << x << " ";
    }
    cout << endl;
    vector<int> v11(5, 14);
    v10.insert(v10.begin(), v11.begin(), v11.end());
    for (auto x : v10)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << v10.size() << endl; // Size of Vector
    // Pop:Remove last element from Vector
    // Syntax
    v10.pop_back(); // Remove last 10 from vector
    vector<int> v01 = {10, 20, 30};
    vector<int> v02 = {1, 2, 3};
    v01.swap(v02);
    for (auto x : v01)
    {
        cout << x << " ";
    }
    cout << endl;
    // Clear-Remove all element in vector/Make vector empty
    v10.clear();
    cout << v10[0] << endl;
    if (!v10.empty())
    {
        cout << v10[0] << endl;
    }
    else
    {
        cout << "Vector is empty!" << endl;
    }
}
int main()
{
    explainVectors();
    return 0;
}
