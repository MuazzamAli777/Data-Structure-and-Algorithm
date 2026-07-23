#include <iostream>
#include <bits/stdc++.h> // STL
using namespace std;

void fun(int i, int n) {
    // base case
    if(i>n) return;

    cout << i << " ";
    // recursive call
    fun(i+1, n);
}

int main() {
    int n;
    cin >> n;

    // for(int i=1;i<=n;i++) {
    //     cout << i << " ";
    // }

    fun(1, n);

    return 0;
}