#include <iostream>
using namespace std;
int main(){
    int a = 8 , b = 4;

    cout<<(a&b)<<endl; // bitwise AND 
    cout<<(a|b)<<endl;  // bitwise OR
    cout<<(a^b)<<endl;  // bitwise XOR
    cout<<(a<<b)<<endl;  // bitwise left shift
    cout<<(a>>b)<<endl;  // bitwise right shift 

    return 0;
}