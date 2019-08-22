#include "MyCar.h"
#include <iostream>


bool MyCar::operator<(const MyCar &car) const
{
	return get_license_number() < car.get_license_number();
}

bool MyCar::compare(const MyCar &car) const
{
	return get_year() < car.get_year();
}

void MyCar::print() const
{
	std::cout << "License number " << get_license_number() << std::endl;
	std::cout << "Price " << get_price() << std::endl;
	std::cout << "Year " << get_year() << std::endl;
	std::cout << "Color " << get_color() << std::endl;
	std::cout << "Manufacturing country " << get_manufacturing_country() << std::endl;
}
