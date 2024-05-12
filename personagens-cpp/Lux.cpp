#include "../personagens-hpp/Lux.hpp"

Lux::Lux(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Lux::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Lux::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Lux::pegarDescricao() 
{
    return "Demaciaaaaaa!";
}