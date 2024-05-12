#ifndef THANOS
#define THANOS
#include "../core-simulador-hpp/Personagem.hpp"
class Thanos : public Personagem
{
    public:
        Thanos(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif