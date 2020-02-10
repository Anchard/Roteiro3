#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"
#include <string>

using namespace std;

class ContaEspecial: public Conta{
    private:
        string nomeCliente;
        float salarioMensal;
        int numeroConta;
        float saldo;
        float limite;

    public:
        ContaEspecial(){
            this->nomeCliente = "-1";
            this->salarioMensal = -1;
            this->numeroConta = -1;
            this->saldo = -1;
            this->limite = -1;
        }

        ContaEspecial(string nomeCliente, float salarioMensal, int numeroConta, float saldo):
        Conta(nomeCliente, salarioMensal, numeroConta, saldo){
            this->nomeCliente = nomeCliente;
            this->salarioMensal = salarioMensal;
            this->numeroConta = numeroConta;
            this->saldo = saldo;
            this->limite = -1;
        }

        void definirLimite();
};

#endif // CONTAESPECIAL_H
