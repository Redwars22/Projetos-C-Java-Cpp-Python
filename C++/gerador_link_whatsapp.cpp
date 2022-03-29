#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

const string WHATSAPP_LINK = "https://api.whatsapp.com/send?phone=";
string phoneNumber;
string message;

int main(int argc, char const *argv[])
{
    cout << "#*#*#*#*#*<GERADOR DE LINKS DO WHATSAPP>*#*#*#*#*#" << endl << endl;
    phoneNumber = "(42)98428-0983";
    cout << "Digite seu telefone (no formato (42)99999-9999): ";
    cin >> phoneNumber;
    cout << "Digite a mensagem (no lugar dos espaços, use %20!!!): ";
    cin >> message;
    system("clear");
    cout << "LINK: " << WHATSAPP_LINK << phoneNumber << "&text=" << message;
    return 0;
}
