#include "Assalariado.h"
#include <iostream>
#include <string>

using namespace std;

void Assalariado::setSalario(double salario){
    this->salario = salario;
}
double Assalariado::getSalario(){
    return this->salario;
}

double Assalariado::calculaSalario(){
    cout << "Salario no valor de: R$ " << this->getSalario() << "\n\n";
    return this->salario;
}

void Assalariado::show(){
    cout << "Nome: " << this->getNome() << endl;
    cout << "Matricula: " << this->getMatricula() << endl;
    cout << "Salario: R$ " << this->getSalario() << "\n\n";
}
