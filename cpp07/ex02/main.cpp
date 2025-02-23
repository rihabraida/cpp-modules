#include <iostream>
#include "Array.h"
#include <bits/stdc++.h>
#define MAX_VAL 750



int main(int , char **)
{
    try{

        Array<int> emptyArray;
        std::cout << "Default constructor: Size = " << emptyArray.size() << std::endl;

        Array<int> intArray(5);
        for (unsigned int i = 0; i < intArray.size(); i++)
            intArray[i] = i * 10;

        std::cout << "Modified array: ";
        for (unsigned int i = 0; i < intArray.size(); i++)
            std::cout << intArray[i] << " ";
        std::cout << std::endl;
        try {
            std::cout << "Trying to access out-of-bounds index: " << intArray[10] << std::endl;
        } catch (const std::exception &e) {
            std::cout << "Exception caught: Out of bounds access!" << std::endl;
        }

        Array<std::string> strArray(3);
        strArray[0] = "coucou";
        strArray[1] = "salut";
        strArray[2] = "!";
        std::cout << "String array: ";
        for (unsigned int i = 0; i < strArray.size(); i++)
            std::cout << strArray[i] << " ";
        std::cout << std::endl;
    }
    catch (const std::exception &e) {
        std::cout << "Unexpected exception: " << e.what() << std::endl;
    }

}

// int main(int, char**)
// {
    
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }