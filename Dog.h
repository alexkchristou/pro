#ifndef DOG_H_
#define DOG_H_

#include "Animal.h"
#include <string>

namespace Alex {

class Dog : public Animal {
public:
	Dog();
	Dog(std::string name, std::string breed = "Unknown");

	auto getBreed()const{return breed_;}

	void print();

private:
	std::string breed_;
	void initialise_(std::string breed = "Unknown");

};

} /* namespace Alex */

#endif /* DOG_H_ */
