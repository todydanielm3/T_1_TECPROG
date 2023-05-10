#include "entidade.hpp"



//Implementação dos métodos da classe Entidade

Entidade::Entidade(){
  //Inicialização dos atributos da classe
}

Entidade::~Entidade(){
  //Destrutor
}



void Entidade::setUnidade(const Unidade &unidade){
  this->unidade = unidade;
}

Unidade Entidade::getUnidade() const{
  return unidade;
}

void Entidade::setIntegracao(const Integracao &integracao){
  this->integracao = integracao;
}

Integracao Entidade::getIntegracao() const{
  return integracao;
}

void Entidade::setFumaca(const Fumaca &fumaca){
  this->fumaca = fumaca;
}

Fumaca Entidade::getFumaca() const{
  return fumaca;
}

void Entidade::setSistema(const Sistema &sistema){
  this->sistema = sistema;
} 

Sistema Entidade::getSistema() const{
  return sistema;
}

void Entidade::setRegressao(const Regressao &regressao){
  this->regressao = regressao;
}

Regressao Entidade::getRegressao() const{
  return regressao;
}

void Entidade::setAceitacao(const Aceitacao &aceitacao){
  this->aceitacao = aceitacao;
}

Aceitacao Entidade::getAceitacao() const{
  return aceitacao;
}

void Entidade::setResultado(const Resultado &resultado){
  this->resultado = resultado;
}

Resultado Entidade::getResultado() const{
  return resultado;
}

