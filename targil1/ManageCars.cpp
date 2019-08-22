#include "ManageCars.h"
#include <iostream>


void ManageCars::add_car(const MyCar &car)
{
	cars_.push_front(car);
	cars_.sort();
	car_count_ = cars_.size();
}

void ManageCars::remove_car(uint64_t license_number)
{
	cars_.remove_if([license_number](const MyCar &car) { return car.get_license_number() == license_number; });
	car_count_ = cars_.size();
}

void ManageCars::print_car(uint64_t license_number) const
{
	for (const auto &car : cars_)
	{
		if (car.get_license_number() == license_number)
		{
			car.print();
			return;
		}
	}
	
	std::cout << "License " << license_number << " - No such car" << std::endl;
}

std::vector<MyCar> ManageCars::cars_from_to_years(uint32_t from_year, uint32_t to_year) const
{
	std::vector<MyCar> returned_cars;
	for (const auto &car : cars_)
	{
		if (car.get_year() >= from_year && car.get_year() <= to_year)
		{
			returned_cars.push_back(car);
		}
	}

	return returned_cars;
}

std::vector<MyCar> ManageCars::cars_from_to_prices(double from_price, double to_price) const
{
	std::vector<MyCar> returned_cars;
	for (const auto &car : cars_)
	{
		if (car.get_price() >= from_price && car.get_price() <= to_price)
		{
			returned_cars.push_back(car);
		}
	}

	return returned_cars;
}

void ManageCars::delete_all()
{
	cars_.clear();
}

void ManageCars::print_all() const
{
	for (const auto &car : cars_)
	{
		car.print();
		std::cout << std::endl;
	}
}
