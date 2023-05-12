#ifndef ENTIDADES_HPP
#define ENTIDADES_HPP

#include <string>
#include "dominio.hpp"

class Entidade{
  private:
    Unidade unidade;
    Integracao integracao;
    Fumaca fumaca;
    Sistema sistema;
    Regressao regressao;
    Aceitacao aceitacao;
    std::string resultado;
    std::string senha;
    std::string telefone;
    std::string texto;

  public:
    Entidade();
    ~Entidade();

    void setUnidade(Unidade& unidade);
    Unidade getUnidade() const;

    void setIntegracao(Integracao& integracao);
    Integracao getIntegracao() const;

    void setFumaca(Fumaca& fumaca);
    Fumaca getFumaca() const;

    void setSistema(Sistema& sistema);
    Sistema getSistema() const;

    void setRegressao(Regressao& regressao);
    Regressao getRegressao() const;

    void setAceitacao(Aceitacao& aceitacao);
    Aceitacao getAceitacao() const;

    void setResultado(std::string& resultado);
    std::string getResultado() const;

    void setSenha(std::string& senha);
    std::string getSenha() const;

    void setTelefone(std::string& telefone);
    std::string getTelefone() const;

    void setTexto(std::string& texto);
    std::string getTexto() const;
};

#endif // ENTIDADES_HPP
