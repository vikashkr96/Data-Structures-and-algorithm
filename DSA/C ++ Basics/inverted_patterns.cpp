#include <iostream>
using namespace std;

int main(){
    // inverted triangle pattern 
int n =4 ;
for(int i = 0; i < n; i++){
    // spaces 
    for (int j = 0; j < i+1; j++){
        cout<<" ";
    }
    // numbers
    for(int j = 0; j < n-i; j++){
        cout<<i+1;
    
    }
    cout<<endl;
    
}

// pyramid pattern 
int num = 9;
for(int i =0; i<num ; i++){
    for(int j = 0 ; j< num-i-1; j++){
        cout<<" ";
    }
    for(int j = 1 ; j<= i+1; j++){
        cout<<j;
    }
    for(int j = i ; j>=1 ; j--){
        cout<<j;
    }
    cout<<endl;
}

//  hollow diamont pattern

int num = 4;
for(int i=0; i<num ; i++){
    for(int j = 1; j<= num-i-1; j++){
        cout<<" ";
    }
    cout<<"*";

    if(i!=0){
        for(int j = 1; j<= 2*i-1; j++){
        cout<<" ";
        }
        cout<<"*";
    }
    
    cout<<endl;
}
for(int i =1 ; i<= num-1; i++){
    for(int j =1 ; j<=i ; j++){
        cout<<" ";
    }
    cout<<"*";
    if(i!=num-1){
        for(int j=1; j<= num-(2*i-1); j++){
            cout<<" ";
        }
        cout<<"*";
    }
    cout<<endl;
}


    return 0;
}
