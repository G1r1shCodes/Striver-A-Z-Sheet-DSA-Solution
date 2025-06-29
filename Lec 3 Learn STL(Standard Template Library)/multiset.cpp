#include <bits/stdc++.h>
using namespace std;

void explainMultiSet()
{
    multiset<int> ms;
    // Implemented Using Self-Balancing BST
    // Allows Duplicates
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    int Count = ms.count(1);
    cout << Count << " ";
    ms.erase(1); // Deletes all 1's
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    // Erase using iterator
    ms.erase(ms.find(1));
    
    // Correct way to erase a range
    auto it = ms.find(1);
    if (it != ms.end()) {
        auto it2 = next(it, 2); // Advance the iterator by 2 positions
        ms.erase(it, it2); // [start, stop) Ranged Erase Also Works
    }
}

int main()
{
    explainMultiSet();
    return 0;
}
