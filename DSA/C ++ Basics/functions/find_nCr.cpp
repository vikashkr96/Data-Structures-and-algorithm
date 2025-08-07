#include <iostream>
using namespace std;
// find the nCr of any number !
int factorial(int n){
    int fact = 1;
    for(int i=1;  i<=n ; i++){
        fact *= i;
    }
    return fact;
}


int nCr(int n , int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r);
    return fact_n/(fact_r*fact_n_r);
}

int main(){
    int n = 6, r = 2;
    double result = nCr(n,r);
    cout<< result;
    return 0; 
}