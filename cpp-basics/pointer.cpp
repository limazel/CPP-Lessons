#include <iostream>

int main()
{
    int a = 10;

    int* aPtr = &a;

    std::cout << *aPtr << std::endl;
    std::cout << aPtr << std::endl;
    std::cout << &a << std::endl;
    std::cout << &aPtr << std::endl;
    std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(aPtr) << std::endl;
    std::cout << sizeof(&a) << std::endl;
    std::cout << sizeof(&aPtr) << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(int*) << std::endl;
    std::cout << sizeof(int**) << std::endl;
    std::cout << sizeof(int***) << std::endl;
    std::cout << sizeof(int****) << std::endl;
}