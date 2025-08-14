#include <iostream>
#include <climits>
using namespace std;

// kadane's algorithm to find max subarray sum .......
int main (){
    int currSum = 0 ;
    int maxSum = INT_MIN ;
    int arr [] = {1,-2,3,4,-5};
    int n =  5 ; // size 

    for(int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(currSum , maxSum);
        if(currSum < 0){
            currSum = 0 ;
        }
    }
    cout<<maxSum;
}
