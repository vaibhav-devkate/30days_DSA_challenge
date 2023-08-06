#include<iostream>
using namespace std;
int main(){

   int arr[]={10, 3, 6, 8, 2, 1};
   int n=sizeof(arr)/sizeof(arr[0]);
   int max=arr[0],min=arr[0];
   for(int i=0;i<n;i++){
    if(arr[i]<min){
    min=arr[i];
}
    if(arr[i]>max){
    max=arr[i];
}
   }

cout<<"min : "<<min<<endl<<"max : "<<max;

    return 0;
}
