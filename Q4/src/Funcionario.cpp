#include "Funcionario.h"
#include <string>

using namespace std;

void Funcionario::setNome(string nome){
    this->nome = nome;
}
void Funcionario::setMatricula(int matricula){
    this->matricula = matricula;
}

string Funcionario::getNome(){
    return this->nome;
}
int Funcionario::getMatricula(){
    return this->matricula;
}
