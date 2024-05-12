#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Totem.hpp"

Totem::Totem(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Totem::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Totem::getResistencia() 
{
    return this->resistencia;
}