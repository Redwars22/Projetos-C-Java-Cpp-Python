#include <iostream>
#include <time.h>

using namespace std;
char v[5] = {'a', 'e', 'i', 'o', 'u'};
char c[18] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'm', 'n', 'o', 'p', 'r', 's', 't', 'w', 'x', 'z'};

int main(int argc, char const *argv[])
{
    srand(time(0));
    for(int words = 0; words < 5; words++){
        for(int syllable = 0; syllable < rand() % 12; syllable++){
            cout << c[rand() % 18];
            cout << v[rand() % 5];
        }

        cout << endl;
    }
    return 0;
}
