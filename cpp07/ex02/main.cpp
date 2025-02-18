#include <iostream>
#include "Array.h"
#include <bits/stdc++.h>

int main() {
    try {
        // Test default constructor
        std::cout << "Testing default constructor:" << std::endl;
        Array<int> emptyArray;
        std::cout << "Size of empty array: " << emptyArray.size() << std::endl;
        
        // Test parameterized constructor
        std::cout << "\nTesting parameterized constructor:" << std::endl;
        Array<int> intArray(5);
        std::cout << "Size of int array: " << intArray.size() << std::endl;
        
        // Initialize array elements
        for (unsigned int i = 0; i < intArray.size(); i++) {
            intArray[i] = i * 10;
        }
        
        // Display array elements
        std::cout << "Int array elements: ";
        for (unsigned int i = 0; i < intArray.size(); i++) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;
        
        // Test copy constructor
        std::cout << "\nTesting copy constructor:" << std::endl;
        Array<int> copiedArray(intArray);
        std::cout << "Size of copied array: " << copiedArray.size() << std::endl;
        
        // Display copied array elements
        std::cout << "Copied array elements: ";
        for (unsigned int i = 0; i < copiedArray.size(); i++) {
            std::cout << copiedArray[i] << " ";
        }
        std::cout << std::endl;
        
        // Modify original array and check if the copy remains unchanged
        std::cout << "\nModifying original array:" << std::endl;
        intArray[2] = 999;
        
        std::cout << "Original array elements after modification: ";
        for (unsigned int i = 0; i < intArray.size(); i++) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;
        
        std::cout << "Copied array elements after original was modified: ";
        for (unsigned int i = 0; i < copiedArray.size(); i++) {
            std::cout << copiedArray[i] << " ";
        }
        std::cout << std::endl;
        
        // Test assignment operator
        std::cout << "\nTesting assignment operator:" << std::endl;
        Array<int> assignedArray;
        assignedArray = intArray;
        
        std::cout << "Size of assigned array: " << assignedArray.size() << std::endl;
        std::cout << "Assigned array elements: ";
        for (unsigned int i = 0; i < assignedArray.size(); i++) {
            std::cout << assignedArray[i] << " ";
        }
        std::cout << std::endl;
        
        // Modify the assigned array and check if original remains unchanged
        std::cout << "\nModifying assigned array:" << std::endl;
        assignedArray[3] = 777;
        
        std::cout << "Assigned array elements after modification: ";
        for (unsigned int i = 0; i < assignedArray.size(); i++) {
            std::cout << assignedArray[i] << " ";
        }
        std::cout << std::endl;
        
        std::cout << "Original array elements after assigned array was modified: ";
        for (unsigned int i = 0; i < intArray.size(); i++) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;
        
        // Test with std::string type
        std::cout << "\nTesting with std::string type:" << std::endl;
        Array<std::string> stringArray(3);
        stringArray[0] = "Hello";
        stringArray[1] = "World";
        stringArray[2] = "C++";
        
        std::cout << "String array elements: ";
        for (unsigned int i = 0; i < stringArray.size(); i++) {
            std::cout << stringArray[i] << " ";
        }
        std::cout << std::endl;
        
        // Test out of bounds exception
        std::cout << "\nTesting out of bounds exception:" << std::endl;
        try {
            std::cout << "Attempting to access element at index 5 (out of bounds)..." << std::endl;
            std::cout << intArray[5] << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Exception caught: Index out of bounds" << std::endl;
        }
        
        // Test assignment to self (should handle correctly)
        std::cout << "\nTesting self-assignment:" << std::endl;
        intArray = intArray;
        std::cout << "Array after self-assignment:" << std::endl;
        for (unsigned int i = 0; i < intArray.size(); i++) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;
        
    } catch (const std::exception& e) {
        std::cerr << "Unhandled exception: " << e.what() << std::endl;
    }
    
    return 0;
}