#ifndef ALEX_ANIMAL_H_
#define ALEX_ANIMAL_H_
#include <string>
#include <iostream>

namespace Alex {

class Animal {
public:

	Animal(){};

	Animal(std::string name);

	void print();

	auto getName()const{return name_;}
//	void setCanKill(const bool can_kill){can_kill_a_man_ = can_kill;}
	bool can_animal_kill()const{return can_kill_();}

	bool operator==(const Animal &animal1)const;

protected:
	std::string name_;
	std::string species_;
	int number_of_legs_;
	std::string gender_;

	bool can_kill_()const;

};

} /* namespace Alex */

#endif /* ANIMAL_H_ */
