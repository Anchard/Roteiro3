#include "ContaCorrente.h"
#include <iostream>
#include <string>

using namespace std;

void ContaCorrente::setSalario(double salario){
    this->salario = salario;
}
void ContaCorrente::setLimite(int limite){
    this->limite = limite;
}

double ContaCorrente::getSalario(){
    return this->salario;
}
int ContaCorrente::getLimite(){
    return this->limite;
}

double ContaCorrente::definirLimite(){
    this->limite = this->salario * 2;
    return this->limite;
}

void ContaCorrente::show(){
    cout << "Nome do Cliente: " << this->getNomeCliente() << endl;
    cout << "Numero: " << this->getNumero() << endl;
    cout << "Saldo: " << this->getSaldo() << endl;
    cout << "Salario: " << this->getSalario() << endl;
    cout << "Limite: " << this->getLimite() << "\n\n";
}
