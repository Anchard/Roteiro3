#include "Comissionado.h"
#include <iostream>
#include <string>

using namespace std;

void Comissionado::setSalario(double salario){
    this->salario = salario;
}
void Comissionado::setVendasSemanais(double vendasSemanais){
    this->vendasSemanais = vendasSemanais;
}
void Comissionado::setPercentualComissao(double percentualComissao){
    this->percentualComissao = percentualComissao;
}

double Comissionado::getSalario(){
    return this->salario;
}
double Comissionado::getVendasSemanais(){
    return this->vendasSemanais;
}
double Comissionado::getPercentualComissao(){
    return this->percentualComissao;
}

double Comissionado::calculaSalario(){
    double salario;

    salario = this->getSalario() + (this->getVendasSemanais() * this->getPercentualComissao())/100;
    cout << "Salario mensal de: R$ " << salario << "\n\n";

    return salario;
}

void Comissionado::show(){
    cout << "Nome: " << this->getNome() << endl;
    cout << "Matricula: " << this->getMatricula() << endl;
    cout << "Salario: R$ " << this->getSalario() << endl;
    cout << "Vendas Semanais: R$ " << this->getVendasSemanais() << endl;
    cout << "Percentual Comissao: " << this->getPercentualComissao() << "%\n\n";
}
