#include <iostream>
#include <climits> // for INT_MAX

using namespace std;

int largest_element(){
    int arr[8] = {3,6,2,87,69,45,34,65};

    int largest = -INT_MAX;

    for(int i=0; i<6 ; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}


int main(){
    cout<<"Largest element is: "<<largest_element()<<endl;
    return 0;
}