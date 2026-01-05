#include <iostream>
using namespace std;

void binaryToDecimal(int bin){
    int n = bin;
    int ans =0;
    int pow = 1;

    while(n > 0){
    int rem = n % 10;
    ans += (rem * pow);
    pow *= 2;
    n = n/10;
    }

    cout<< ans << endl;
}

int main(){
    int bin = 1010;
    binaryToDecimal(bin);
    return 0;
}
