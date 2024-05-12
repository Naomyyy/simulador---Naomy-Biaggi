#ifndef VARINHA_MAGICA
#define VARINHA_MAGICA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Varinha_Magica: public ArmaAtaque
{
    public:
        Varinha_Magica(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif