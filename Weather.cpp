#include "Weather.h"

Weather::Weather(std::string, double, double, double, std::string, double, int)
{
	this->city = city;
	this->lon = lon;
	this->lat = lat;
	this->temperature = temperature;
	this->weather = weather;
	this->windSpeed = windSpeed;
	this->clouds = clouds;
}

void Weather::GetWeatherInfo()
{
	std::cout << "city: " << this->city << std::endl;
	std::cout << "Weather: " << this->weather << std::endl;
}
