#include <vector>
#include <iostream> 
using namespace std; 


int main(){
    vector<int> v1; 
    v1.push_back(10); 
    v1.push_back(20); 
    v1.push_back(30); 
    v1.push_back(40); 
    v1.push_back(50); 

    cout << "Size of vector: " << v1.size() << endl; // size of vector
    cout << "Capacity of vector: " << v1.capacity() << endl; // capacity of vector

    cout << "Elements in vector: "; //iterating through the vector to print elements
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " "; 
    }
    cout << endl; 

    // Using pop_back to remove the last element
    v1.pop_back(); 
    cout << "After pop_back, size of vector: " << v1.size() << endl; 

    // Using clear to remove all elements
    v1.clear(); 
    cout << "After clear, size of vector: " << v1.size() << endl; 

    //front: 
    cout << "Front element: " << v1.front() << endl; // returns reference to the first element 
    //back: 
    cout << "Back element: " << v1.back() << endl; // returns reference to the last element 

    //at 
    cout << "Element at index 2: " << v1.at(2) << endl; // returns reference to the element at specified index


    return 0;
}