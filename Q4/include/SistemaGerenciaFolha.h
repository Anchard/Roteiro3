#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include <iostream>
#include <string>
#include <vector>
#include "Funcionario.h"

using namespace std;

class SistemaGerenciaFolha{
    private:
        vector<Funcionario*> funcionarios;
        double limitePagamentos;

    public:
        SistemaGerenciaFolha(double limitePagamentos){
            this->limitePagamentos = limitePagamentos;
        }

        void setLimitePagamentos(double limitePagamentos);
        double getLimitePagamentos();

        void setFuncionario(Funcionario* funcionario);
        double calculaValorTotal();
        double consultaSalarioFuncionario(string nome);
};

#endif // SISTEMAGERENCIAFOLHA_H
