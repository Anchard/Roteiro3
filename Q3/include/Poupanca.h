#ifndef POUPANCA_H
#define POUPANCA_H

#include <string>
#include "Conta.h"

using namespace std;

class Poupanca: public Conta{
    protected:
        string nomeCliente;
        int numero;
        double saldo;

    private:
        int variacao;
        double taxaRendimento;

    public:
        Poupanca(){
            this->nomeCliente = "-1";
            this->numero = -1;
            this->saldo = -1;
            this->variacao = -1;
            this->taxaRendimento = -1;
        }

        Poupanca(string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento):
        Conta(nomeCliente, numero, saldo){
            this->nomeCliente = nomeCliente;
            this->numero = numero;
            this->saldo = saldo;
            this->variacao = variacao;
            this->taxaRendimento = taxaRendimento;
        }


        void setVariaco(int variacao);
        void setTaxaRendimento(double taxaRendimento);

        int getVariacao();
        double getTaxaRendimento();

        double render();

        void show();
};

#endif // POUPANCA_H
