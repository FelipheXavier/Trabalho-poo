#include "testes.h"

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setValor(VALOR_VALIDO);
        if(codigo->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if(codigo->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}
int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


void TUColuna::setUp(){
    coluna = new Coluna();
    estado = SUCESSO;
}

void TUColuna::tearDown(){
    delete coluna;
}

void TUColuna::testarCenarioSucesso(){
    try{
        coluna->setValor(VALOR_VALIDO);
        if(coluna->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUColuna::testarCenarioFalha(){
    try{
        coluna->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if(coluna->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}
int TUColuna::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setValor(VALOR_VALIDO);
        if(email->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUEmail::testarCenarioFalha(){
    try{
        email->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if(email->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}
int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TULimite::setUp(){
    limite = new Limite();
    estado = SUCESSO;
}

void TULimite::tearDown(){
    delete limite;
}

void TULimite::testarCenarioSucesso(){
    try{
        limite->setValor(VALOR_VALIDO);
        if(limite->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TULimite::testarCenarioFalha(){
    try{
        limite->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if(limite->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}
int TULimite::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setValor(VALOR_VALIDO);
        if(senha->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUSenha::testarCenarioFalha(){
    try{
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if(senha->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}
int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


void TUTexto::setUp(){
    texto = new Texto();
    estado = SUCESSO;
}

void TUTexto::tearDown(){
    delete texto;
}

void TUTexto::testarCenarioSucesso(){
    try{
        texto->setValor(VALOR_VALIDO);
        if(texto->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUTexto::testarCenarioFalha(){
    try{
        texto->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if(texto->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}
int TUTexto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


void TUConta::setUp(){
    conta = new Conta();
    estado = SUCESSO;
}
void TUConta::tearDown(){
    delete conta;
}
void TUConta::testarCenarioSucesso(){
    Email email;
    Texto nome;
    Senha senha;

    email.setValor(EMAIL_VALIDO);
    conta->setEmail(email);
    if(conta->getEmail().getValor() != EMAIL_VALIDO){
        estado = FALHA;
    }
    nome.setValor(NOME_VALIDO);
    conta->setNome(nome);
    if(conta->getNome().getValor() != NOME_VALIDO){
        estado = FALHA;
    }
    senha.setValor(SENHA_VALIDA);
    conta->setSenha(senha);
    if(conta->getSenha().getValor() != SENHA_VALIDA){
        estado = FALHA;
    }

}
int TUConta::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TUQuadro::setUp(){
    quadro = new Quadro();
    estado = SUCESSO;
}
void TUQuadro::tearDown(){
    delete quadro;
}
void TUQuadro::testarCenarioSucesso(){
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Limite limite;

    codigo.setValor(CODIGO_VALIDO);
    quadro->setCodigo(codigo);
    if(quadro->getCodigo().getValor() != CODIGO_VALIDO){
        estado = FALHA;
    }
    nome.setValor(NOME_VALIDO);
    quadro->setNome(nome);
    if(quadro->getNome().getValor() != NOME_VALIDO){
        estado = FALHA;
    }
    descricao.setValor(DESCRICAO_VALIDA);
    quadro->setDescricao(descricao);
    if(quadro->getDescricao().getValor() != DESCRICAO_VALIDA){
        estado = FALHA;
    }
    limite.setValor(LIMITE_VALIDO);
    quadro->setLimite(limite);

    if(quadro->getLimite().getValor() != LIMITE_VALIDO){
        estado = FALHA;
    }

}
int TUQuadro::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TUCartao::setUp(){
    cartao = new Cartao();
    estado = SUCESSO;
}
void TUCartao::tearDown(){
    delete cartao;
}
void TUCartao::testarCenarioSucesso(){
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Coluna coluna;

    codigo.setValor(CODIGO_VALIDO);
    cartao->setCodigo(codigo);
    if(cartao->getCodigo().getValor() != CODIGO_VALIDO){
        estado = FALHA;
    }
    nome.setValor(NOME_VALIDO);
    cartao->setNome(nome);
    if(cartao->getNome().getValor() != NOME_VALIDO){
        estado = FALHA;
    }
    descricao.setValor(DESCRICAO_VALIDA);
    cartao->setDescricao(descricao);
    if(cartao->getDescricao().getValor() != DESCRICAO_VALIDA){
        estado = FALHA;
    }
    coluna.setValor(COLUNA_VALIDA);
    cartao->setColuna(coluna);
    if(cartao->getColuna().getValor() != COLUNA_VALIDA){
        estado = FALHA;
    }

}
int TUCartao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
