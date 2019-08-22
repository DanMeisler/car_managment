#pragma once
#include "ManageCars.h"

class AdminInterface
{
public:
	void run();
	
private:
	ManageCars car_manager_;

	void add_car();
	void remove_car();
	void print_cars_from_to_years() const;
	void print_cars_from_to_prices() const;
	void print_all_cars() const;
	
};
