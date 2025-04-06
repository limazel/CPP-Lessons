#include <iostream>

// declaration and defination
// bildirim ve tanımlama

int topla(int sayi1, int sayi2);

int main() 
{
    int a;
    int b;

    std::cout << topla(5, 10) << std::endl;
}

// function definition
int topla(int sayi1, int sayi2) 
{
    return sayi1 + sayi2;
}