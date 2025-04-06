#include <iostream>

// function overloading

int topla(int sayi1, int sayi2) 
{
    return sayi1 + sayi2;
}

double topla(double sayi1, double sayi2) {
    return sayi1 + sayi2;
}

int main() {
    int a = 10;
    int b = 20;
    std::cout << topla(a + b) << std::endl;
}