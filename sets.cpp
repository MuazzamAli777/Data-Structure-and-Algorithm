#include <iostream>
#include <set> 
#include <bits/stdc++.h> // STL
using namespace std;

int main() {
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(5); // Duplicate, will be ignored
    for (int x : s) {
        cout << x << " "; // Output: 1 3 5
    }
    cout << endl;
    cout << "Size of set: " << s.size() << endl; // Output: 3
    cout << "Find 3: " << (s.find(3) != s.end() ? "Found" : "Not Found") << endl; // Output: Found
    s.erase(3);
    cout << "Size after erasing 3: " << s.size() << endl; // Output: 2

    return 0;
}