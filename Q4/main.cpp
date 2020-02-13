#include <iostream>
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "SistemaGerenciaFolha.h"

using namespace std;

int main(){
    cout << "########## ASSALARIADO #############\n";
    Assalariado f1("Matheus Gomez", 11110, 3000);
    f1.show();
    f1.calculaSalario();

    cout << "########## HORISTA #############\n";
    Horista f2("Thathiane Fernandes", 15797, 10, 40);
    f2.show();

    f2.calculaSalario();
    f2.setHorasTrabalhadas(50);
    f2.show();
    f2.calculaSalario();

    cout << "########## COMISSIONADO #############\n";
    Comissionado f3("Gilcelia Fernandes", 12121, 1000, 3000, 20);
    f3.show();
    f3.calculaSalario();

    cout << "########## SISTEMA GERENCIA FOLHA #############\n";
    SistemaGerenciaFolha sis(10000);
    sis.setFuncionario(&f1);
    sis.setFuncionario(&f2);
    sis.setFuncionario(&f3);

    sis.consultaSalarioFuncionario("Thathiane Fernandes");
    sis.consultaSalarioFuncionario("Gilcelia Fernandes");
    sis.consultaSalarioFuncionario("Australopitecus Oliveira");

    cout << "##### CALCULO DOS SALARIOS ###\n";
    sis.calculaValorTotal();

    f1.setSalario(7000);
    sis.calculaValorTotal();

    return 0;
}
