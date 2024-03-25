#include <receptas.hpp>
#include <iostream>

int main() {
	reciptes::init_recipes();
	bool more = true;
	vector<string> user_ingredients;
	while (more)
	{
		string ing = "";

		cout << "Introduce un ingrediente: " << endl;
		cin >> ing ;
		string inglower;
		for (char i : ing) {
			inglower += tolower(i);
		}
		user_ingredients.push_back(inglower);
		cout << "¿Otro?[s/n]: " << endl;
		char m;
		cin >> m;
		more = tolower(m) == 's';
		
	}
	vector<reciptes::recipe_t> results = reciptes::get_recipes(user_ingredients);
	for (reciptes::recipe_t i : results ) {
		cout << i.name << endl;
		for (string j : i.should_ingredients) {
			cout << "A " << i.name << " Le puedes introducir: " << j << endl;
		}
	}
}

