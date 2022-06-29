#include <iostream>
#include <vector>
using namespace std;
void subsetSum1(int i, int sum, vector<int> arr, vector<int>& sumArray) {
  if (i == arr.size()) {
    sumArray.push_back(sum);
    return;
  }
  subsetSum1(i + 1, sum + arr[i], arr, sumArray);
  subsetSum1(i + 1, sum, arr, sumArray);
}
int main() {
  vector<int> arr{3, 1, 2};
  int i = 0;
  int sum = 0;
  vector<int> sumArray;
  subsetSum1(i, sum, arr, sumArray);
  sort(sumArray.begin(), sumArray.end());
  for (auto it : sumArray) {
    cout << it << " ";
  }
}