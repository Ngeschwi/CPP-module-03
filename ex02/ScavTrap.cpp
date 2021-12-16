#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Default construtor ScavTrap called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	*this = src;
	return ;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	if (this != &rhs)
		ClapTrap::setName(ClapTrap::getName());
	return *this;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "Scavtrap " << ClapTrap::getName() << " enterred in gate keeper mode!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap called" << std::endl;
	return ;
}