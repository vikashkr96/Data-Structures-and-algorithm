#include <iostream>
using namespace std;

int arrChanges(int arr[] , int size){
    for(int i=0 ; i<size; i++){
        arr[i]*=4;
    }
    
}

int main(){
    int arr[] = {2,4,3,8,5};
    arrChanges(arr,5);
    for(int i=0 ; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}