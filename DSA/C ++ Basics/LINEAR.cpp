#include <iostream>
using namespace std;

int Linear_search(int target){
    int arr [6] = {2,4,7,9,6,8};
    
    for(int i =0; i< 6; i++){
        if(arr[i] == target){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int result = Linear_search(n);
    cout<< "Found "<<result;
    return 0;
}







