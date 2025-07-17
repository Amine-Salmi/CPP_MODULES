#include "Array.hpp"

int main() {
    try
    {
        // Test 1: Default constructor (empty array)
        std::cout << "Test 1: Default constructor" << std::endl;
        Array<int> empty;
        std::cout << "Empty array size: " << empty.size() << std::endl;
        std::cout << std::endl;

        // Test 2: Constructor with size
        std::cout << "Test 2: Constructor with size" << std::endl;
        Array<int> arr1(5);
        std::cout << "Array size: " << arr1.size() << std::endl;
        for (unsigned int i = 0; i < arr1.size(); i++) {
            arr1[i] = i * 10;
        }
        std::cout << "Array contents: ";
        for (unsigned int i = 0; i < arr1.size(); i++) {
            std::cout << arr1[i] << " ";
        }
        std::cout << std::endl << std::endl;

        // Test 3: Copy constructor
        std::cout << "Test 3: Copy constructor" << std::endl;
        Array<int> arr2(arr1);
        std::cout << "Copied array size: " << arr2.size() << std::endl;
        std::cout << "Original array: ";
        for (unsigned int i = 0; i < arr1.size(); i++) {
            std::cout << arr1[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Copied array: ";
        for (unsigned int i = 0; i < arr2.size(); i++) {
            std::cout << arr2[i] << " ";
        }
        std::cout << std::endl;
        arr2[0] = 999;
        std::cout << "After modifying copy[0] = 999:" << std::endl;
        std::cout << "Original arr1[0]: " << arr1[0] << std::endl;
        std::cout << "Copy arr2[0]: " << arr2[0] << std::endl;
        std::cout << std::endl;

         // Test 4: Assignment operator
        std::cout << "Test 4: Assignment operator" << std::endl;
        Array<int> arr3;
        arr3 = arr1;
        std::cout << "Assigned array size: " << arr3.size() << std::endl;
        std::cout << "Assigned array: ";
        for (unsigned int i = 0; i < arr3.size(); i++) {
            std::cout << arr3[i] << " ";
        }
        std::cout << std::endl;
        arr3[1] = 777;
        std::cout << "After modifying assigned[1] = 777:" << std::endl;
        std::cout << "Original arr1[1]: " << arr1[1] << std::endl;
        std::cout << "Assigned arr3[1]: " << arr3[1] << std::endl;
        std::cout << std::endl;

        // Test 5: String array
        std::cout << "Test 6: String array" << std::endl;
        Array<std::string> strArr(3);
        strArr[0] = "Hello";
        strArr[1] = "World";
        strArr[2] = "!";
        
        std::cout << "String array: ";
        for (unsigned int i = 0; i < strArr.size(); i++) {
            std::cout << strArr[i] << " ";
        }
        std::cout << std::endl << std::endl;

        // Test 6: Exception testing
        std::cout << "Test 9: Exception testing" << std::endl;
        try {
            std::cout << "Trying to access arr1[10] (out of bounds)..." << std::endl;
            std::cout << arr1[10] << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }
        try {
            std::cout << "Trying to access empty[0] (out of bounds)..." << std::endl;
            std::cout << empty[0] << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }

        // Test 7: Large array
        std::cout << std::endl;
        std::cout << "Test 10: Large array test" << std::endl;
        Array<int> large(1000);
        for (unsigned int i = 0; i < large.size(); i++) {
            large[i] = i;
        }
        std::cout << "Large array size: " << large.size() << std::endl;
        std::cout << "First few elements: " << large[0] << ", " << large[1] << ", " << large[2] << std::endl;
        std::cout << "Last few elements: " << large[997] << ", " << large[998] << ", " << large[999] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}