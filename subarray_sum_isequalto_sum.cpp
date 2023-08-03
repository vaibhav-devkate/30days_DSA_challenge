
#include <iostream>
#include <vector>

using namespace std;

vector<int> find_subarray_with_sum(vector<int> arr, int sum) {
  int start = 0;
  int end = 0;
  int curr_sum = 0;
  vector<int> subarray;
  bool found = false;

  while (end < arr.size()) {
    if (curr_sum == sum) {
      found = true;
      break;
    } else if (curr_sum < sum) {
      curr_sum += arr[end];
      end++;
    } else {
      curr_sum -= arr[start];
      start++;
    }
  }

  if (found) {
    subarray.assign(arr.begin() + start, arr.begin() + end);
  }

  return subarray;
}

int main() {
  vector<int> arr = {5,10,20,30,40};
  int sum = 100;
  vector<int> subarray = find_subarray_with_sum(arr, sum);
  cout << "The subarray with sum " << sum << " is : ";
  for (int i = 0; i < subarray.size(); i++) {
    cout << subarray[i] << " ";
  }
  cout << endl;

  return 0;
}