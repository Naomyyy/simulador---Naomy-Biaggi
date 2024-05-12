#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Manopla.hpp"

Manopla :: Manopla(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Manopla::gerarForcaAtaque()
{
    return maxForca;
}

string Manopla::gerarRuidoAtaque()
{
    return "zum";
}
