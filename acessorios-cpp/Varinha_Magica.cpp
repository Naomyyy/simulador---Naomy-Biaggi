#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Varinha_Magica.hpp"

Varinha_Magica::Varinha_Magica(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Varinha_Magica::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Varinha_Magica::gerarRuidoAtaque()
{
    return "pim pi lilim";
}
