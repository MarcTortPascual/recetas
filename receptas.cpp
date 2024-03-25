#include "receptas.hpp"
#include <map>
using namespace std;
vector<reciptes::recipe_t> reciptes_list;
#define obligatorio(recepta,ingrediente) recepta.must_ingredients.push_back(ingrediente);
#define opcional(recepta,ingrediente) recepta.should_ingredients.push_back(ingrediente);
#define alta(recepta)reciptes_list.push_back(recepta);
void reciptes::init_recipes() {
	reciptes::recipe_t tortilla_de_patatas;
	tortilla_de_patatas.name = "Tortilla de patatas";
	obligatorio(tortilla_de_patatas,"patatas")
	obligatorio(tortilla_de_patatas, "huevo")
	opcional(tortilla_de_patatas,"cebolla")
	alta(tortilla_de_patatas)
	reciptes::recipe_t sopa;
	sopa.name = "Sopa";
	obligatorio(sopa, "apio")
	obligatorio(sopa, "puerro")
	obligatorio(sopa, "nabo")
	opcional(sopa,"hueso de jamon")
	opcional(sopa, "pollo")
	alta(sopa)
	reciptes::recipe_t paella;
	paella.name = "Paella";
	obligatorio(paella,"arroz")
	obligatorio(paella,"azafran")
	opcional(paella,"conejo")
	opcional(paella,"pollo")
	alta(paella)
	reciptes::recipe_t pollo_relleno;
	pollo_relleno.name = "Pollo relleno";
	obligatorio(pollo_relleno,"pollo")
	obligatorio(pollo_relleno,"queso")
	obligatorio(pollo_relleno, "jamon")
	opcional(pollo_relleno,"huevo")
	opcional(pollo_relleno, "olivas")
	opcional(pollo_relleno, "pimiento")
	alta(pollo_relleno)
	reciptes::recipe_t pizza_jamon_queso;
	pizza_jamon_queso.name = "Pizza de jamon";
	opcional(pizza_jamon_queso, "queso")
	opcional(pizza_jamon_queso,"pimiento")
	opcional(pizza_jamon_queso, "olivas")
	obligatorio(pizza_jamon_queso, "jamon")
	obligatorio(pizza_jamon_queso, "tomate")
	alta(pizza_jamon_queso)
	reciptes::recipe_t empanadillas_de_atun;
	empanadillas_de_atun.name = "Empanadillas de atun";
	obligatorio(empanadillas_de_atun,"holjandre")
	obligatorio(empanadillas_de_atun,"atun")
	opcional(empanadillas_de_atun,"huevo")
	opcional(empanadillas_de_atun,"tomate")
	alta(empanadillas_de_atun)
	reciptes::recipe_t ensaladaconlechuga;
	ensaladaconlechuga.name = "Ensalada con lechuga";
	obligatorio(ensaladaconlechuga,"lechuga")
	opcional(ensaladaconlechuga,"tomate")
	opcional(ensaladaconlechuga,"pimiento")
	opcional(ensaladaconlechuga,"olivas")
	alta(ensaladaconlechuga)
	reciptes::recipe_t flan_con_nata;
	flan_con_nata.name = "Flan con nata";
	obligatorio(flan_con_nata, "leche")
	obligatorio(flan_con_nata, "huevo")
	obligatorio(flan_con_nata, "azucar")
	obligatorio(flan_con_nata, "nata")
	alta(flan_con_nata)
	reciptes::recipe_t macarones_con_boloniesa;
	macarones_con_boloniesa.name = "Macarrones con boloñesa";
	obligatorio(macarones_con_boloniesa, "macarrones")
	obligatorio(macarones_con_boloniesa, "tomate")
	obligatorio(macarones_con_boloniesa, "carne picada")
	opcional(macarones_con_boloniesa,"queso")
	alta(macarones_con_boloniesa)
	reciptes::recipe_t mayonesa;
	mayonesa.name = "Mayonesa";
	obligatorio(mayonesa,"huevo")
	obligatorio(mayonesa,"aceite")
	alta(mayonesa)
	
	cout << "ok" << endl;
}
vector<reciptes::recipe_t> reciptes::get_recipes(vector<string> ingredient) {
	vector<reciptes::recipe_t> valids;
	int aciertos = 0;
	for(recipe_t re : reciptes_list) {
		for (string ing : re.must_ingredients) {
			for (string ing2 : ingredient) {
				if (ing2 == ing) {
					aciertos++;
				}
			}
		}
		if (aciertos == re.must_ingredients.size()) {
			valids.push_back(re);
		}
		aciertos = 0;
	}
	return valids;
}
