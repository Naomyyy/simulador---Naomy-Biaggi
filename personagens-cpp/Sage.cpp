#include "../personagens-hpp/Sage.hpp"

Sage::Sage(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Sage::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Sage::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Sage::pegarDescricao() 
{
    return "Você não matará meus aliados";
}