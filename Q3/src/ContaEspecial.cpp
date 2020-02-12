#include "ContaEspecial.h"
#include <iostream>
#include <string>

using namespace std;

void ContaEspecial::definirLimite(){
    this->setLimite(this->salario * 4);
}

void ContaEspecial::show(){
    cout << "Nome do Cliente: " << this->getNomeCliente() << endl;
    cout << "Numero: " << this->getNumero() << endl;
    cout << "Saldo: " << this->getSaldo() << endl;
    cout << "Salario: " << this->getSalario() << endl;
    cout << "Limite: " << this->getLimite() << "\n\n";
}
