#include <iostream>
#include <cmath> // Для математических функций


#ifndef M_PI
#define M_PI 3.14
#endif

// Директивы для задания 1
#define Z 1
#define T 2
#define Y (tan(T) + Z)
#define X ((8 * pow(Z, 2) + 1) / (Y * exp(T) + pow(T, 2)))

// Функция для задания 2
double f(double x, double y, double z) {
    return pow(cos(z), 2) + pow(fabs(x + y), 3);
}

double w(double x, double y) {
    return 0.5 * (pow(sin(3), 2) + exp(y) / (y + x));
}

int main() {
    setlocale(LC_ALL, "RU");
    // Задание 1: Вычисление X с использованием директив
    std::cout << "Задание 1:" << std::endl;
    std::cout << "Значение X: " << X << std::endl << std::endl;

    // Задание 2: Вычисление b = f(x, y, z)
    double x = 0.84, y = 0.65;
    double z = w(x, y); // z вычисляется через функцию w(x, y)
    double b = f(x, y, z); // Вычисление b

    std::cout << "Задание 2:" << std::endl;
    std::cout << "Значение b: " << b << std::endl << std::endl;

    // Задание 3: Вычисление y без директив препроцессора
    double alpha = M_PI / 4; // Пример значения угла alpha (π/4)
    double beta = M_PI / 6;  // Пример значения угла beta (π/6)

    double result_y = pow(cos(alpha), 2) - pow(cos(beta), 2); // Вычисление y

    std::cout << "Задание 3:" << std::endl;
    std::cout << "Значение y: " << result_y << std::endl;

    return 0;
}
