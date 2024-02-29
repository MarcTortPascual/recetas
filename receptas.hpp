#pragma once
#include <vector>
#include <iostream>
using namespace std;
namespace reciptes {
	vector<recipe_t> reciptes;
	typedef struct recipe
	{
		vector<pair<string, bool>> ingredients;
		
	}recipe_t;
	void init_recipes();
}
