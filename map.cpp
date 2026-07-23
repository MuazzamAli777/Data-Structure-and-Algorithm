#include <iostream>
#include <map> 
#include <bits/stdc++.h> // STL
using namespace std;

int main() {
    int arr[10] = {3,7,2,3,2,1,5,6,7,3};
    // map<int,int> freq;
    unordered_map<int,int> freq; // faster than map

    for(int i=0; i<10; i++){
        freq[arr[i]]++;
    }

    cout<<freq[1]<<endl; // 1 is present 1 time

    for(auto it: freq){
        cout<<it.first<<" is present "<<it.second<<" times"<<endl;
    }

    return 0;
}