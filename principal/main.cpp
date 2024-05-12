#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Amuleto.hpp"
#include "../acessorios-hpp/Armadura.hpp"
#include "../acessorios-hpp/Barreira_Magica.hpp"
#include "../acessorios-hpp/Espada.hpp"
#include "../acessorios-hpp/Invencibilidade.hpp"
#include "../acessorios-hpp/Manopla.hpp"
#include "../acessorios-hpp/Torreta.hpp"
#include "../acessorios-hpp/Totem.hpp"
#include "../acessorios-hpp/Varinha_Magica.hpp"
#include "../acessorios-hpp/Martelo.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Thanos.hpp"
#include "../personagens-hpp/Lux.hpp"
#include "../personagens-hpp/Sage.hpp"
#include "../personagens-hpp/Thor.hpp"
#include "../personagens-hpp/Killjoy.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma1 = new Espada("Espada da verdade",0,20);
    ArmaAtaque* arma2 = new Manopla("Manopla das joias do infinito",0,100);
    ArmaAtaque* arma3 = new Martelo("Mjölnir",0,80);
    ArmaAtaque* arma4 = new Torreta("Robo amigo",0,15);
    ArmaAtaque* arma5 = new Varinha_Magica("Centelha final",0,30);
    ArmaAtaque* arma6 = new Rosa("Super Rosa Amarela",0,10);
    ArmaDefesa* escudo1 = new Barreira_Magica("Barreira Prismatica", 10);
    ArmaDefesa* escudo2 = new Totem("Joia da realidade", 2);
    ArmaDefesa* escudo3 = new Armadura("Couro", 20);
    ArmaDefesa* escudo4 = new Totem("Totem da Ressurreicao", 50);
    ArmaDefesa* escudo5 = new Invencibilidade("Imunine a ataques", 40);
    ArmaDefesa* escudo6 = new Escudo("Latao", 1);
    
    Personagem* p1 = new Sage(1, "Sage", 100, arma1, escudo4);
    Personagem* p2 = new Killjoy(1, "Killjoy", 100, arma4, escudo5);
    Personagem* p3 = new Thor(1, "Thor", 100, arma3, escudo3);
    Personagem* p4 = new Lux(2, "Lux", 100, arma5, escudo1);
    Personagem* p5 = new Thanos(2, "Thanos", 100, arma3, escudo3);
    Personagem* p6 = new Chaves(2, "Chaves", 100, arma6, escudo6);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 1);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 2);
    simulador->adicionarPersonagem(p6, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}