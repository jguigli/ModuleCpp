#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    {
        std::cout << "\nTEST copie" << std::endl;

        Array<int> tmp = numbers;
        Array<int> test(tmp);

        std::cout << "Number = " << numbers[5] << "\nTmp = " << tmp[5] << "\nTest = " << test[5] << std::endl;
        tmp[5] = 4;
        test[5] = 14;
        std::cout << "Number = " << numbers[5] << "\nTmp = " << tmp[5] << "\nTest = " << test[5] << std::endl;
    }

    std::cout << "\nTEST mauvais index" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Array<int> nb(-1000000000);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Array<int> nb(0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete [] mirror;
    return 0;
}