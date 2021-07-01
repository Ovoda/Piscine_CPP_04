#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{

public:
	// Constructors and destructors
	Character(Character const &src);
	Character(std::string const &name);
	virtual ~Character();
	// Getters and setters
	std::string const	getName(void ) const;
	void 				setName( std::string const & name );
	void				setAPNumber( int const value );
	int					getAPNumber( void ) const;
	void				setWeapon( AWeapon & weapon);
	AWeapon *			getWeapon( void ) const;
	// Methods and member functions
	void recoverAP( void );
	void equip( AWeapon * weapon );
	void attack( Enemy * enemy );

	Character &operator=(Character const &rhs);

private:
	Character(void);
	std::string _name;
	int			_ap_number;
	AWeapon		*_weapon;

};

std::ostream &operator<<(std::ostream &o, Character const &i);

#endif /* *********************************************************** CHARACTER_H */