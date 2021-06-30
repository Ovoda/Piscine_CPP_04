#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{

	public:

		Victim( std::string const name );
		Victim( Victim const & src );
		~Victim();

		Victim &		operator=( Victim const & rhs );

		void		setName( std::string const name );
		std::string	getName( void ) const ;
		
		virtual void		getPolymorphed( void ) const;

	protected:
		Victim( void );
		std::string	_name;

};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif /* ********************************************************** VICTIM_H */