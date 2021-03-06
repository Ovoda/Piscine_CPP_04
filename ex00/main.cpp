# include "Sorcerer.hpp"
# include "Innocent.hpp"
# include "Victim.hpp"
# include "Peon.hpp"

int main( void )
{
    Sorcerer robert("Robert", "the Magnificent");
    Innocent jax("Jax");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe << jax;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(jax);

    Victim *a = new Peon("a");
    std::cout << *a;
    delete a;
    std::cout << std::endl;
    return 0;
}