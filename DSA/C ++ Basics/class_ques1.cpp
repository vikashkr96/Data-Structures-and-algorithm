///  input  aaabbc  => output a3b2c1


#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "aaabbc";
    int count = 1;
    int length = 6;
    for(int i=1;i<=length;i++){
        if(str[i] == str[i-1]){
            count++;
        }else{
            cout<<str[i-1]<<count;
            count=1;
        }
    }
    return 0;
}