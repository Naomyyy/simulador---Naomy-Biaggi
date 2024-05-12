#ifndef INVENCIBILIDADE
#define INVENCIBILIDADE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Invencibilidade : public ArmaDefesa
{
    public:
        Invencibilidade(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif