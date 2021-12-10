#include <bits/stdc++.h>

using namespace std;

// Time Complexity O(nlog(n)), Space Complexity O(1)
vector<int> twoNumberSum(vector<int> nums, int target){
    sort(nums.begin(), nums.end());
    int left = 0, right = nums.size() - 1;
    while(left < right){
        int currentSum = nums[left] + nums[right];
        if(currentSum == target) return {nums[left], nums[right]}; // Base case

        if(currentSum < target){
            left++;
        } else{
            right++;
        }

    }
    return {};
}
// To Print Result [a, b], if null print []
void print(vector<int> nums){
    cout << "[";
    for(int i = 0; i < nums.size(); i++){
        cout << i;
        if(!i) cout << ", ";
    }
    cout << "]" << endl;
}

int main(){
    vector<int> nums;
    int n, num, target;
    cin >> n;
    while(n--){
        cin >> num;
        nums.push_back(num);
    }
    cin >> target;
    print(twoNumberSum(nums, target));
}