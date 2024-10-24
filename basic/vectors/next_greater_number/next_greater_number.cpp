#include <iostream>
#include <vector>
#include <algorithm>
// {1, 8,6 ,4}
// Function to find the next greater number with the same digits
std::vector<int> nextGreaterNumber(std::vector<int>& digits) {
    int n = digits.size();
    std::cout <<"Value of the n is " << n <<std::endl;
    
    // Step 1: Find the first decreasing element from the right
    int i = n - 2;
    std::cout << "Value of the i is " << i << std::endl;
    while (i >= 0 && digits[i] >= digits[i + 1]) {
        --i;
    }
    
    // If no such element is found, return -1
    if (i == -1) {
        return {-1};
    }
    
    // Step 2: Find the smallest element larger than digits[i] from the right
    int j = n - 1;
    while (digits[j] <= digits[i]) {
        --j;
    }
    
    // Step 3: Swap elements at i and j
    std::swap(digits[i], digits[j]);
    
    // Step 4: Reverse the digits after index i
    std::reverse(digits.begin() + i + 1, digits.end());
    
    return digits;
}

void printDigits(const std::vector<int>& digits) {
    for (int digit : digits) {
        std::cout << digit;
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> digits = {1, 2, 3,4};  // Example input

    std::cout << "Input: ";
    printDigits(digits);

    std::vector<int> result = nextGreaterNumber(digits);

    std::cout << "Next greater number: ";
    if (result == std::vector<int>{-1}) {
        std::cout << "-1" << std::endl;
    } else {
        printDigits(result);
    }

    return 0;
}
