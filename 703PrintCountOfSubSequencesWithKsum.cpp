#include <iostream>
#include <vector>
using namespace std;
int printCountOfSubSequencesWithKsum(int i, int currentSum, int sum, int arr[], int n) {
  if (i == n) {
    if (currentSum == sum) {
      return 1;
    }
    return 0;
  }
  int pickCount = printCountOfSubSequencesWithKsum(i + 1, currentSum + arr[i], sum, arr, n);
  int notPickCount = printCountOfSubSequencesWithKsum(i + 1, currentSum, sum, arr, n);
  return pickCount + notPickCount;
}
int main() {
  int arr[] = {1, 2, 1};
  int n = 3;
  int sum = 2;
  int i = 0;
  int initialSum = 0;
  int count = printCountOfSubSequencesWithKsum(i, initialSum, sum, arr, n);
  cout << count;
}