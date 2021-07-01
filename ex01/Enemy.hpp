#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{

	public:
		// Constructors and destructors
		Enemy( Enemy const & src );
		Enemy( int hp, std::string const & type );
		virtual ~Enemy();
		// Getters and setters
		std::string const	getType( void ) const;
		int 				getHP( void ) const;
		void				setType( std::string const type );
		void				setHP( int value );
		// Methods and member functions
		virtual void 		takeDamage( int value );
		std::ostream		&print( std::ostream &o ) const;

		Enemy &		operator=( Enemy const & rhs );
	protected:
		Enemy( void );
		std::string	_type;
		int			_hit_points;

};

std::ostream &			operator<<( std::ostream & o, Enemy const & i );

#endif /* *********************************************************** ENEMY_H */