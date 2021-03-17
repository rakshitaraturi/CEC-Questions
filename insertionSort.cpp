#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    int j,key;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key){
           arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        }

}
void display(int arr[], int n)
{
    cout<<"Sorted Array: ";
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
   insertionSort(arr,n);
   display(arr,n);
   
    return 0;
} 
