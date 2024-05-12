#include "../personagens-hpp/Thanos.hpp"

Thanos::Thanos(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Thanos::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Thanos::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Thanos::pegarDescricao() 
{
    return "Perfeitamente equilibrado. Como todas as coisas devem ser";
}