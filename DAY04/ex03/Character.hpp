
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include <string>

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		//Character();
		Character(std::string name);
		Character(Character const& copy);
		~Character();
		Character& operator=(Character const& copy);

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		std::string const& getName() const;

	private:
		std::string m_name;
		AMateria 	*m_materia[4];

};

#endif
