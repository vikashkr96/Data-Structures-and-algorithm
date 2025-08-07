#include <iostream>
using namespace std;

int binTOdec(int bin_num){
    int ans = 0, pow = 1; // i.e:- 2^0

    while(bin_num > 0){
        int rem = bin_num % 10;
        
        ans += (rem*pow);
        bin_num /= 10;
        pow *= 2;
    }
    return ans;
}

int main(){
    int dec_num = binTOdec(101010);
    cout<<"In decimal number system the no. is : "<<dec_num;
    return 0;
}
