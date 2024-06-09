#include <stdio.h>

double celsius_to_fahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}

double celsius_to_kelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheit_to_celsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double fahrenheit_to_kelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

double kelvin_to_celsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvin_to_fahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

void convert_temperature(double value, char unit) {
    double celsius, fahrenheit, kelvin;

    switch (unit) {
        case 'C':
        case 'c':
            celsius = value;
            fahrenheit = celsius_to_fahrenheit(celsius);
            kelvin = celsius_to_kelvin(celsius);
            printf("Temperature in Celsius: %.2f°C\n", celsius);
            printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
            printf("Temperature in Kelvin: %.2fK\n", kelvin);
            break;
        case 'F':
        case 'f':
            fahrenheit = value;
            celsius = fahrenheit_to_celsius(fahrenheit);
            kelvin = fahrenheit_to_kelvin(fahrenheit);
            printf("Temperature in Celsius: %.2f°C\n", celsius);
            printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
            printf("Temperature in Kelvin: %.2fK\n", kelvin);
            break;
        case 'K':
        case 'k':
            kelvin = value;
            celsius = kelvin_to_celsius(kelvin);
            fahrenheit = kelvin_to_fahrenheit(kelvin);
            printf("Temperature in Celsius: %.2f°C\n", celsius);
            printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
            printf("Temperature in Kelvin: %.2fK\n", kelvin);
            break;
        default:
            printf("Invalid unit of measurement entered. Please use 'C', 'F', or 'K'.\n");
            break;
    }
}

int main() {
    double value;
    char unit;

    printf("Enter the temperature value: ");
    scanf("%lf", &value);
    printf("Enter the unit of measurement (C for Celsius, F for Fahrenheit, K for Kelvin): ");
    scanf(" %c", &unit);

    convert_temperature(value, unit);

    return 0;
}

