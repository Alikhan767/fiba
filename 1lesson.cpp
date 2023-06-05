#include <iostream>
#include <cmath>
using namespace std;
int fibonacci(int n) {
    double sqrt5 = sqrt(5);
    double phi = (1 + sqrt5) / 2;
    return round(pow(phi, n) / sqrt5);
}

int main() {
    int n;
    cout << "Введите число n: ";
    cin >> n;
    cout << "n-ное число Фибоначчи: " << fibonacci(n) << endl;
    return 0;
}