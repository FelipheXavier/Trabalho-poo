#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "dominios.cpp"
#include "testes.h"

using namespace std;

int main(){

TUCodigo testeCod;
TUColuna testaCol;
TUEmail testaE;
TULimite testaL;
TUSenha testaS;
TUTexto testaT;

switch(testeCod.run()){
case TUCodigo::SUCESSO: cout<<"SUCESSO - CODIGO"<<endl;
break;
case TUCodigo::FALHA: cout<<"FALHA - CODIGO"<<endl;
break;
}

switch(testaCol.run()){
case TUColuna::SUCESSO: cout<<"SUCESSO - COLUNA"<<endl;
break;
case TUColuna::FALHA: cout<<"FALHA - COLUNA"<<endl;
break;
}

switch(testaE.run()){
case TUEmail::SUCESSO: cout<<"SUCESSO - EMAIL"<<endl;
break;
case TUEmail::FALHA: cout<<"FALHA - EMAIL"<<endl;
break;

}
switch(testaL.run()){
case TULimite::SUCESSO: cout<<"SUCESSO - LIMITE"<<endl;
break;
case TULimite::FALHA: cout<<"FALHA - LIMITE"<<endl;
break;
}

switch(testaS.run()){
case TUSenha::SUCESSO: cout<<"SUCESSO - SENHA"<<endl;
break;
case TUSenha::FALHA: cout<<"FALHA - SENHA"<<endl;
break;
}

switch(testaT.run()){
case TUTexto::SUCESSO: cout<<"SUCESSO - TEXTO"<<endl;
break;
case TUTexto::FALHA: cout<<"FALHA - TEXTO"<<endl;
break;
}

TUConta testeConta;
TUQuadro testeQuadro;
TUCartao testaCartao;

switch(testeConta.run()){
case TUTexto::SUCESSO: cout<<"SUCESSO - CONTA"<<endl;
break;
case TUTexto::FALHA: cout<<"FALHA - CONTA"<<endl;
break;
}
switch(testeQuadro.run()){
case TUTexto::SUCESSO: cout<<"SUCESSO - QUADRO"<<endl;
break;
case TUTexto::FALHA: cout<<"FALHA - QUADRO"<<endl;
break;
}
switch(testaCartao.run()){
case TUTexto::SUCESSO: cout<<"SUCESSO - CARTAO"<<endl;
break;
case TUTexto::FALHA: cout<<"FALHA - CARTAO"<<endl;
break;
}
return 0;
}
