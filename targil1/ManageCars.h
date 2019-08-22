#pragma once
#include "MyCar.h"
#include <list>
#include <vector>

class ManageCars
{
public:
	void add_car(const MyCar &car);
	void remove_car(uint64_t license_number);
	void print_car(uint64_t license_number) const;
	std::vector<MyCar> cars_from_to_years(uint32_t from_year, uint32_t to_year) const;
	std::vector<MyCar> cars_from_to_prices(double from_price, double to_price) const;
	void delete_all();
	void print_all() const;
	
private:
	
	std::list<MyCar> cars_;
	uint64_t car_count_ = 0;
};

