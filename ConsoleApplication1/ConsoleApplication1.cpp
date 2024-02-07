#include <iostream>

const double PI = 3.14159;

double calculateRingArea(double innerRadius, double outerRadius) {
    double innerArea = PI * innerRadius * innerRadius;
    double outerArea = PI * outerRadius * outerRadius;
    double ringArea = outerArea - innerArea;
    return ringArea;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double innerRadius, outerRadius;
    std::cout << "Введите значение внешнего радиуса: ";
    std::cin >> outerRadius;
    std::cout << "Введите значение внутреннего радиуса: ";
    std::cin >> innerRadius;
    double ringArea = calculateRingArea(innerRadius, outerRadius);
    std::cout << "Площадь кольца: " << ringArea << std::endl;

    return 0;
}