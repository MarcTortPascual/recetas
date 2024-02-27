#pragma once
#include <vector>
#include <iostream>
typedef struct recipe
{
	std::vector<std::pair<std::string, bool>> ingredients;
}recipe_t;
void init_recipes();