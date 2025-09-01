#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int>&arr, int m , int n , int maxAllowedPages){
    int stu = 1, pages = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }
        if(pages+arr[i] <= maxAllowedPages){
            pages+= arr[i];
        }else{
            stu++;
            pages = arr[i];
        }
    }
    if(stu > m){
        return false;
    }else{
        return true;
    }
}

int allocateBooks(vector<int>&arr , int n , int m){
    if(m > n ){
        return -1;
    }
    int sum =0;
    for(int i =0; i< n ; i++){
        sum += arr[i];
    }

    int ans = -1 , st = 0 , end = sum;

    while(st < end){
        int mid = st + (end-st)/2;

        if(isValid(arr,  m , n , mid) ){
            ans = mid;
            end = mid-1;
        }else{
            st = mid +1;
        }
    }
    return ans ;
}

int main(){
    vector<int> vec = {2,1,3,4};
    int m = 2, n = 4;
    cout<<allocateBooks(vec,n,m);
    return 0;
}