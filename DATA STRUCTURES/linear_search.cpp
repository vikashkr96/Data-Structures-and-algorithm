#include <iostream>
using namespace std;
// approach through pass by reference ..........   
int linearSearch(int arr[] , int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main() {
    int arrr[] = {2, 4, 7, 8, 13, 45, 23, 32, 43, 65, 9};
    int size = 11;
    int target = 45;
    
    int result = linearSearch(arrr, size, target);
    
    if (result != -1)
        cout <<target<< " is found at index " << result<< endl;
    else
        cout << "Not found " << endl;

    return 0;
}