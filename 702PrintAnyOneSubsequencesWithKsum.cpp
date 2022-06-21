#include <iostream>
#include <vector>
using namespace std;
bool printOneSubSequenceWithKsum(int i, vector<int>& ds, int currentSum, int sum, int arr[], int n) {
  if (i == n) {
    // condition satisfied
    if (currentSum == sum) {
      for (auto it : ds) {
        cout << it << " ";
      }
      cout << endl;
      return true;
    }
    // condition not satisfied
    else
      return false;
  }
  ds.push_back(arr[i]);
  if (printOneSubSequenceWithKsum(i + 1, ds, currentSum + ds[ds.size() - 1], sum, arr, n) == true) {
    return true;
  }
  ds.pop_back();
  if (printOneSubSequenceWithKsum(i + 1, ds, currentSum, sum, arr, n) == true) {
    return true;
  }
  return false;
}
int main() {
  int arr[] = {1, 2, 1};
  int n = 3;
  int sum = 2;
  vector<int> ds;
  int i = 0;
  int initialSum = 0;
  printOneSubSequenceWithKsum(i, ds, initialSum, sum, arr, n);
}