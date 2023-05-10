#ifndef ENTIDADES_HPP
#define ENTIDADES_HPP

#include "dominio.hpp"

class Entidade{
pubclic:
  Entidade();
  virtual ~Entidade();

  //Metodos virtuais puros que devem ser implementados pelas classes filhas
  virtual std::string obterDescricao() const = 0;

};

#endif // ENTIDADES_HPP
