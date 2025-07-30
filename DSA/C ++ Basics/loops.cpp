#include <iostream>
using namespace std;

//while loops
int main(){
    int n;
    int i=1;
    cout<<"Enter the no : ";
    cin>>n;
    while( i<=n){
        cout<<i<<endl;
        i+=2;
    }
    return 0;
}

// for loops

int main(){
    for(int i =1 ; i<=10 ; i++){
        cout<<i<<endl;
    }
    return 0;
}

//sum up to n 
int main(){
    int sum = 0;
    int n ;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 1 ; i<= n ; i++){
        sum+=i;
    }
    cout<<"The sum is: "<<sum;
    return 0;
}

// factorial
int main(){
    int num = 5;
    int fact = 1;
    for (int i = 1; i<=num; i++){
        fact*=i;
    }
    cout<<fact;
    return 0;
}

// do while loop 

int main(){
    int num = 10;
    int i = 1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=num); 

    return 0;
}





