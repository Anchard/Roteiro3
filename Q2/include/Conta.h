#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"

#include <string>

using namespace std;

class Conta: public IConta{
    private:
        string nomeCliente;
        float salarioMensal;
        int numeroConta;
        float saldo;
        float limite;

    public:
        Conta(){
            this->nomeCliente = "-1";
            this->salarioMensal = -1;
            this->numeroConta = -1;
            this->saldo = -1;
            this->limite = -1;
        }

        Conta(string nomeCliente, float salarioMensal, int numeroConta, float saldo){
            this->nomeCliente = nomeCliente;
            this->salarioMensal = salarioMensal;
            this->numeroConta = numeroConta;
            this->saldo = saldo;
            this->limite = -1;
        }

        void setNomeCliente(string nomeCliente);
        void setSalarioMensal(float salarioMensal);
        void setNumeroConta(int numeroConta);
        void setSaldo(float saldo);
        void setLimite(float limite);

        string getNomeCliente();
        float getSalarioMensal();
        int getNumeroConta();
        float getSaldo();
        float getLimite();

        void definirLimite();
        void show();

        void sacar(double valor);
        void depositar(double valor);
};

#endif // CONTA_H
