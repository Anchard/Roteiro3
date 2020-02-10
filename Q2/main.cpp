#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main(){
    Conta c1("Carlos", 1200, 11221, 8000);
    c1.show();

    c1.definirLimite();
    c1.show();

    ContaEspecial c2("Maria", 7000, 22334, 30000);
    c2.show();

    c2.definirLimite();
    c2.show();

    c2.sacar(40000); //Saque > Saldo
    c2.sacar(10000); //Saque < Saldo
    c2.show();

    c2.depositar(5000);
    c2.show();

    return 0;
}
