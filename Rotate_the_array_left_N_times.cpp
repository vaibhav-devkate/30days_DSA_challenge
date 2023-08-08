//  Rotate the array left N times. Accept N value from the user.
//Test Case 1:
// Input:
// Array: [1, 2, 3, 4, 5]
// N = 2
// Expected Output: [3, 4, 5, 1, 2]

// Test Case 2:
// Input:
// Array: [10, 20, 30, 40, 50]
// N = 3
// Expected Output: [40, 50, 10, 20, 30]

// Test Case 3:
// Input:
// Array: [3, 6, 9, 12, 15]
// N = 4
// Expected Output: [15, 3, 6, 9, 12]

// Test Case 4:
// Input:
// Array: [5, 10, 15, 20, 25, 30]
// N = 1
// Expected Output: [10, 15, 20, 25, 30, 5]

// Test Case 5:
// Input:
// Array: [1, 2, 3, 4, 5, 6, 7]
// N = 7
// Expected Output: [1, 2, 3, 4, 5, 6, 7] (Same array after 7 rotations)

// Test Case 6:
// Input:
// Array: [8, 6, 4, 2, 0]
// N = 5
// Expected Output: [8, 6, 4, 2, 0] (Same array after 5 rotations)

// Test Case 7:
// Input:
// Array: [1, 3, 5, 7, 9]
// N = 0
// Expected Output: [1, 3, 5, 7, 9] (No rotation, same array)

// Test Case 8:
// Input:
// Array: [1, 2, 3, 4, 5, 6]
// N = 6
// Expected Output: [1, 2, 3, 4, 5, 6] (Same array after 6 rotations)

// Test Case 9:
// Input:
// Array: [2, 4, 6, 8]
// N = 1
// Expected Output: [4, 6, 8, 2]

// Test Case 10:
// Input:
// Array: [7, 5, 3, 1]
// N = 3
// Expected Output: [1, 7, 5, 3]






#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter value of n:";
cin>>n;
int arr[]={2,1,4,3};
int size=4;


   if (n >= 1 && n <= size - 1) {
        reverse(arr, arr + size - n);
        reverse(arr + size - n, arr + size);
        reverse(arr, arr + size);
   
        
    

      cout << "Modified array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Invalid value of n. It should be between 1 and " << size - 1 << "." << endl;
    }
    return 0;
    
    
    }
