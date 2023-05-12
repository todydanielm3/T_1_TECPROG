#include "entidade.h"
#include <iostream>

void CadastroUsuarios::adicionarUsuario(const Usuario& novoUsuario) {
    usuarios.push_back(novoUsuario);
}

void CadastroUsuarios::removerUsuario(const Usuario& usuarioRemovido) {
    for (auto it = usuarios.begin(); it != usuarios.end(); ++it) {
        if (it->getEmail() == usuarioRemovido.getEmail()) {
            usuarios.erase(it);
            break;
        }
    }
}

void CadastroUsuarios::mostrarUsuarios() {
    for (const auto& usuario : usuarios) {
        std::cout << "Nome: " << usuario.getNome() << std::endl;
        std::cout << "Idade: " << usuario.getIdade() << std::endl;
        std::cout << "Email: " << usuario.getEmail() << std::endl;
        std::cout << "------------------------" << std::endl;
    }
}
