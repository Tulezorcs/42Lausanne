#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon; // This is a pointer, not a reference.
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &weapon);
};

//Pointers and references are essentially the same thing, regarding how the computer will do with them. 
//Pointers are more flexible than references. 
//If something should always exist and never change, use a references. 
//But if it should not always exist and can change, use a pointer.

#endif