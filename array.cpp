#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){ 
    string name = "Abhinav";
    cout << name << endl;

    int arr[5] = {4,6,2,8,1};

    cout<<arr[0]<<endl; // 4
    cout<<arr[3]<<endl; // 8

    cout<<sizeof(arr)<<endl; // 20 bytes (4 bytes each)
    cout<<sizeof(arr)/sizeof(int)<<endl; // 5 elements

    vector<int> v = {4,6,2,8,1};
    cout<<v[0]<<endl; // 4
    cout<<v[3]<<endl; // 8
cout<<v[0]<<endl;
cout<<"hello woorld";


    cout<<arr[0]<<endl; // 4
    cout<<arr[3]<<endl; // 8
    
    cout<<arr[0]<<endl; // 4
    cout<<arr[3]<<endl; // 8


    return 0;

}