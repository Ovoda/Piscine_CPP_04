#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main(void)
{
    IMateriaSource *src = new MateriaSource;

    std::cout << "___ Learning Materia (Ice, Cure, Null) ___" << std::endl;
    src->learnMateria(new Ice);
    src->learnMateria(new Cure);
    src->learnMateria(NULL);
    std::cout << "    ----------------------------------" << std::endl
              << std::endl;

    ICharacter *me = new Character("me");

    AMateria *tmp;

    std::cout << "___ Creating Materia (Fire, Ice, Cure) ___" << std::endl;
    tmp = src->createMateria("fire");
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << "    ----------------------------------" << std::endl
              << std::endl;

    ICharacter *bob = new Character("bob");

    std::cout << "___ Using Materia on Bob (0, 1, 42) ___" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(42, *bob);
    std::cout << "    ----------------------------------" << std::endl
              << std::endl;

    ICharacter *copy = new Character;
    copy = me;
    me->unequip(1);
    std::cout << "___ Using Materia on Bob (0, 1, 42) [COPY] ___" << std::endl;
    copy->use(0, *bob);
    copy->use(1, *bob);
    copy->use(42, *bob);
    std::cout << "    ----------------------------------" << std::endl
              << std::endl;

    std::cout << "___ Unequiping Materia (0, 1, 42) ___" << std::endl;
    me->unequip(0);
    me->unequip(1);
    me->unequip(42);
    std::cout << "    ----------------------------------" << std::endl
              << std::endl;

    delete bob;
    delete me;
    delete src;
    return 0;
}