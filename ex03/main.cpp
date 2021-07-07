#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main(void)
{
    IMateriaSource *src = new MateriaSource();

    Ice *iceBluepPrint = new Ice;
    Cure *cureBluepPrint = new Cure;

    src->learnMateria(iceBluepPrint);
    src->learnMateria(cureBluepPrint);

    ICharacter *me = new Character("me");
    AMateria *ice;
    AMateria *cure;

    ice = src->createMateria("ice");
    me->equip(ice);
    cure = src->createMateria("cure");
    me->equip(cure);

    ICharacter *bob = new Character("bob");

    std::cout << "XP slot 0 = " << ice->getXP() << std::endl;
    std::cout << "XP slot 1 = " << cure->getXP() << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    std::cout << "XP slot 0 = " << ice->getXP() << std::endl;
    std::cout << "XP slot 1 = " << cure->getXP() << std::endl;

    Character main("main");
    Character copy("copy");

    main.equip(ice);
    copy = main;
    main.equip(cure);

    std::cout << std::endl << "Main should have both abilities" << std::endl;
    main.use(0, *bob);
    main.use(1, *bob);
    std::cout << std::endl << "Copy should have only one ability" << std::endl;
    copy.use(0, *bob);
    copy.use(1, *bob);

    AMateria *iceClone;

    iceClone = ice->clone();
    std::cout << "Main type : " << ice->getType() << ", main xp :" << ice->getXP() << std::endl;
    std::cout << "Clone type : " << iceClone->getType() << ", clone xp :" << iceClone->getXP() << std::endl;

    delete bob;
    delete src;
    delete me;
    delete ice;
    delete cure;
    delete iceClone;
    delete iceBluepPrint;
    delete cureBluepPrint;
    return 0;
}