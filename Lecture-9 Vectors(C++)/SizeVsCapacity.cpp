#include <iostream>
#include <vector>
using namespace std; 

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << "Size: " << v.size() << endl; // Size: 3
    cout << "Capacity: " << v.capacity() << endl; // Capacity: 4 (implementation-dependent)

    return 0;
}