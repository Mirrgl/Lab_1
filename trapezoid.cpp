#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int lowerBase = 0;
    int upperBase = 0;
    int leftSide = 0;
    int rightSide = 0;

    cout << "Длина нижнего основания: ";
    cin >> lowerBase;

    cout << "Длина верхнего основания: ";
    cin >> upperBase;

    cout << "Длина левой стороны: ";
    cin >> leftSide;

    cout << "Длина правой стороны: ";
    cin >> rightSide;
    
    int perimeter = lowerBase + upperBase + leftSide + rightSide;
    cout << "Периметр трапеции: " << perimeter << endl;

    float square = (lowerBase + upperBase) / 2. * sqrt(pow(leftSide,2) - pow(((pow(lowerBase - upperBase,2) + pow(leftSide,2) - pow(rightSide,2))/((lowerBase - upperBase) * 2.)),2));
    cout << "Площадь трапеции: " << square << endl;

    float middleLine = (lowerBase + upperBase) / 2.;
    cout << "Средняя линия трапеции: " << middleLine << endl;
    
    return 0;
}