#include <iostream>

using namespace std;
int a, b, arg;

int main(int argc, char const *argv[])
{
    cout << "Insira um número: ";
    cin >> arg;
    system("clear");
    a = 1;
    if(arg > 31) arg = 31;
    for(int i = 0; i < arg; i++){
        b += a;
        a = b;
        cout << b << " ";
    }
    return 0;
}