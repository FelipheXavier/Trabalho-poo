#include "dominios.h"
#include <stdexcept>
#include <string>
#include <map>
#include <cctype>
void Limite::validar(int valorNovo){
    if(valorNovo != 5 && valorNovo != 10 && valorNovo != 15 && valorNovo != 20){
        throw invalid_argument("Argumento invalido.");
    }
}

void Limite::setValor(int valor){
    validar(valor);
    this->valor = valor;
}


void Codigo::validar(string valorNovo){
    if(valorNovo.length() != 4){
        throw invalid_argument("Argumento invalido");
    }
    if(!isupper(valorNovo[0]) || !isupper(valorNovo[1])){
        throw invalid_argument("Argumento invalido");
    }
    if(!isdigit(valorNovo[2])||!isdigit(valorNovo[3])){
        throw invalid_argument("Argumento invalido");
    }
}

void Codigo::setValor(string valorNovo){
    validar(valorNovo);
    this->valor = valorNovo;
}

void Email::validar(string valor){
    size_t posicaoArroba = valor.find('@');
    string nome = valor.substr(0,posicaoArroba);
    string dominio = valor.substr(posicaoArroba);
    if(nome.length()<2 || nome.length()>10 || dominio.length()<2||dominio.length()>10){
        throw invalid_argument("Argumento invalido");
    }
    size_t posPonto = valor.find("..");
    if(posPonto != std::string::npos){
        throw invalid_argument("Argumento invalido");
    }
    size_t verificaArrobaD = valor.find("@.");
    size_t verificaArrobaE = valor.find(".@");
    if(verificaArrobaD != std::string::npos || verificaArrobaE != std::string::npos){
        throw invalid_argument("Argumento invalido");
    }
}
void Email::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

void Coluna::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
void Coluna::validar(string valor){
    if(valor == "SOLICITADO" || valor == "EM EXECUCAO"|| valor == "CONCLUIDO"){
        return;
    }else{
        throw invalid_argument("Argumento invalido");
    }
}

void Senha::validar(string valor){
    if(valor.length() != 5){
        throw invalid_argument("Argumento invalido");
    }
    map<char,int>mapCaracteres;
    bool letraMaiuscula = false;
    bool letraMinuscula = false;
    bool digito = false;
    bool pontuacao = false;

    for(char c:valor){
        if(isupper(c)){
            letraMaiuscula = true;
        }
    }
    for(char c:valor){
        if(islower(c)){
            letraMinuscula = true;
        }
    }
    for(char c:valor){
        if(isdigit(c)){
            digito = true;
        }
    }
    for(char c:valor){
        if(c == '.'||c == ','||c==';'||c=='?'||c=='!'){
            pontuacao = true;
        }
    }
    for(char c:valor){
        if(mapCaracteres.find(c) != mapCaracteres.end()){
            throw invalid_argument("Argumento invalido");
        }
        mapCaracteres[c] = 1;
    }
    if(!letraMaiuscula || !letraMinuscula || !digito || !pontuacao){
        throw invalid_argument("Argumento invalido");
    }
}
void Senha::setValor(string valor){
    validar(valor);
    this->valor = valor;
}
void Texto::validar(string valor){
    const char acentuacao[] = {'á', 'é', 'í', 'ó', 'ú', 'â', 'ê', 'î', 'ô', 'û', 'à', 'è', 'ì', 'ò', 'ù', 'ä', 'ë', 'ï', 'ö', 'ü', 'ã', 'õ', 'ñ', 'ç',
                               'Á', 'É', 'Í', 'Ó', 'Ú', 'Â', 'Ê', 'Î', 'Ô', 'Û', 'À', 'È', 'Ì', 'Ò', 'Ù', 'Ä', 'Ë', 'Ï', 'Ö', 'Ü', 'Ã', 'Õ', 'Ñ', 'Ç'};

    for (char c : valor) {
        for(int i = 0;i<sizeof(acentuacao)/sizeof(acentuacao[0]);i++){
            if(c == acentuacao[i]){
                throw invalid_argument("Argumento invalido");
            }
        }
    }
    string sinais = ".;?!";
    if(valor.length()<5 || valor.length()>30){
        throw invalid_argument("Argumento invalido");
    }
    for (size_t i = 0; i < valor.length() - 1; i++) {
        if (valor[i] == ' ' && valor[i + 1] == ' ') {
            throw invalid_argument("Argumento invalido");
    }
    }
    for (size_t i = 0; i < valor.length() - 1; i++) {
        if (sinais.find(valor[i]) != std::string::npos && sinais.find(valor[i + 1]) != std::string::npos) {
            throw invalid_argument("Argumento invalido");
        }
    }
    if(!isupper(valor[0])){
        throw invalid_argument("Argumento invalido");
    }
}

void Texto::setValor(string valor){
    validar(valor);
    this->valor = valor;
}


