#ifndef MANOPLA
#define MANOPLA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Manopla: public ArmaAtaque
{
    public:
        Manopla(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif