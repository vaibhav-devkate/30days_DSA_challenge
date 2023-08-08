
// How do you check if two strings are anagrams of each other?

// String 1: "listen"
// String 2: "silent"
// Expected Output: True

// An anagram of a string is another string that uses the same characters, but the order of characters can be different


// String 1: "listen"
// String 2: "silent"
// Expected Output: True

// An anagram of a string is another string that uses the same characters, but the order of characters can be different



#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
   string s1="hello",s2="olleh";
   set<char> v1,v2;
   
   for(int i=0;i<s1.size();i++){
       v1.insert(s1[i]);
       
   }
      for(int i=0;i<s2.size();i++){
       v2.insert(s2[i]);
       
   }
   
   if(v1==v2)cout<<"anagrams";
   else cout<<"No Anagrams";
   

    return 0;
}
