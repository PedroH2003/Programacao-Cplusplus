// FIZ NO LeetCode, então a resolução está la
// https://cp-algorithms.com/num_methods/binary_search.html

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++) cin >> nums[i];
    int target; cin >> target;

        vector<int> ans = {-1, -1};
        int ini = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int fim = upper_bound(nums.begin(), nums.end(), target) - nums.begin();

        if(fim - ini != 0){
            ans[0] = ini;
            ans[1] = fim-1;
        } 

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}
