#ifndef HORISTA_H
#define HORISTA_H
#include <string>
#include "Funcionario.h"

using namespace std;

class Horista: public Funcionario{
    private:
        string nome;
        int matricula;

        double salarioHora;
        double horasTrabalhadas;

    public:
        Horista(){
            this->nome = "-1";
            this->matricula = -1;
            this->salarioHora = -1;
            this->horasTrabalhadas = -1;
        }

        Horista(string nome, int matricula, double salarioHora, double horasTrabalhadas):
        Funcionario(nome, matricula){
            this->nome = nome;
            this->matricula = matricula;
            this->salarioHora = salarioHora;
            this->horasTrabalhadas = horasTrabalhadas;
        }

        void setSalarioHora(double salarioHora);
        void setHorasTrabalhadas(double horasTrabalhadas);

        double getSalarioHora();
        double getHorasTrabalhadas();

        double calculaSalario();
        void show();
};

#endif // HORISTA_H
