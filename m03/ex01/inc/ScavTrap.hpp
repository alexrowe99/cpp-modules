#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string n);
		ScavTrap(ScavTrap &old);
		ScavTrap &ScavTrap::operator=(ScavTrap &old);
		void attack(const std::string &target);
		void guardGate(void);
		~ScavTrap();
};

#endif