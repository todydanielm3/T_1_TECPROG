#include "dominio.h"

void Usuario::setNome(const std::string& novoNome) {
    nome = novoNome;
}

void Usuario::setIdade(int novaIdade) {
    idade = novaIdade;
}

void Usuario::setEmail(const std::string& novoEmail) {
    email = novoEmail;
}

std::string Usuario::getNome() const {
    return nome;
}

int Usuario::getIdade() const {
    return idade;
}

std::string Usuario::getEmail() const {
    return email;
}
