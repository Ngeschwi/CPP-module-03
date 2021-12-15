#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	clap_A("Bob");
	ClapTrap	clap_B("Jean");

	clap_A.attack("Jean");
	clap_B.takeDamage(6);
	clap_B.takeDamage(6);
	clap_B.beRepaired(10);

	return 0;
}