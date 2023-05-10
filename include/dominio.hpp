#ifndef DOMINIO_HPP
#define DOMINIO_HPP

#include <string>

class Dominio {
  public:
    Dominio();
    virtual ~Dominio();

    //Metodos virtuais puros que devem ser implementados pelas classes filhas
    virtual bool validar() const = 0;
    virtual std::string obterDescricao() const = 0;


};

#endif // DOMINIO_HPP

