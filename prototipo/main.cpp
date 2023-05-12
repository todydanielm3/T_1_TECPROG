#include "entidade.h"
#include "dominio.h"

int main() {
    CadastroUsuarios cadastro;

    // Criação e adição de usuários
    Usuario usuario1;
    usuario1.setNome("Joao");
    usuario1.setIdade(20);
    usuario1.setEmail("joao@test.com");
    cadastro.adicionarUsuario(usuario1);

    Usuario usuario2;
    usuario2.setNome("Maria");
    usuario2.setIdade(25);
    usuario2.setEmail("maria@test.com");
    cadastro.adicionarUsuario(usuario2);

    // Mostra a lista de usuários
    cadastro.mostrarUsuarios();

    // Remoção de um usuário
    Usuario usuarioRemovido;
    usuarioRemovido.setEmail("joao@test.com");
    cadastro.removerUsuario(usuarioRemovido);

    // Mostra a lista de usuários novamente
    cadastro.mostrarUsuarios();

    return 0;
}
