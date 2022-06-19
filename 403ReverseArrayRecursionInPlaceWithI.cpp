#include <iostream>
#include <vector>
using namespace std;
void reverseArray(vector<int>& arr, int i, int n) {
  if (i >= n / 2) {
    return;
  }
  int temp = arr[i];
  arr[i] = arr[n - i - 1];
  arr[n - i - 1] = temp;
  reverseArray(arr, i + 1, n);
}
int main() {
  vector<int> arr{1, 2, 3, 4, 5};
  reverseArray(arr, 0, arr.size());
  for (auto element : arr) {
    cout << element << " ";
  }
  cout << endl;
}