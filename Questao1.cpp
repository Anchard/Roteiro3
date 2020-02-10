/** Polimorfismo: A habilidade que uma entidade possui de acolher diferentes tipos
    que podem possuir diferentes comportamentos.

    Exemplo de polimorfismo:

    vector<Imovel*> listaImoveis;
    listaImoveis.push_back(&terreno);
    listaImoveis.push_back(&casa);
    listaImoveis.push_back(&ap);

    -> Onde terreno, casa e ap s�o de tipos diferentes, mas herdam de Imovel.

    Exemplo de m�todo polimorfico:

    file << listaImoveis[i]->getPrecoVenda() << endl;
    file << listaImoveis[i]->getPrecoAluguel() << endl;
    file << ((Casa*) listaImoveis[i])->getPavimentos() << endl;
    file << ((Casa*) listaImoveis[i])->getQuartos() << endl;

    -> Onde por herdarem possuem acesso aos m�todos do pai, mas tamb�m possuem
    acesso aos seus pr�prios m�todos.

**/
