#ifndef BARREIRA_MAGICA
#define BARREIRA_MAGICA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Barreira_Magica : public ArmaDefesa
{
    public:
        Barreira_Magica(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif