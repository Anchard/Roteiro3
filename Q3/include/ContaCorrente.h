#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include <string>
#include "Conta.h"

using namespace std;

class ContaCorrente: public Conta{
    protected:
        string nomeCliente;
        int numero;
        double saldo;

    private:
        double salario;
        int limite;

    public:
        ContaCorrente(){
            this->nomeCliente = "-1";
            this->numero = -1;
            this->saldo = -1;
            this->salario = -1;
            this->limite = -1;
        }

        ContaCorrente(string nomeCliente, int numero, double saldo, double salario, int limite):
        Conta(nomeCliente, numero, saldo){
            this->nomeCliente = nomeCliente;
            this->numero = numero;
            this->saldo = saldo;
            this->salario = salario;
            this->limite = limite;
        }

        void setSalario(double salario);
        void setLimite(int limite);

        double getSalario();
        int getLimite();

        double definirLimite();

        void show();
};

#endif // CONTACORRENTE_H
