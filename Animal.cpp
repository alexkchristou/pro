#include "Animal.h"

using namespace Alex;
using std::cout;
using std::endl;

Animal::Animal(std::string name)
:number_of_legs_(0),
 gender_("trans"),
 species_("Unknown")
{
	name_ = name;
}

void Animal::print(){
	cout<<endl;
	cout<<"Name is    : "<<name_<<endl;
	cout<<"Species is : "<<species_<<endl;
	cout<<"nu legs is : "<<number_of_legs_<<endl;
	cout<<"gender  is : "<<gender_<<endl;
	cout<<endl;
}

bool Animal::operator==(const Animal &animal1)const{
	return (this->name_==animal1.getName());
}

bool Animal::can_kill_()const
{
	if (species_ == "Lion" && gender_ == "Male"){
		return true;
	}else{
		return false;
	}

}
