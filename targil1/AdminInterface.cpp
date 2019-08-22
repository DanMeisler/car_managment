#include "AdminInterface.h"
#include <iostream>

void AdminInterface::run()
{
	char chosen_op;
	while (true)
	{
		std::cout << "\nchoose operation: \n";
		std::cin >> chosen_op;
		
		switch (chosen_op)
		{
		case '1':
			add_car();
			break;
		case '2':
			remove_car();
			break;
		case '3':
			print_cars_from_to_years();
			break;
		case '4':
			print_cars_from_to_prices();
			break;
		case '5':
			print_all_cars();
			break;
		case 'q':
			std::cout << "Existing...\n";
			return;
		default:
			std::cout << "Invalid operation, try again\n";
		}
	}
}

void AdminInterface::add_car()
{
	uint64_t license_number;
	double price;
	uint32_t year;
	std::string color;
	std::string manufacturing_country;

	std::cout << "License number: ";
	std::cin >> license_number;
	std::cout << "Price: ";
	std::cin >> price;
	std::cout << "Year: ";
	std::cin >> year;
	std::cout << "Color: ";
	std::cin >> color;
	std::cout << "Manufacturing country: ";
	std::cin >> manufacturing_country;

	MyCar car;
	car.set_license_number(license_number);
	car.set_price(price);
	car.set_year(year);
	car.set_color(color);
	car.set_manufacturing_country(manufacturing_country);
	
	car_manager_.add_car(car);
}

void AdminInterface::remove_car()
{
	uint64_t license_number;
	
	std::cout << "License number: ";
	std::cin >> license_number;

	car_manager_.remove_car(license_number);
}

void AdminInterface::print_cars_from_to_years() const
{
	uint32_t from_year, to_year;
	std::cout << "From year: ";
	std::cin >> from_year;
	std::cout << "To year: ";
	std::cin >> to_year;

	for (const auto &car : car_manager_.cars_from_to_years(from_year, to_year))
	{
		car.print();
	}
}

void AdminInterface::print_cars_from_to_prices() const
{
	double from_price, to_price;
	std::cout << "From price: ";
	std::cin >> from_price;
	std::cout << "To price: ";
	std::cin >> to_price;
	std::cout << std::endl;

	for (const auto &car : car_manager_.cars_from_to_prices(from_price, to_price))
	{
		car.print();
	}
}

void AdminInterface::print_all_cars() const
{
	car_manager_.print_all();
}
