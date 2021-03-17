#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

void display(int arr[], int n)
{
  cout<<"Sorted Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
     cout<<"Size:";
    cin>>n;
    int arr[n];
     cout<<"Array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  bubbleSort(arr,n);
  display(arr,n);  
  
    return 0;
} 
