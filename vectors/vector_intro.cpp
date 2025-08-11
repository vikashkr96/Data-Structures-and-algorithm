#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vec = {1,3,6,8};
    cout<<vec[0]<<endl;

    vector <int> vec1(5,0);
    cout<<vec1[0]<<endl;
    cout<<vec1[1]<<endl;
    cout<<vec1[2]<<endl;
    cout<<vec1[3]<<endl;
    cout<<vec1[4]<<endl;


    //FOR EACH loop in vectors................................................................
    cout<<"FOR EACH loop in vectors"<<endl;

    vector<char> vec2 = {'a', 'b', 'c', 'd', 'e'};
    for(char val : vec2){
        cout<< val << endl;
    }
    // VECTOR FUNCTIONS  ..................................................
    cout<<"VECTOR FUNCTIONS "<<endl;

    // size function
    cout<<"Size of vec2= "<<vec2.size()<<endl;

    // push_back function
    cout<<"Size of vec = "<<vec.size()<<endl;
    vec.push_back(25);
    cout<<"Size of vec after push_back = "<<vec.size()<<endl;
    // pop_back function
    vec.pop_back();
    cout<<"Again the Size of vec after pop_back = "<<vec.size()<<endl;
    

    return 0;
}