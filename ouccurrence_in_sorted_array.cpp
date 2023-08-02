#include<bits/stdc++.h>
using namespace std;
int ouccur(int arr[10],int n,int x){

    int count = 0;
    for (int i=0; i < n; i++)
        if (arr[i] == x)
            count++;
    return count;
}
int main(){
    int x;
    cout<<"Enter the value of x:";
    cin>>x;
    int arr[10]={10,4,3,2,6,8,9,7,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int a=ouccur(arr,n,x);
    cout<<a<<" occurrs"<<x<<"th time in array.";


}
