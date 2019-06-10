#ifndef CONTAINERS_H_INCLUDED
#define CONTAINERS_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

#include <list>

class ContainerUsuario{

private:

    // Refer�ncia para o container.

    list<Usuario> container;

public:

    // Metodos por meio dos quais sao solicitados os servicos.

    ResultadoUsuario incluir(Usuario);
    ResultadoUsuario remover(CPF);
    ResultadoUsuario pesquisar(CPF);
};

class ContainerEvento{

private:

    // Refer�ncia para o container.

    list<Evento> container;

public:

    // Metodos por meio dos quais sao solicitados os servicos.

    ResultadoEvento incluir(Evento);
    ResultadoEvento remover(Codigo_de_Evento);
    ResultadoEvento pesquisar(Codigo_de_Evento);
    bool mostrar();
};

class ContainerApresentacoes{

private:

    // Refer�ncia para o container.


    list<Apresentacao> container;

public:

    // Metodos por meio dos quais sao solicitados os servicos.

    bool incluir(Apresentacao);
    bool remover(Apresentacao);
    Apresentacao pesquisar(Data);
    bool mostrar();
};

class Container_Apresentacoes: public Apresentacao{

private:

    // Refer�ncia para o container.
    Apresentacao apresentacao;

    list<Ingressos_CPF> container;

public:

    // Metodos por meio dos quais sao solicitados os servicos.

    //Apresentacao apresentacao;
    bool incluir(Ingressos_CPF);
    bool remover(Ingressos_CPF);
    Ingressos_CPF pesquisar(Codigo_de_Ingresso ingresso);
    bool mostrar();

    void setApresentacao(int novo_codigo, string novo_data, string novo_horario, float novo_preco,
                int novo_sala, int novo_disponibilidade) throw (invalid_argument);

    void getApresentacao(Codigo_de_Apresentacao *codigo_f, Data *data_f, Horario *horario_f, Preco *preco_f,
                   Numero_de_Sala *sala_f, Disponibilidade *disponibilidade_f);
};

class ContainerEventos: public Evento{

private:

    list<Apresentacao> container;

public:

    // Metodos por meio dos quais sao solicitados os servicos.
    bool incluir(Apresentacao);

};


/*
class ContainerSuper_Usuario{

private:

    // Refer�ncia para o container.
    Usuario usuario;
    Cartao_de_credito cartao;
    list<Eventos> container;

public:

    // Metodos por meio dos quais sao solicitados os servicos.

    bool incluir(Usuario, Cartao_de_credito);
    bool remover(CPF);
    bool pesquisar(CPF);
};
*/

class ContainerCartao_de_Credito{

private:

    // Refer�ncia para o container.

    list<Cartao_de_credito> container;

public:

    // Metodos por meio dos quais sao solicitados os servicos.

    bool incluir(Cartao_de_credito);
    bool remover(Numero_Cartao_Credito);
    bool pesquisar(Numero_Cartao_Credito);
};

#endif // CONTAINERS_H_INCLUD