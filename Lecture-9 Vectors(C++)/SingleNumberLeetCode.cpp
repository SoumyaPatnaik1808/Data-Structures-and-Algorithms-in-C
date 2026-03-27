// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Core concept : Bitwise XOR operator 

#include <iostream>
#include <vector>
using namespace std; 

int singleNumber(vector<int>& nums) {
    int result = 0;
        for (int i = 0; i<nums.size(); i++) {
        result ^= nums[i]; // XOR operator
    }
    return result;
}