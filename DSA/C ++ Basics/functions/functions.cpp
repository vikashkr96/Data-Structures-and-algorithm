#include <iostream>
using namespace std;


int minOfTwo(double a,double8 b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int main(){
    double result = minOfTwo(10.887,45);
    cout<<"The min result is: "<<result;

    return 0;
}