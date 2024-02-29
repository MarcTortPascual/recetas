#include "receptas.hpp"


void reciptes::init_recipes() {

	reciptes::recipe_t tortilla_de_patatas;
	tortilla_de_patatas.ingredients.push_back(make_pair("patatas", true));
	tortilla_de_patatas.ingredients.push_back(make_pair("huevos", true));
	tortilla_de_patatas.ingredients.push_back(make_pair("cebolla", false));
	reciptes::recipe_t sopa;
	sopa.ingredients.push_back(make_pair("apio", true));
	sopa.ingredients.push_back(make_pair("nabo", true));
	sopa.ingredients.push_back(make_pair("chirivia", true));
	sopa.ingredients.push_back(make_pair("hueso de jamón", false));
	sopa.ingredients.push_back(make_pair("pollo", false));
	sopa.ingredients.push_back(make_pair("ternera", true));
	reciptes::recipe_t paella;
	paella.ingredients.push_back(make_pair("arroz", true));
	reciptes::recipe_t pollo_relleno;
	reciptes::recipe_t empanadillas_de_atun;
	reciptes::recipe_t ensalada;
	reciptes::recipe_t flan_con_nata;
	reciptes::recipe_t helado_frito;
	reciptes::recipe_t macarones_con_boloñesa;
	reciptes::recipe_t mayonesa;

	cout << "ok" << endl;
}
