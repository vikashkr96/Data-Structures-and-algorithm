#include <iostream>
using namespace std;

int main(){
    char char1 ='s';
    if(char1>='a' && char1<='z'){
        cout<<char1<<" is lower case";
    }else{
        cout<<char1<<" is upper case";
    }

    // ternary operators 
    int num = 23;
    cout(num>= 0 ? "Positive" : "negstive")<< endl;
    return 0;
}