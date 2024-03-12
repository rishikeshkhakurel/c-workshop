#include <stdio.h>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double temperatureCelsius = 25.0;
    double temperatureFahrenheit = celsiusToFahrenheit(temperatureCelsius);

    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit\n",
           temperatureCelsius, temperatureFahrenheit);

    return 0;
}
