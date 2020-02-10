#include "Conta.h"
#include <iostream>
#include <string>
#include "IConta.h"

using namespace std;

void Conta::setNomeCliente(string nomeCliente){
    this->nomeCliente = nomeCliente;
}
void Conta::setNumeroConta(int numeroConta){
    this->numeroConta = numeroConta;
}
void Conta::setSalarioMensal(float salarioMensal){
    this->salarioMensal = salarioMensal;
}
void Conta::setSaldo(float saldo){
    this->saldo = saldo;
}
void Conta::setLimite(float limite){
    this->limite = limite;
}

string Conta::getNomeCliente(){
    return this->nomeCliente;
}
int Conta::getNumeroConta(){
    return this->numeroConta;
}
float Conta::getSalarioMensal(){
    return this->salarioMensal;
}
float Conta::getSaldo(){
    return this->saldo;
}
float Conta::getLimite(){
    return this->limite;
}

void Conta::definirLimite(){
    this->limite = this->salarioMensal * 2;
}

void Conta::show(){
    cout << "Nome do Cliente: " << this->getNomeCliente() << endl;
    cout << "Numero da Conta: " << this->getNumeroConta() << endl;
    cout << "Salario Mensal: " << this->getSalarioMensal() << endl;
    cout << "Saldo: " << this->getSaldo() << endl;
    cout << "Limite: " << this->getLimite() << "\n\n";
}

void Conta::sacar(double valor){
    if(this->saldo < valor)
        cout << "Saldo Insuficiente para esse valor" << endl;

    else
        this->setSaldo(this->saldo - valor);

}

void Conta::depositar(double valor){
    this->setSaldo(this->saldo + valor);
}
