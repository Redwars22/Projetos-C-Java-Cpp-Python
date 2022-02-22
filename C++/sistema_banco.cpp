#include <iostream>

using namespace std;

void mainMenu();
void checkBalance();
void deposit();
void withdraw();

double balance = 500, withdrawAmount, depositAmount;;

int main() {
    int option;

    do {
        mainMenu();
        cout << "OPÇÃO: ";
        cin >> option;

        switch(option){
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            default:
                system("clear");
                break;
        }
    } while(option != 4);

    return 0;
}

void mainMenu(){
    cout << "********** MENU **********" << endl;
    cout << "1-Checar saldo" << endl;
    cout << "2-Depósito" << endl;
    cout << "3-Empréstimo" << endl;
    cout << "4-Sair" << endl;
    cout << "***************************" << endl;
}

void checkBalance(){
    system("clear");
    cout << "SALDO TOTAL: R$ " << balance << endl;
}

void deposit(){
    cout << "VALOR A SER DEPOSITADO: R$ ";
    cin >> depositAmount;
    balance += depositAmount;
}

void withdraw(){
    cout << "QUANTIDADE A SER SACADA: R$ ";
    cin >> withdrawAmount;
    if(withdrawAmount <= balance) 
        balance -= withdrawAmount;
    else
        cout << "ERRO, VOCÊ NÃO PODE SACAR ESTA QUANTIDA!!!" << endl;
}