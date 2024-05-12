#include "../personagens-hpp/Killjoy.hpp"

Killjoy::Killjoy(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Killjoy::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Killjoy::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Killjoy::pegarDescricao() 
{
    return "Ahh é melhor fugirem!";
}