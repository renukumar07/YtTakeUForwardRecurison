#include <iostream>
#include <vector>
using namespace std;
void reverseArray(vector<int>& arr, int left, int right) {
  if (left >= right) {
    return;
  }
  int temp = arr[left];
  arr[left] = arr[right];
  arr[right] = temp;
  reverseArray(arr, left + 1, right - 1);
}
int main() {
  vector<int> arr{1, 2, 3, 4, 5};
  reverseArray(arr, 0, arr.size() - 1);
  for (auto element : arr) {
    cout << element << " ";
  }
  cout << endl;
}