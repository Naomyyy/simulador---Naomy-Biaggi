#ifndef SAGE
#define SAGE
#include "../core-simulador-hpp/Personagem.hpp"
class Sage : public Personagem
{
    public:
        Sage(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif