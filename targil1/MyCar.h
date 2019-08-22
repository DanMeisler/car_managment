#pragma once
#include <string>
#include <cstdint>


class MyCar
{
public:
	//MyCar() = default;
	//MyCar(const MyCar &) = default;
	//MyCar(MyCar &&) = default;
	//MyCar &operator=(const MyCar &) = default;
	//MyCar &operator=(MyCar &&) = default;
	//virtual ~MyCar() = default;

	bool operator<(const MyCar &) const;
	
	bool compare(const MyCar &car) const;
	void print() const;
	
	uint64_t get_license_number() const
	{
		return license_number_;
	}

	void set_license_number(uint64_t license_number)
	{
		license_number_ = license_number;
	}

	double get_price() const
	{
		return price_;
	}

	void set_price(double price)
	{
		price_ = price;
	}

	uint32_t get_year() const
	{
		return year_;
	}

	void set_year(uint32_t year)
	{
		year_ = year;
	}

	const std::string &get_color() const
	{
		return color_;
	}

	void set_color(const std::string &color)
	{
		color_ = color;
	}

	const std::string &get_manufacturing_country() const
	{
		return manufacturing_country_;
	}

	void set_manufacturing_country(const std::string &manufacturing_country)
	{
		manufacturing_country_ = manufacturing_country;
	}

private:
	uint64_t license_number_ = 0;
	double price_ = 0;
	uint32_t year_ = 0;
	std::string color_;
	std::string manufacturing_country_;
};
