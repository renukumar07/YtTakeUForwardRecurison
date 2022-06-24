#include <iostream>
#include <vector>
using namespace std;
void findCombination(int i, vector<int>& ds, vector<int>& candidates, int target, vector<vector<int>>& ans) {
  if (i == candidates.size()) {
    if (target == 0) {
      for (auto it : ds) {
        cout << it << " ";
      }
      cout << endl;
      ans.push_back(ds);
    }
    return;
  }
  if (candidates[i] <= target) {
    ds.push_back(candidates[i]);
    findCombination(i, ds, candidates, target - candidates[i], ans);
    ds.pop_back();
  }
  findCombination(i + 1, ds, candidates, target, ans);
}
int main() {
  vector<int> candidates{2, 3, 4, 7};
  int target = 7;
  int i = 0;
  vector<int> ds;
  vector<vector<int>> ans;
  findCombination(i, ds, candidates, target, ans);
  cout << "In Main" << endl;
  for (auto subSequence : ans) {
    for (auto it : subSequence) {
      cout << it << " ";
    }
    cout << endl;
  }
}