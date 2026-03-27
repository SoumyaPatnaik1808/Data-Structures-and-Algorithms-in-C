#include <iostream>
#include <vector>
using namespace std; 

int main(){
    vector<int> vec = {1,2,3,4};
    cout << vec[0] << endl; //1`
    vector<int> vec2(5,0); // Creates a vector with 5 elements, all initialized to 0
    for(int i = 0; i < vec2.size(); i++){
        cout << vec2[i] << " ";
    }
    cout << endl;
    return 0; 

}