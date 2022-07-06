#include <iostream>
#include <vector>
using namespace std;
void subsetSum2(int i, vector<int>& arr, vector<int>& ds, vector<vector<int>>& ans) {
  ans.push_back(ds);
  for (int j = i; j < arr.size(); j++) {
    if (j != i && arr[j] == arr[j - 1]) {
      continue;
    }
    ds.push_back(arr[j]);
    subsetSum2(j + 1, arr, ds, ans);
    ds.pop_back();
  }
}
int main() {
  vector<int> arr{1, 2, 2, 3};
  sort(arr.begin(), arr.end());
  vector<int> ds;
  vector<vector<int>> ans;
  int i = 0;
  subsetSum2(i, arr, ds, ans);
  for (auto it : ans) {
    for (auto item : it) {
      cout << item << " ";
    }
    cout << endl;
  }
}