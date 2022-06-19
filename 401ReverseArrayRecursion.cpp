#include <iostream>
#include <vector>
using namespace std;
vector<int> reverseArray(vector<int>& arr, int left, int right) {
  if (left >= right) {
    return arr;
  }
  int temp = arr[left];
  arr[left] = arr[right];
  arr[right] = temp;
  return reverseArray(arr, left + 1, right - 1);
}
int main() {
  vector<int> arr{1, 2, 3, 4, 5};
  vector<int> reverseArr = reverseArray(arr, 0, arr.size() - 1);
  for (auto element : reverseArr) {
    cout << element << " ";
  }
  cout << endl;
}