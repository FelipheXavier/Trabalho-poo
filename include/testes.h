#include "dominios.h"
#include "entidades.h"
#ifndef TESTES_H
#define TESTES_H
#include <string>
using namespace std;

class TUCodigo{
private:
    const string VALOR_VALIDO = "AA22";
    const string VALOR_INVALIDO = "ax10";
    Codigo *codigo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};
class TUColuna{
private:
    const string VALOR_VALIDO = "SOLICITADO";
    const string VALOR_INVALIDO = "QUALQUER OUTRA COISA";
    Coluna *coluna;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};
class TUEmail{
private:
    const string VALOR_VALIDO = "jose@gmail.com";
    const string VALOR_INVALIDO = "arnaldo.@..com";
    Email *email;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};
class TULimite{
private:
    const static int VALOR_VALIDO = 5;
    const static int VALOR_INVALIDO = 7;
    Limite *limite;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};
class TUSenha{
private:
    const string VALOR_VALIDO = "Ax9.m";
    const string VALOR_INVALIDO = "AAx90";
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};
class TUTexto{
private:
    const string VALOR_VALIDO = "Lorem Ipsum is simply";
    const string VALOR_INVALIDO = "lorem  ís simply dummy text";
    Texto *texto;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

class TUConta{
private:
    const string EMAIL_VALIDO = "steve@gmail.com";
    const string NOME_VALIDO = "Feliphe";
    const string SENHA_VALIDA = "Ax9.m";
    Conta *conta;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

class TUQuadro{
private:
    const string CODIGO_VALIDO = "AX91";
    const string NOME_VALIDO = "Antonio";
    const string DESCRICAO_VALIDA = "Descricao do quadro";
    const int LIMITE_VALIDO = 10;
    Quadro *quadro;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

class TUCartao{
    private:
    const string CODIGO_VALIDO = "AX91";
    const string NOME_VALIDO = "Geromel";
    const string DESCRICAO_VALIDA = "Descricao do cartao";
    const string COLUNA_VALIDA = "EM EXECUCAO";
    Cartao *cartao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};



#endif // TESTES_H
