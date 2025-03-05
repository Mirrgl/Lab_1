#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float radius = 0;
    cout << "Введите радиус окружности: ";
    cin >> radius;
    if (radius <= 0) {
        cout << "Ошибка. Введено неположительное число" << endl;
        return 0;
    }

    float angle = 0;
    cout << "Введите угол кругового сектора окружности (в градусах): ";
    cin >> angle;
    if (angle <= 0) {
        cout << "Ошибка. Введено неположительное число" << endl;
        return 0;
    }

    float length = 2 * M_PI * radius;
    cout << "Длина окружности: " << length << endl;
    
    float square = M_PI * radius * radius;
    cout << "Площадь окружности: " << square << endl;

    float squareAngle = M_PI * radius * radius * angle / 360;
    cout << "Площадь сектора: " << squareAngle;

    return 0;
}