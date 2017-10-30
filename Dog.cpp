/*
 * Dog.cpp
 *
 *  Created on: 30 Oct 2017
 *      Author: nikos
 */

#include "Dog.h"
#include <iostream>

namespace Alex {

Dog::Dog() {
	// TODO Auto-generated constructor stub

}

void Dog::initialise_(std::string breed){
	breed_ = breed;
	species_ = "Dog";
	number_of_legs_ = 4;
}

//Dog::Dog(std::string name)
//:Animal(name)
//{
//	initialise_();
//
//}

Dog::Dog(std::string name, std::string breed)
:Animal(name)
{
	initialise_(breed);

}

void Dog::print(){
	Animal::print();
	std::cout<<"Breed is   : "<<breed_<<std::endl;
}


} /* namespace Alex */
