#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	scav_A("Bob");

	scav_A.attack("Jean");
	scav_A.takeDamage(6);
	scav_A.beRepaired(10);
	scav_A.guardGate();

	return 0;
}
