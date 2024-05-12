#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Torreta.hpp"

Torreta::Torreta(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Torreta::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Torreta::gerarRuidoAtaque()
{
    return "pip pip pip";
}
