//Kth Largest Element in an Array
#include<bits/stdc++.h>
using namespace std;
int kth(int arr[10],int k,int n){

    sort(arr,arr+n);

    return arr[n-k];
}
int main(){
    int k;
    cout<<"Enter the value of k:";
    cin>>k;
    int arr[10]={10,4,3,2,6,8,9,7,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int a=kth(arr,k,n);
    cout<<a<<" is a"<<k<<"th largest element in array.";


}
