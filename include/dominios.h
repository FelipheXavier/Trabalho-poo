#ifndef DOMINIOS_H
#define DOMINIOS_H

#include <stdexcept>
using namespace std;
///
///Padr�o para representa��o de limite.
///
///Regras de formato:
///
///-Limite � v�lido caso seja igual a 5,10,15,20.
///
class Limite{
private:
    int valor;
    void validar(int);
public:
    ///
    ///Retorna o limite.
    ///
    ///@return limite.
    ///
    int getValor();
    ///
    ///Armazena o limite caso seja v�lido.
    ///
    ///Lan�a exce��o caso o valor informado seja inv�lido.
    ///
    ///@param valor limite.
    ///
    ///@throw invalid_argument
    ///
    void setValor(int);
};
inline Limite::getValor(){
    return valor;
}

///
///Padr�o para representa��o de C�digo.
///
///Regras de formato:
///
///-C�digo � v�lido caso seja no formato LLDD.
///Sendo L letras mai�sculas (A-Z) e D digitos (0-9).
///
class Codigo{
private:
    string valor;
    void validar(string);
public:
    ///
    ///Armazena o c�digo caso seja v�lido.
    ///
    ///Lan�a exce��o caso o valor informado seja inv�lido.
    ///
    ///@param valor c�digo.
    ///
    ///@throw invalid_argument
    ///
    void setValor(string);
    ///
    ///Retorna o c�digo.
    ///
    ///@return c�digo.
    ///
    string getValor();
};
inline string Codigo::getValor(){
    return valor;
}
///
///Padr�o para representa��o de Coluna.
///
///Regras de formato:
///
///-Os valores v�lidos para coluna s�o:
///SOLICITADO, EM EXECUCAO, CONCLUIDO.
///
class Coluna{
private:
    string valor;
    void validar(string);
    public:
    ///
    ///Retorna a coluna.
    ///
    ///@return coluna.
    ///
    string getValor();
    ///
    ///Armazena a coluna caso seja v�lido.
    ///
    ///Lan�a exce��o caso o valor informado seja inv�lido.
    ///
    ///@param valor coluna.
    ///
    ///@throw invalid_argument
    ///
    void setValor(string);
};
inline string Coluna::getValor(){
    return valor;
}
///
///Padr�o para representa��o de Email.
///
///Regras de formato:
///
///-Email � valido no formato nome@dom�nio
///
class Email{
private:
    string valor;
    void validar(string);
public:
    ///
    ///Retorna o Email.
    ///
    ///@return Email.
    ///
    string getValor();
    ///
    ///Armazena o Email caso seja v�lido.
    ///
    ///Lan�a exce��o caso o valor informado seja inv�lido.
    ///
    ///@param valor Email.
    ///
    ///@throw invalid_argument
    ///
    void setValor(string);
};
inline string Email::getValor(){
    return valor;
}
///
///Padr�o para representa��o de Senha.
///
///Regras de formato:
///
///-Para ser valida a senha tem que ter 5 caracteres.
///Deve haver pelo menos um caractere mai�sculo,
///um caractere min�sculo, um d�gito, um sinal de pontua��o
///e n�o deve haver caractere duplicado.
///
class Senha{
private:
    string valor;
    void validar(string);
public:
    ///
    ///Retorna a Senha.
    ///
    ///@return Senha.
    ///
    string getValor();
    ///
    ///Armazena a senha caso seja v�lida.
    ///
    ///Lan�a exce��o caso o valor informado seja inv�lido.
    ///
    ///@param valor Senha.
    ///
    ///@throw invalid_argument
    ///
    void setValor(string);
};
inline string Senha::getValor(){
    return valor;
}

///
///Padr�o para representa��o de Texto.
///
///Regras de formato:
///
///-Para texto ser v�lido o tamanho deve ser entre 5 a 30 caracteres.
///O primeiro caractere deve ser mai�sculo, n�o deve haver espa�os em bracos em sequ�ncia,
///n�o h� acentua��o, n�o h� sinais de pontua��o em sequ�ncia, o primeiro caractere ap�s sinal
///de pontua��o(exceto v�rgula e ponto-e-v�rgula) deve ser letra mai�scula.
///
class Texto{
private:
    string valor;
    void validar(string);
public:
    ///
    ///Armazena o Texto caso seja v�lido.
    ///
    ///Lan�a exce��o caso o valor informado seja inv�lido.
    ///
    ///@param valor Texto.
    ///
    ///@throw invalid_argument
    ///
    void setValor(string);
    ///
    ///Retorna a Texto.
    ///
    ///@return Texto.
    ///
    string getValor();
};
inline string Texto::getValor(){
    return valor;
}
#endif
