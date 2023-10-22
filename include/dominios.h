#ifndef DOMINIOS_H
#define DOMINIOS_H

#include <stdexcept>
using namespace std;
///
///Padrão para representação de limite.
///
///Regras de formato:
///
///-Limite é válido caso seja igual a 5,10,15,20.
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
    ///Armazena o limite caso seja válido.
    ///
    ///Lança exceção caso o valor informado seja inválido.
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
///Padrão para representação de Código.
///
///Regras de formato:
///
///-Código é válido caso seja no formato LLDD.
///Sendo L letras maiúsculas (A-Z) e D digitos (0-9).
///
class Codigo{
private:
    string valor;
    void validar(string);
public:
    ///
    ///Armazena o código caso seja válido.
    ///
    ///Lança exceção caso o valor informado seja inválido.
    ///
    ///@param valor código.
    ///
    ///@throw invalid_argument
    ///
    void setValor(string);
    ///
    ///Retorna o código.
    ///
    ///@return código.
    ///
    string getValor();
};
inline string Codigo::getValor(){
    return valor;
}
///
///Padrão para representação de Coluna.
///
///Regras de formato:
///
///-Os valores válidos para coluna são:
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
    ///Armazena a coluna caso seja válido.
    ///
    ///Lança exceção caso o valor informado seja inválido.
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
///Padrão para representação de Email.
///
///Regras de formato:
///
///-Email é valido no formato nome@domínio
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
    ///Armazena o Email caso seja válido.
    ///
    ///Lança exceção caso o valor informado seja inválido.
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
///Padrão para representação de Senha.
///
///Regras de formato:
///
///-Para ser valida a senha tem que ter 5 caracteres.
///Deve haver pelo menos um caractere maiúsculo,
///um caractere minúsculo, um dígito, um sinal de pontuação
///e não deve haver caractere duplicado.
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
    ///Armazena a senha caso seja válida.
    ///
    ///Lança exceção caso o valor informado seja inválido.
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
///Padrão para representação de Texto.
///
///Regras de formato:
///
///-Para texto ser válido o tamanho deve ser entre 5 a 30 caracteres.
///O primeiro caractere deve ser maiúsculo, não deve haver espaços em bracos em sequência,
///não há acentuação, não há sinais de pontuação em sequência, o primeiro caractere após sinal
///de pontuação(exceto vírgula e ponto-e-vírgula) deve ser letra maiúscula.
///
class Texto{
private:
    string valor;
    void validar(string);
public:
    ///
    ///Armazena o Texto caso seja válido.
    ///
    ///Lança exceção caso o valor informado seja inválido.
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
