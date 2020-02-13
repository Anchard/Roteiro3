#include "SistemaGerenciaFolha.h"
#include <iostream>
#include <string>

using namespace std;

void SistemaGerenciaFolha::setLimitePagamentos(double limitePagamentos){
    this->limitePagamentos = limitePagamentos;
}
double SistemaGerenciaFolha::getLimitePagamentos(){
    return this->limitePagamentos;
}

void SistemaGerenciaFolha::setFuncionario(Funcionario* funcionario){
    this->funcionarios.push_back(funcionario);
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(string nome){
    for(int i = 0; i < signed(funcionarios.size()); i++){
        if(nome == funcionarios[i]->getNome())
            return funcionarios[i]->calculaSalario();
    }
    cout << "Empregado Nao Cadastrado!\n\n";
    return -1;
}

double SistemaGerenciaFolha::calculaValorTotal(){
    double sum = 0;

    for(int i = 0; i < signed(funcionarios.size()); i++)
        sum += funcionarios[i]->calculaSalario();

    if(sum > this->limitePagamentos){
        cout << "Limite de Pagamentos Ultrapassado!\n\n";
        return -1;
    }

    cout << "Valor Total: R$ " << sum << " - Limite: " << this->getLimitePagamentos() << "\n\n";

    return sum;
}
