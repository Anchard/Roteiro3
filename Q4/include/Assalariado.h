#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include <string>
#include "Funcionario.h"

using namespace std;

class Assalariado: public Funcionario{
    private:
        string nome;
        int matricula;

        double salario;

    public:
        Assalariado(){
            this->nome = "-1";
            this->matricula = -1;
            this->salario = -1;
        }

        Assalariado(string nome, int matricula, double salario):
        Funcionario(nome, matricula){
            this->nome = nome;
            this->matricula = matricula;
            this->salario = salario;
        }

        void setSalario(double salario);
        double getSalario();

        double calculaSalario();
        void show();
};

#endif // ASSALARIADO_H
