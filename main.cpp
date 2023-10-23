#include <iostream>
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    int n;
    std::cout << "Введіть розмір масиву: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Розмір масиву повинен бути більше 0." << std::endl;
        return 1; 
    }

    int* arr = new int[n]; 

    std::cout << "Введіть елементи масиву:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Зворотний масив : " << std::endl;
    for (int i = n - 1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }

    delete[] arr; 

    return 0;
}
