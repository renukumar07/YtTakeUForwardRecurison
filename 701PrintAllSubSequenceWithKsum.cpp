#include <iostream>
#include <vector>
using namespace std;
void printAllSubSequenceWithKsum(int i, vector<int>& ds, int currentSum, int sum, int arr[], int n) {
  if (i == n) {
    if (currentSum == sum) {
      for (auto it : ds) {
        cout << it << " ";
      }
      cout << endl;
    }
    return;
  }
  ds.push_back(arr[i]);
  printAllSubSequenceWithKsum(i + 1, ds, currentSum + ds[ds.size() - 1], sum, arr, n);
  ds.pop_back();
  printAllSubSequenceWithKsum(i + 1, ds, currentSum, sum, arr, n);
}
int main() {
  int arr[] = {1, 2, 1};
  int n = 3;
  int sum = 2;
  vector<int> ds;
  int i = 0;
  int initialSum = 0;
  printAllSubSequenceWithKsum(i, ds, initialSum, sum, arr, n);
}