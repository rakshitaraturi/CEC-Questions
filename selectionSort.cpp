#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    int min,pos;
     for(int i=0;i<n-1;i++){
        min=arr[i];
        pos=i;
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                pos=j;
            }
        }
         swap(arr[i],arr[pos]);
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
   selectionSort(arr,n);
   display(arr,n);
   
    return 0;
} 
