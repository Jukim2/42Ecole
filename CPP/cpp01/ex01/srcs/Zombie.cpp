#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	name = "noname";
}

Zombie::Zombie(std::string name) : name(name)
{

}

Zombie::~Zombie()
{
	std::cout << name << " has been deleted" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
