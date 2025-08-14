#include <iostream>
#include <climits>    // INT_MIN
#include <algorithm>  // std::max
using namespace std;

// to print all possible subarrays in an array
void possibleSubarray(){

    int arr [] = {1,2,3,4,5};
    int n =  5 ; // size 
    for(int st = 0 ; st < n; st++){
        for(int end = st ; end < n ; end++){
            for(int i = st; i <= end ; i++ ){
                cout<<arr[i]<<" ";
            }
            cout<<"    ";
        }
        cout<<endl;
    }
}

// Brute Force approach to calculate the maximum subarray sum
int maxSumByBruteForce() {
    int arr[] = {2,-3,4,5};
    int n = 4;

    int maxSum = INT_MIN;
    for(int st = 0; st < n; st++){
        int currentSum = 0;
        for(int end = st ; end < n ; end ++){
            currentSum += arr[end];
            maxSum = max(currentSum , maxSum);
        }
    }
    return maxSum;
}




int main(){
    cout<<"to print all possible subarrays in an array......"<<endl;
    possibleSubarray(); 

    cout<<"Brute Force approach to calculate the maximum subarray sum.......";
    int result = maxSumByBruteForce();
    cout<<result;


    return 0;
}