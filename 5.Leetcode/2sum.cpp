#include <iostream>
#include <vector>
#include <utility>
using namespace std;

vector<int> twoSum(vector<int>& nums, int t) {
  int n = nums.size();
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    v.push_back({nums[i], i});
  }
  sort(v.begin(), v.end());
  int s = 0;
  int e = n - 1;
  while (s < e) {
    int sum = v[s].first + v[e].first;
    if (sum == t) {
      return {v[s].second, v[e].second};
    } else if (sum > t) {
      e--;
    } else {
      s++;
    }
  }
  return {-1, -1};
}

int main() {
  vector<int> nums = {2, 7, 11, 15};
  int t = 9;
  vector<int> result = twoSum(nums, t);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
  cout << endl;
  return 0;
}
