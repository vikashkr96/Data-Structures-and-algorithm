#include <iostream>
using namespace std;

// QUES 1 . WAP to calculate the sum and product of all elements in an array 

// Function to calculate sum
int sum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

// Function to calculate product
int multiple(int arr[], int size) {
    int mul = 1;
    for (int i = 0; i < size; i++) {
        mul *= arr[i];
    }
    return mul;
}

int main() {
    int arr[] = {2, 4, 6, 9, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int Sum = sum(arr, size);
    cout << "Sum = " << Sum << endl;

    int Mul = multiple(arr, size);
    cout << "Product = " << Mul << endl;

    return 0;
}


// QUES 3. WAF to return all unique value of an array 
// QUES 4. WAF tio print intersection of an array    