#include <iostream>

void mesaj(char msg, char msg2, char msg3) {
    std::cout << msg << msg2 << msg3 << std::endl;
}

int main() 
{
    mesaj('A', 'B', 'C');
}