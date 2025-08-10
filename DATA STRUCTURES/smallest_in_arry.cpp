#include <iostream>
#include <climits> // for INT_MAX

using namespace std;

int smallest_element(){
    int arr[6] = {5,25,24,8,-1,7};

    int smallest = INT_MAX;

    for(int i =0; i<6 ; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int main(){
    cout<<"smallest element is: "<<smallest_element()<<endl;
    return 0;
}

