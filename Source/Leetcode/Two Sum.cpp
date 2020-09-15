#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> ret;
    for (int A=0; A < nums.size(); A++) {
        for (int B=0; B < nums.size(); B++) {
            if (nums[A] + nums[B] == target) {
                ret.push_back(A);
                ret.push_back(B);
                return ret;
            }
        }
    }
}

int main(int argc, char** argv){
	std::vector<int> vec;
	vec.push_back(15);
    vec.push_back(11);
    vec.push_back(2);
    vec.push_back(7);
    std::cout << twoSum(vec, 9)[0];
    std::cout << twoSum(vec, 9)[1];
}