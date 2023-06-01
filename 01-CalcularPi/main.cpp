#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double pi = 0.0;
    double error = 1.0;
    int sign = 1;
    int denominator = 1;
    int iterations = 0;

    while (fabs(error) >= 0.000001) {
        pi += sign * (4.0 / denominator);
        sign *= -1;
        denominator += 2;
        error = pi - 3.141592;

        iterations++;
    }

    cout << "valor aproximado de pi: " << fixed << pi << endl;
    cout << "numero de iteraciones: " << iterations << endl;

    return 0;
}
