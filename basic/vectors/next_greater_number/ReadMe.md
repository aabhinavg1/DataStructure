
# Next Greater Number with Same Digits

## 🚀 Problem Overview

You are given an array of digits that represent a non-negative integer. Your task is to find the **next greater number** that can be formed using the same digits. If it's not possible, return `-1`.

### Example:

**Input:** [1, 2, 3]  
**Output:** [1, 3, 2]  
**Explanation:** The next greater number that can be formed is 132.

**Input:** [3, 2, 1]  
**Output:** -1  
**Explanation:** No greater number can be formed.

---

## 💡 Approach

We need to find the next lexicographical permutation of the given digits. Here's a step-by-step breakdown of the approach:

### Steps:

1. **Find the first decreasing element from the right:**
   - Traverse the array from right to left and find the first element that is smaller than the element immediately after it. Let’s call the index of this element `i`.
   
2. **Find the smallest element greater than the element at index `i`:**
   - From the right, find the smallest element that is greater than `digits[i]`. Let’s call this index `j`.
   
3. **Swap elements at index `i` and `j`:**
   - Swap the elements at indices `i` and `j` to bring the next larger number closer to formation.
   
4. **Reverse the digits after index `i`:**
   - Reverse the part of the array that comes after index `i` to get the smallest possible number with the remaining digits.

5. **Edge Case:**  
   - If no such `i` is found (i.e., the digits are in descending order), return `-1` as no greater permutation can be formed.

---

### ⌛ Time Complexity

- **O(n)**: where `n` is the number of digits. We make multiple passes over the digits (finding the pivot, swapping, and reversing a portion of the array).
  
- **Space Complexity:** O(1), as we modify the array in place.

---

## 🔑 Key Function: `nextGreaterNumber`

```cpp
std::vector<int> nextGreaterNumber(std::vector<int>& digits) {
    int n = digits.size();
    
    // Step 1: Find the first decreasing element from the right
    int i = n - 2;
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
```

---

## 🛠️ How to Run the Code

### Prerequisites

- **C++ Compiler** (GCC, Clang, MSVC, etc.)
- **CMake** (minimum version 3.10)

### Instructions

1. **Clone the repository:**

    ```bash
    git clone https://github.com/yourusername/next-greater-number.git
    cd next-greater-number
    ```

2. **Create a build directory:**

    ```bash
    mkdir build
    cd build
    ```

3. **Build the project using CMake:**

    ```bash
    cmake ..
    make
    ```

4. **Run the executable:**

    ```bash
    ./next_greater_number
    ```

You can modify the input inside the `main()` function in the file `next_greater_number.cpp` to test other examples.

---

## 🔄 Example Usage

```bash
Input: 123
Output: 132

Input: 321
Output: -1
```

---

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

the digits (finding the pivot, swapping, and reversing a portion of the array).
  
- **Space Complexity:** O(1), as we modify the array in place.

---

## 🔑 Key Function: `nextGreaterNumber`

```cpp
std::vector<int> nextGreaterNumber(std::vector<int>& digits) {
    int n = digits.size();
    
    // Step 1: Find the first decreasing element from the right
    int i = n - 2;
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
```

---

## 💻 Where can we use this method?

This method of finding the next lexicographical permutation can be useful in various scenarios such as:

- **Permutations Generation:** When you need to generate the next permutation of a sequence.
- **Arrangements in Combinatorics:** Useful in problems that require generating different arrangements or ordering items.
- **Solving Puzzles:** Problems where the goal is to find the next step in a puzzle involving rearranging elements.
- **Optimizing Number Sequences:** When you want to find the next possible sequence that's greater than the current arrangement.

---

## 🛠️ How to Run the Code

### Prerequisites

- **C++ Compiler** (GCC, Clang, MSVC, etc.)
- **CMake** (minimum version 3.10)

### Instructions

1. **Clone the repository:**

    ```bash
    git clone https://github.com/yourusername/next-greater-number.git
    cd next-greater-number
    ```

2. **Create a build directory:**

    ```bash
    mkdir build
    cd build
    ```

3. **Build the project using CMake:**

    ```bash
    cmake ..
    make
    ```

4. **Run the executable:**

    ```bash
    ./next_greater_number
    ```

You can modify the input inside the `main()` function in the file `next_greater_number.cpp` to test other examples.

---

## 🔄 Example Usage

```bash
Input: 123
Output: 132

Input: 321
Output: -1
```

---

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
