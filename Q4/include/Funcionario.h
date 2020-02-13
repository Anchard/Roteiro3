#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;

class Funcionario{
    private:
        string nome;
        int matricula;

    public:
        Funcionario(){
            this->nome = "-1";
            this->matricula = -1;
        }

        Funcionario(string nome, int matricula){
            this->nome = nome;
            this->matricula = matricula;
        }

        void setNome(string nome);
        void setMatricula(int matricula);

        string getNome();
        int getMatricula();

        virtual double calculaSalario() = 0;
};

#endif // FUNCIONARIO_H
