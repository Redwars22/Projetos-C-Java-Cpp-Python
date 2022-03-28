#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

const string WHATSAPP_LINK = "https://api.whatsapp.com/send?phone=";
string phoneNumber;
string message;

int main(int argc, char const *argv[])
{
    phoneNumber = "(42)98428-0983";
    message = "O meu texto é esse";
    cout << WHATSAPP_LINK << phoneNumber << "&text=" << message;
    return 0;
}
