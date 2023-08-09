#include <bits/stdc++.h>

using namespace std ;
string rev(string a,int start,int end){
    if (start >= end) {
        return a;
    }
    
    swap(a[start], a[end]); // Swap characters at positions start and end
    return rev(a, start + 1, end - 1);
} 
    
int main(){
    // Write C++ code here
    string a="hello";
    string b=rev(a,0,a.length()-1);
    cout<<b;
    return 0;
}
