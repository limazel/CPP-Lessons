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

   switch(islem) {
    case '+':
        std::cout << "Sonuc: " << a + b << std::endl;
        break;
    case '-':
        std::cout << "Sonuc: " << a - b << std::endl;
        break;
    case '*':
        std::cout << "Sonuc: " << a * b << std::endl;
        break;
    case '/':
        if (b != 0) {
            std::cout << "Sonuc: " << a / b << std::endl;
        } else {
            std::cout << "Bölme hatasi: sifira bölme" << std::endl;
        }
        break;
    default:
        std::cout << "Gecersiz islem" << std::endl;
        break;
   }
    std::cout << "Islem tamamlandi." << std::endl;

    return 0;

}