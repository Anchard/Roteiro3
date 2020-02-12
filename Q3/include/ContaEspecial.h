#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include <string>
#include "ContaCorrente.h"

using namespace std;

class ContaEspecial: public ContaCorrente{
    protected:
        string nomeCliente;
        int numero;
        double saldo;
        double salario;
        int limite;

    public:
        ContaEspecial(){
            this->nomeCliente = "-1";
            this->numero = -1;
            this->saldo = -1;
            this->salario = -1;
            this->limite = -1;
        }

        ContaEspecial(string nomeCliente, int numero, double saldo, double salario, int limite):
        ContaCorrente(nomeCliente, numero, saldo, salario, limite){
            this->nomeCliente = nomeCliente;
            this->numero = numero;
            this->saldo = saldo;
            this->salario = salario;
            this->limite = limite;
        }

        void definirLimite();

        void show();
};

#endif // CONTAESPECIAL_H
