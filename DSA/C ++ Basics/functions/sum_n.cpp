#include <iostream>
using namespace std;

int sumN(int n){
    int sum =0;
    for(int i =1; i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int result = sumN(20);
    cout<<"Sum is : "<<result;


    return 0;
}