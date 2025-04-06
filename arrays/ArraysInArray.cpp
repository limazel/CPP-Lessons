#include <iostream>
#include <iterator>

int main() {
    int arr[3][2] =
    {
        {
            1, 2
        },
        {
            3, 4
        },
        {
            5, 6
        }
    };

    for(int i = 0; i < 3; i++) {
        for(int i2 = 0; i2 < 2; i2++) {
            std::cout << arr[i][i2] << " ";
        }
    }
}