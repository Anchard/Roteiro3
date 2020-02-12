#include "Poupanca.h"
#include <iostream>
#include <string>

using namespace std;

void Poupanca::setVariaco(int variacao){
    this->variacao = variacao;
}
void Poupanca::setTaxaRendimento(double taxaRendimento){
    this->taxaRendimento = taxaRendimento;
}

int Poupanca::getVariacao(){
    return this->variacao;
}
double Poupanca::getTaxaRendimento(){
    return this->taxaRendimento;
}

double Poupanca::render(){
    double aux = 0;
    double aux2 = 0;

    if(this->variacao == 51){
        aux = (this->saldo * this->taxaRendimento)/100;
        this->setSaldo(this->saldo + aux);
        cout << "Rendeu R$ " << aux << " Nesta Categoria!\n\n";
    }

    else if(this->variacao == 1){
        aux = this->taxaRendimento + 0.5;
        aux2 = (this->saldo * aux)/100;
        this->setSaldo(this->saldo + aux2);
        cout << "Rendeu R$ " << aux2 << " Nesta Categoria!\n\n";
    }

    return this->saldo;
}

void Poupanca::show(){
    cout << "Nome do Cliente: " << this->getNomeCliente() << endl;
    cout << "Numero: " << this->getNumero() << endl;
    cout << "Saldo: " << this->getSaldo() << endl;
    cout << "Variacao: " << this->getVariacao() << endl;
    cout << "Rendimento: " << this->getTaxaRendimento() << "%" << "\n\n";
}
