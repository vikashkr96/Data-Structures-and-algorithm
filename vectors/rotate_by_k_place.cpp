#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& nums, int st, int end){
    while(st < end){
        int temp = nums[st];
        nums[st] = nums[end];
        nums[end] = temp;
        st++;
        end--;
    }
}
void rotate(vector<int>& nums, int k) {

    int n = nums.size();
    k = k % n;  // to handle cases when k >= n
    reverseArray( nums, 0, n-1 );
    reverseArray( nums, 0, k-1 );
    reverseArray( nums, k, n-1 );
}


int main(){
    vector <int> vec = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(vec,k);
    for(int num : vec){
        cout<<num<<endl;
    }

    return 0;
}