#ifndef ENTIDADES_H
#define ENTIDADES_H
#include "dominios.h"

///
///Padrão para representação de conta.
///

class Conta{
private:
    Email email;
    Texto nome;
    Senha senha;
public:
    ///
    ///Retorna o Email.
    ///
    ///@return Email.
    ///
    Email getEmail();
    ///
    ///Retorna o Nome.
    ///
    ///@return Nome.
    ///
    Texto getNome();
    ///
    ///Retorna a Senha.
    ///
    ///@return Senha.
    ///
    Senha getSenha();
    ///
    ///Armazena o Email informado.
    ///
    ///@param email.
    ///
    void setEmail(Email&);
    ///
    ///Armazena o Nome informado.
    ///
    ///@param nome.
    ///
    void setNome(Texto&);
    ///
    ///Armazena a Senha informada.
    ///
    ///@param Senha.
    ///
    void setSenha(Senha&);
};
inline Email Conta::getEmail(){
    return email;
}
inline Texto Conta::getNome(){
    return nome;
}
inline Senha Conta::getSenha(){
    return senha;
}
inline void Conta::setEmail(Email& e){
    this->email = e;
}
inline void Conta::setNome(Texto& nome){
    this->nome = nome;
}
inline void Conta::setSenha(Senha& senha){
    this->senha = senha;
}
class Quadro{
private:
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Limite limite;
public:
    ///
    ///Retorna o Código.
    ///
    ///@return Código.
    ///
    Codigo getCodigo();
    ///
    ///Armazena o Código informado.
    ///
    ///@param código.
    ///
    void setCodigo(Codigo&);
    ///
    ///Retorna o Nome.
    ///
    ///@return Nome.
    ///
    Texto getNome();
    ///
    ///Armazena o Nome informado.
    ///
    ///@param Nome.
    ///
    void setNome(Texto&);
    ///
    ///Retorna a Descrição.
    ///
    ///@return Descrição.
    ///
    Texto getDescricao();
    ///
    ///Armazena a descrição informada.
    ///
    ///@param Descrição.
    ///
    void setDescricao(Texto&);
    ///
    ///Retorna o Limite.
    ///
    ///@return Limite.
    ///
    Limite getLimite();
    ///
    ///Armazena o Limite informado.
    ///
    ///@param Limite.
    ///
    void setLimite(Limite&);

};
inline Codigo Quadro::getCodigo(){
    return codigo;
}
inline Texto Quadro::getDescricao(){
    return descricao;
}
inline Limite Quadro::getLimite(){
    return limite;
}
inline Texto Quadro::getNome(){
    return nome;
}
inline void Quadro::setCodigo(Codigo& codigo){
    this->codigo = codigo;
}
inline void Quadro::setDescricao(Texto& texto){
    this->descricao = texto;
}
inline void Quadro::setLimite(Limite& limite){
    this->limite = limite;
}
inline void Quadro::setNome(Texto& nome){
    this->nome = nome;
}

class Cartao{
private:
    Codigo codigo;
    Texto nome;
    Texto descricao;
    Coluna coluna;
public:
    ///
    ///Retorna o Código.
    ///
    ///@return Código.
    ///
    Codigo getCodigo();
     ///
    ///Armazena o Código informado.
    ///
    ///@param código.
    ///
    void setCodigo(Codigo& codigo);
    ///
    ///Retorna o Nome.
    ///
    ///@return Nome.
    ///
    Texto getNome();
    ///
    ///Armazena o Nome informado.
    ///
    ///@param Nome.
    ///
    void setNome(Texto& nome);
    ///
    ///Retorna a Descrição.
    ///
    ///@return Descrição.
    ///
    Texto getDescricao();
    ///
    ///Armazena a descrição informada.
    ///
    ///@param Descrição.
    ///
    void setDescricao(Texto& descricao);
    ///
    ///Retorna a Coluna.
    ///
    ///@return Coluna.
    ///
    Coluna getColuna();
    ///
    ///Armazena a Coluna informada.
    ///
    ///@param Coluna.
    ///
    void setColuna(Coluna& coluna);
};
inline Codigo Cartao::getCodigo(){
    return codigo;
}
inline void Cartao::setCodigo(Codigo& codigo){
    this->codigo = codigo;
}
inline Texto Cartao::getNome(){
    return nome;
}
inline void Cartao::setNome(Texto& nome){
    this->nome = nome;
}
inline Texto Cartao::getDescricao(){
    return descricao;
}
inline void Cartao::setDescricao(Texto& descricao){
    this->descricao = descricao;
}
inline Coluna Cartao::getColuna(){
    return coluna;
}
inline void Cartao::setColuna(Coluna& coluna){
    this->coluna = coluna;
}
#endif // ENTIDADES_H
