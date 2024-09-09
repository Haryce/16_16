#include <iostream>
#define PI 3.14 //создаем число π
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    double l; // Длина окружности
    cout << "Введите длину окружности: ";
    cin >> l;

    double radius = l / (2 * PI);   // Формула: C = 2 * π * r, отсюда r = C / (2 * π)
    
    double area = PI * radius * radius; // Площадь круга: S = π * r^2

    cout << "\nПлощадь круга: " << area;

    return 0;
}
