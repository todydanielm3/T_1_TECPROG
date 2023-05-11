/**
 * @file dominio.hpp
 * @brief Arquivo com a declaração das classes de domínio.
 */

#ifndef DOMINIO_HPP
#define DOMINIO_HPP

#include <string>

class Unidade {
  private:
    std::string codigo;

  public:
    Unidade();
    ~Unidade();

    void setCodigo(std::string& codigo);
    std::string getCodigo() const;
};

class Fumaca {
  private:
    std::string codigo;

    public:
      Fumaca();
      ~Fumaca();

      void setCodigo(std::string& codigo);
      std::string getCodigo() const;
};

class Sistema {
  private:
    std::string codigo;

  public:
    Sistema();
    ~Sistema();

    void setCodigo(std::string& codigo);
    std::string getCodigo() const;
};


class Regressao {
  private:
    std::string codigo;

  public:
    Regressao();
    ~Regressao();

    void setCodigo(std::string& codigo);
    std::string getCodigo() const;
};

class Aceitacao {
  private:
    std::string codigo;

  public:
    Aceitacao();
    ~Aceitacao();

    void setCodigo(std::string& codigo);
    std::string getCodigo() const;
};

#endif // DOMINIO_HPP


