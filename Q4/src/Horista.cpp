#include "Horista.h"
#include <iostream>
#include <string>

using namespace std;

void Horista::setSalarioHora(double salarioHora){
    this->salarioHora = salarioHora;
}
void Horista::setHorasTrabalhadas(double horasTrabalhadas){
    this->horasTrabalhadas = horasTrabalhadas;
}

double Horista::getSalarioHora(){
    return this->salarioHora;
}
double Horista::getHorasTrabalhadas(){
    return this->horasTrabalhadas;
}

double Horista::calculaSalario(){
    double salario;
    double extra;
    double aux;

    if(this->getHorasTrabalhadas() > 40){
        aux = (this->getSalarioHora() * 1.5);
        extra = this->getHorasTrabalhadas() - 40;
        salario = (this->getSalarioHora() * 40) +  (aux * extra);
    }

    else
        salario = this->getSalarioHora() * this->getHorasTrabalhadas();

    cout << "Salario Mensal de: R$ " << salario * 4 << "\n\n";

    return salario * 4;
}

void Horista::show(){
    cout << "Nome: " << this->getNome() << endl;
    cout << "Matricula: " << this->getMatricula() << endl;
    cout << "Salario por Hora: R$ " << this->getSalarioHora() << endl;
    cout << "Horas Trabalhadas: R$ " << this->getHorasTrabalhadas() << "\n\n";
}
