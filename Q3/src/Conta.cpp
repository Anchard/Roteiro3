#include "Conta.h"
#include <iostream>
#include <string>

using namespace std;

void Conta::setNomeCliente(string nomeCliente){
    this->nomeCliente = nomeCliente;
}
void Conta::setNumero(int numero){
    this->numero = numero;
}
void Conta::setSaldo(double saldo){
    this->saldo = saldo;
}

string Conta::getNomeCliente(){
    return this->nomeCliente;
}
int Conta::getNumero(){
    return this->numero;
}
double Conta::getSaldo(){
    return this->saldo;
}

void Conta::sacar(double valor){
    if(this->saldo - valor < 0)
        cout << "Saldo Insuficiente\n\n";

    else{
        this->saldo = this->saldo - valor;
        cout << "Saque Efetuado com Sucesso!\n\n";
    }
}
void Conta::depositar(double valor){
    this->saldo = this->saldo + valor;
    cout << "Deposito Efetuado com Sucesso!\n\n";
}

void Conta::show(){
    cout << "Nome do Cliente: " << this->getNomeCliente() << endl;
    cout << "Numero: " << this->getNumero() << endl;
    cout << "Saldo: " << this->getSaldo() << "\n\n";
}
