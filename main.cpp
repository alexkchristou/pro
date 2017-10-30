#include <stdio.h>
#include <iostream>
#include "Animal.h"

using namespace Alex;
using namespace std;

int main()
{
	// Make an animal
	auto an_animal = Animal("sparky");
//	an_animal.print();

	auto another_animal = Animal("missy");
//	another_animal.print();
//
//	Animal *ref_to_an_animal = &an_animal;
//	cout<<"An_animal ref address is    : "<<ref_to_an_animal<<endl;
//	cout<<"An_animal actual address is : "<<&an_animal<<endl;

//	ref_to_an_animal->print();

	Animal sparky = an_animal;
	auto missy = another_animal;
//	sparky.setCanKill(true);
//	missy.setCanKill(true);

	if (sparky == an_animal){
		std::cout<<"This animal is the same!"<<std::endl;
	}else{
		std::cout<<"This animal is NOT the same!"<<std::endl;
	}

	cout<<"Sparky is dangerous : "<<sparky.can_animal_kill()<<endl;;
	cout<<std::boolalpha<<"Sparky is dangerous : "<<sparky.can_animal_kill()<<std::noboolalpha<<endl;;
	cout<<"Sparky is dangerous : "<<sparky.can_animal_kill()<<endl;;


	return 0;
}

