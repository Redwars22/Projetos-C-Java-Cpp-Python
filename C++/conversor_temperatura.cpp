#include <iostream>

using namespace std;
float value, celsius, fahrenheit;
char symbol;
#define AUX 1.8
#define FAHRENHEIT 32
float CelsiusToFahrenheit(float);
float FahrenheitToCelsius(float);

int main()
{
    cout << "##########[ CONVERSOR DE TEMPERATURA - ºC E F]##########" << endl
         << endl;
    while (true)
    {
        cout << "Insira um valor: ";
        cin >> value;
        cout << "Insira C para converter para Celsius e F para Fahrenheit: ";
        cin >> symbol;

        if (symbol == 'C' || symbol == 'c')
            cout << "Resultado: " << FahrenheitToCelsius(value) << endl;
        else if (symbol == 'F' || symbol == 'f')
            cout << "Resultado: " << CelsiusToFahrenheit(value) << endl;
        else break;
        cout << "------------------------------" << endl;
    }
    return 0;
}

float CelsiusToFahrenheit(float value)
{
    fahrenheit = (value * AUX) + FAHRENHEIT;
    return fahrenheit;
}

float FahrenheitToCelsius(float value)
{
    celsius = (value - 32) / AUX;
    return celsius;
}