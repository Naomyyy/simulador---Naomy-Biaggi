#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Invencibilidade.hpp"

Invencibilidade::Invencibilidade(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Invencibilidade::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Invencibilidade::getResistencia() 
{
    return this->resistencia;
}