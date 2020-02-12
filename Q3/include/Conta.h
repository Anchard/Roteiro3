#ifndef CONTA_H
#define CONTA_H

#include <string>

using namespace std;

class Conta{
    private:
        string nomeCliente;
        int numero;
        double saldo;

    public:
        Conta(){
            this->nomeCliente = "-1";
            this->numero = 1;
            this->saldo = -1;
        }

        Conta(string nomeCliente, int numero, double saldo){
            this->nomeCliente = nomeCliente;
            this->numero = numero;
            this->saldo = saldo;
        }

        void setNomeCliente(string nomeCliente);
        void setNumero(int numero);
        void setSaldo(double saldo);

        string getNomeCliente();
        int getNumero();
        double getSaldo();

        void sacar(double valor);
        void depositar(double valor);

        void show();
};

#endif // CONTA_H
