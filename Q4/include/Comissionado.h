#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include <string>
#include "Funcionario.h"

using namespace std;

class Comissionado: public Funcionario{
    private:
        string nome;
        int matricula;

        double salario;
        double vendasSemanais;
        double percentualComissao;

    public:
        Comissionado(){
            this->nome = "-1";
            this->matricula = -1;
            this->salario = -1;
            this->vendasSemanais = -1;
            this->percentualComissao = -1;
        }

        Comissionado(string nome, int matricula, double salario, double vendasSemanais, double percentualComissao):
        Funcionario(nome, matricula){
            this->nome = nome;
            this->matricula = matricula;
            this->salario = salario;
            this->vendasSemanais = vendasSemanais;
            this->percentualComissao = percentualComissao;
        }

        void setSalario(double salario);
        void setVendasSemanais(double vendasSemanais);
        void setPercentualComissao(double percentualComissao);

        double getSalario();
        double getVendasSemanais();
        double getPercentualComissao();

        double calculaSalario();
        void show();
};

#endif // COMISSIONADO_H
