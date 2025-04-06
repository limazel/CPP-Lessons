#include <iostream>

int main() {
    int a = 0;
    int b = 0;
    char islem = '+';

    std::cout << "Birinci sayiyi girin:" << std::endl;
    std::cin >> a;

    std::cout << "Ikinci sayiyi girin:" << std::endl;
    std::cin >> b;

    std::cout << "Islemi girin (+, -, *, /):" << std::endl;
    std::cin >> islem;

    if(a > 10) {
        std::cout << "Sonuc" << a + b << std::endl;
    } else if (a < 10) {
        std::cout << "else if Sonuc" << a - b << std::endl;
    } else {
        std::cout << "Sonuc yok";
    }

}