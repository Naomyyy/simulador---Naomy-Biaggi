#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Barreira_Magica.hpp"

Barreira_Magica::Barreira_Magica(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Barreira_Magica::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Barreira_Magica::getResistencia() 
{
    return this->resistencia;
}