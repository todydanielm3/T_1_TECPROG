#ifndef DOMINIO_H
#define DOMINIO_H

#include <string>

class Usuario {
private:
    std::string nome;
    int idade;
    std::string email;

public:
    void setNome(const std::string& novoNome);
    void setIdade(int novaIdade);
    void setEmail(const std::string& novoEmail);

    std::string getNome() const;
    int getIdade() const;
    std::string getEmail() const;
};

#endif

