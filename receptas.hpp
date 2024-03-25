#pragma once
#include <vector>
#include <iostream>
using namespace std;
namespace reciptes {
	typedef struct recipe
	{
		string name;
		vector<string> must_ingredients;
		vector<string> should_ingredients;
		
	}recipe_t;
	
	void init_recipes();
	vector<recipe_t> get_recipes(vector<string> ingedient);

}
