#include<iostream>
#include<algorithm>
using namespace std;

pair<bool, int> findMajority(int *arr, int n){
    sort(arr, arr+n);
    int half = n/2;
    for(int i=0; i<half-1; i++){
        if(arr[i]==arr[i+half])
            return make_pair(true, arr[i]);
    }
    return make_pair(false,-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    pair<bool, int> maj;
    maj = findMajority(arr, n);
    if(maj.first)
        cout<<"majority element: "<<maj.second;
    else
        cout<<"Element don't exist";

    return 0;
}