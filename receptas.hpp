#pragma once
#include <vector>
#include <iostream>
namespace reciptes {
	typedef struct recipe
	{
		std::vector<std::pair<std::string, bool>> ingredients;
		
	}recipe_t;
	std::vector<recipe_t> reciptes;
	void init_recipes();
}
