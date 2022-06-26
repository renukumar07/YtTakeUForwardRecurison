#include <iostream>
#include <vector>
using namespace std;
void combinationSum2(int ind, int target, vector<int>& candidates, vector<vector<int>>& ans, vector<int>& ds) {
  if (target == 0) {
    ans.push_back(ds);
    return;
  }
  for (int i = ind; i < candidates.size(); i++) {
    if (i > ind && candidates[i] == candidates[i - 1]) continue;
    if (candidates[i] > target) return;
    ds.push_back(candidates[i]);
    combinationSum2(i + 1, target - candidates[i], candidates, ans, ds);
    ds.pop_back();
  }
}
int main() {
  vector<int> candidates{1, 2, 1, 2, 1};
  int target = 4;
  sort(candidates.begin(), candidates.end());
  vector<vector<int>> ans;
  int ind = 0;
  vector<int> ds;
  combinationSum2(ind, target, candidates, ans, ds);
  for (auto it : ans) {
    for (auto jt : it) {
      cout << jt << " ";
    }
    cout << endl;
  }
}