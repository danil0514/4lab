#pragma once
#include <iostream>
#include<string>
#include <string>

class Aero
{
public:
	void data(Aero *set_base);
	void print_list_Destination(Aero* set_base,int size);
	void print_day(Aero* set_base, int size);
	void print_day_and_time(Aero* set_base, int size);
private:
	std::string Destination;
	int number_flinght;
	std::string type_aircraft;
	float time_flinght;
	int day_week;
	

};

