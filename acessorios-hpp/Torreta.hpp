#ifndef TORRETA
#define TORRETA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Torreta: public ArmaAtaque
{
    public:
        Torreta(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif