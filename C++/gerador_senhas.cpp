#include <iostream>
#include <time.h>

using namespace std;
char chars[88] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%&*()-+=`{[}]^;~:.,"; 
int number, length;

int main(int argc, char const *argv[])
{
    srand(time(0));
    cout << "==========[ GERADOR DE SENHAS EM C++ ]==========" << endl;
    while(true){
        cout << endl << "Quantidade de caracteres da senha?: ";
        cin >> length;
        cout << "Senha: ";
        for(int i = 0; i < length; i++){
            number = (rand() % 88) + 1;
            cout << chars[number];
        }
        cout << endl;
    }
    return 0;
}
