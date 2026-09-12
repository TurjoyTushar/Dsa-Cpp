#include <bits/stdc++.h>
using namespace std;

// Recursive function to input array elements
void input(int i, vector<int>& nums) {
    if (i < 0) return;
    input(i - 1, nums);
    cin >> nums[i];
}

// Recursive function to print a subsequence
void print(int i, vector<int>& ans) {
    if (i < 0) {
        cout << endl;
        return;
    }
    print(i - 1, ans); // print previous elements first
    cout << ans[i] << " ";
}

// Recursive function to generate all subsequences
void sub(int i, vector<int>& nums, vector<int>& ans, int n) {
    if (i >= n) {
        print(ans.size() - 1, ans); // fully recursive print
        return;
    }

    // Include nums[i]
    ans.push_back(nums[i]);
    sub(i + 1, nums, ans, n);

    // Exclude nums[i]
    ans.pop_back();
    sub(i + 1, nums, ans, n);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n); // resize the vector
    input(n - 1, nums);  // recursive input

    vector<int> ans;
    sub(0, nums, ans, n); // generate all subsequences

    return 0;
}
