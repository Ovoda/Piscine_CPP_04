#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
	public:
		// Constructors and destructors
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon( const AWeapon & src );
		virtual ~AWeapon();
		// Getters and setters
		std::string getName() const;
		int 	getAPCost() const;
		int 	getDamage() const;
		void	setName( std::string const name);
		void	setAPCost( int value);
		void	setDamage(int value );
		// Member functions
		virtual void	attack() const = 0;
		std::ostream	&print( std::ostream &o ) const;

		AWeapon &operator=( AWeapon const &rhs );
	protected:
		AWeapon( void );
		std::string		_name;
		int				_damage;
		int				_ap_cost;

	private:
};

std::ostream &operator<<(std::ostream &o, AWeapon const &i);

#endif /* ********************************************************* AWEAPON_H */