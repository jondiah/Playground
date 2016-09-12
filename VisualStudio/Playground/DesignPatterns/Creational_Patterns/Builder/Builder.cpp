#include "stdafx.h"
#include "Builder.h"

Builder::Builder()
{
	Cook cook;
	HawaiianPizzaBuilder hawaiianPizzaBuilder;
	SpicyPizzaBuilder    spicyPizzaBuilder;

	cook.makePizza(&hawaiianPizzaBuilder);
	cook.openPizza();

	cook.makePizza(&spicyPizzaBuilder);
	cook.openPizza();
}
