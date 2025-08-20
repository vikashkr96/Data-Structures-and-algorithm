#include <iostream>
#include <vector>
using namespace std;


vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ans(nums.size());
    for(int i = 0; i < nums.size() ; i++){
        int prod = 1;
        for(int j = 0; j < nums.size() ; j++){
            if(i != j){
                prod*=nums[j];
            }
        }
        ans[i] = prod;
    }
    return ans;
}

int main(){
    vector<int>nums = {1,2,3,4};
    vector<int>result = productExceptSelf(nums);

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}