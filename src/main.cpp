#include <iostream>
#include "dominio.hpp"
#include "entidade.hpp"

int main() {
    // Criar instâncias das classes de domínio
    Unidade unidade;
    Integracao integracao;
    Fumaca fumaca;
    Sistema sistema;
    Regressao regressao;
    Aceitacao aceitacao;

    // Definir valores para os atributos das classes de domínio
    unidade.setCodigo("ABC123");
    integracao.setCodigo("DEF456");
    fumaca.setCodigo("GHI789");
    sistema.setCodigo("JKL012");
    regressao.setCodigo("MNO345");
    aceitacao.setCodigo("PQR678");

    // Criar instância da classe de entidade
    Entidade entidade;

    // Definir os valores para os atributos da entidade
    entidade.setUnidade(unidade);
    entidade.setIntegracao(integracao);
    entidade.setFumaca(fumaca);
    entidade.setSistema(sistema);
    entidade.setRegressao(regressao);
    entidade.setAceitacao(aceitacao);
    entidade.setResultado("aprovado");

    // Obter os valores dos atributos da entidade
    Unidade unidadeObtida = entidade.getUnidade();
    Integracao integracaoObtida = entidade.getIntegracao();
    Fumaca fumacaObtida = entidade.getFumaca();
    Sistema sistemaObtido = entidade.getSistema();
    Regressao regressaoObtida = entidade.getRegressao();
    Aceitacao aceitacaoObtida = entidade.getAceitacao();
    std::string resultadoObtido = entidade.getResultado();

    // Imprimir os valores obtidos
    std::cout << "Unidade: " << unidadeObtida.getCodigo() << std::endl;
    std::cout << "Integração: " << integracaoObtida.getCodigo() << std::endl;
    std::cout << "Fumaça: " << fumacaObtida.getCodigo() << std::endl;
    std::cout << "Sistema: " << sistemaObtido.getCodigo() << std::endl;
    std::cout << "Regressão: " << regressaoObtida.getCodigo() << std::endl;
    std::cout << "Aceitação: " << aceitacaoObtida.getCodigo() << std::endl;
    std::cout << "Resultado: " << resultadoObtido << std::endl;

    return 0;
}
 

