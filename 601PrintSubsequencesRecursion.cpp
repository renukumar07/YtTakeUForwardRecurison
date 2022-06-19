
#include <iostream>
#include <vector>
using namespace std;
void printSubSequence(int i, vector<int>& ds, int arr[], int n) {
  if (i == n) {
    cout << "The size = " << ds.size() << endl;
    for (auto it : ds) {
      cout << it << " ";
    }
    if (ds.size() == 0) {
      cout << "{}";
    }
    cout << endl;
    return;
  }
  // Take or pick the particular element into the subsequence
  cout << "The arr[" << i << "] =" << arr[i] << "ok" << endl;
  ds.push_back(arr[i]);
  printSubSequence(i + 1, ds, arr, n);
  ds.pop_back();

  // Not pick or not take condition, this element is not added to your subsequence
  printSubSequence(i + 1, ds, arr, n);
}
int main() {
  int arr[] = {3, 1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  vector<int> ds;
  printSubSequence(0, ds, arr, n);
}