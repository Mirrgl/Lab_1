#include <iostream>
#include <cmath>    
#include <locale> 

using namespace std;

// Функции для прямоугольника
double rectanglePerimeter(double length, double width) {
    return 2 * (length + width);
}

double rectangleArea(double length, double width) {
    return length * width;
}

double rectangleDiagonal(double length, double width) {
    return sqrt(length * length + width * width);
}

// Функции для трапеции
double trapezoidPerimeter(double base1, double base2, double side1, double side2) {
    return base1 + base2 + side1 + side2;
}

double trapezoidArea(double base1, double base2, double height) {
    return ((base1 + base2) / 2) * height;
}

double trapezoidMidline(double base1, double base2) {
    return (base1 + base2) / 2;
}

int main() {
    setlocale(LC_ALL, "Russian"); 

    // Ввод данных для прямоугольника
    double length, width;
    cout << "Введите длину прямоугольника: ";
    cin >> length;
    if (length <= 0) {
        cout << "Введено неположительное число. Ошибка." << endl;
        return 0;
    }

    cout << "Введите ширину прямоугольника: ";
    cin >> width;
    if (width <= 0) {
        cout << "Введено неположительное число. Ошибка." << endl;
        return 0;
    }

    cout << "\nПрямоугольник:" << endl;
    cout << "Периметр: " << rectanglePerimeter(length, width) << endl;
    cout << "Площадь: " << rectangleArea(length, width) << endl;
    cout << "Длина диагонали: " << rectangleDiagonal(length, width) << endl;

    // Ввод данных для трапеции
    double base1, base2, side1, side2, height;
    cout << "\nВведите длину первого основания трапеции: ";
    cin >> base1;
    if (base1 <= 0) {
        cout << "Введено неположительное число. Ошибка." << endl;
        return 0;
    }

    cout << "Введите длину второго основания трапеции: ";
    cin >> base2;
    if (base2 <= 0) {
        cout << "Введено неположительное число. Ошибка." << endl;
        return 0;
    }

    cout << "Введите длину первой боковой стороны трапеции: ";
    cin >> side1;
    if (side1 <= 0) {
        cout << "Введено неположительное число. Ошибка." << endl;
        return 0;
    }

    cout << "Введите длину второй боковой стороны трапеции: ";
    cin >> side2;
    if (side2 <= 0) {
        cout << "Введено неположительное число. Ошибка." << endl;
        return 0;
    }

    cout << "Введите высоту трапеции: ";
    cin >> height;
    if (height <= 0) {
        cout << "Введено неположительное число. Ошибка." << endl;
        return 0;
    }

    cout << "\nТрапеция:" << endl;
    cout << "Периметр: " << trapezoidPerimeter(base1, base2, side1, side2) << endl;
    cout << "Площадь: " << trapezoidArea(base1, base2, height) << endl;
    cout << "Длина средней линии: " << trapezoidMidline(base1, base2) << endl;

    return 0;
}