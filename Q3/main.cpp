#include <iostream>
#include "Conta.h"
#include "ContaCorrente.h"
#include "Poupanca.h"
#include "ContaEspecial.h"

using namespace std;

int main(){
    cout << "########## CLIENTE ############ \n\n";
    Conta c1("Mario Neto", 12321, 90000);
    c1.show();

    c1.sacar(4000);
    c1.depositar(1000);
    c1.show();

    cout << "########## CONTA CORRENTE ############ \n\n";
    ContaCorrente c2("Gabriel Paulino", 22211, 12500, 1800, -1);
    c2.show();

    c2.sacar(1500);
    c2.definirLimite();
    c2.show();

    cout << "########## POUPANCA ############ \n\n";
    Poupanca c3("Julio Cesar", 33112, 10000, 51, 0.5);
    c3.show();

    c3.sacar(11000);
    c3.render();
    c3.sacar(11000);
    c3.show();

    c3.setVariaco(1);
    c3.render();
    c3.show();

    cout << "########## CONTA ESPECIAL ############ \n\n";
    ContaEspecial c4("Thathi Fernandes", 150797, 20000, 2100, -1);
    c4.definirLimite();
    c4.show();

    return 0;
}
