#include <iostream>
using namespace std;

int main() {
    Prime Number Check
    int num;
    int count = 0;
    cout << "Enter the number to check => prime or not! : ";
    cin >> num;

    if (num <= 1) {
        cout << "Enter numbers greater than 1 !" << endl;
    } else {
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                count += 1;
            }
        }
        if (count == 2) {
            cout << "It's a prime number." << endl;
        } else {
            cout << "It's not a prime number!" << endl;
        }
    }

    cout << "\nPattern 1: 10x10 stars\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPattern 2: Number block\n";
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "\nPattern 3: A to D characters\n";
    for (int i = 0; i < 4; i++) {
        char ch = 'A';
        for (int j = 0; j < 4; j++) {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }

    cout << "\nPattern 4: Increasing Numbers Grid\n";
    int number = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }

    cout << "\nPattern 5: Right Triangle with Stars\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nPattern 6: Repeating Row Numbers\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << (i + 1) << " ";
        }
        cout << endl;
    }

    cout << "\nPattern 7: Repeating Characters\n";
    char ch = 'A';
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << ch << " ";
        }
        ch += 1;
        cout << endl;
    }

    cout << "\n pattern 8: Repeating CharactersP\n";    
    int m = 4;
    for(int i =0 ; i<=m ; i++){
        for (int j =1; j< i+1 ;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout << "\nPattern 9:  reverse no triangle \n";
    int n = 4 ;
    for (int i = 0 ; i<= n-1 ; i++){
        for(int j = i+1; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout << "\nPattern 10: Floyds triangle \n";
    int nums = 4;
    int count = 1;
    for(int i =0 ; i<nums; i++){
        for(int j=1 ; j<=i+1 ; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    cout << "\nPattern 11: Floyds character like triangle \n";



    return 0;
}
