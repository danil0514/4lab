
#include "Aero.h"
#include <iostream>
#include <string>


void Aero::data(Aero *set_base)
{
	
	std::string daysOfWeek[7] = { "�����������", "�������", "�����","�������", "�������", "�������", "�����������" };

	set_base[0].Destination = "Moscow";
	set_base[0].number_flinght = 1;
	set_base[0].type_aircraft = "�������";
	set_base[0].time_flinght = 23.10;
	set_base[0].day_week = 1;

	set_base[1].Destination = "Petersburg";
	set_base[1].number_flinght = 2;
	set_base[1].type_aircraft = "��������";
	set_base[1].time_flinght = 13.20;
	set_base[1].day_week = 2;

	set_base[2].Destination = "Kazan";
	set_base[2].number_flinght = 3;
	set_base[2].type_aircraft = "������������";
	set_base[2].time_flinght = 11.10;
	set_base[2].day_week = 3;

	set_base[3].Destination = "Moscow";
	set_base[3].number_flinght = 4;
	set_base[3].type_aircraft = "��������";
	set_base[3].time_flinght = 1.10;
	set_base[3].day_week = 4;

	set_base[4].Destination = "Petersburg";
	set_base[4].number_flinght = 5;
	set_base[4].type_aircraft = "������������";
	set_base[4].time_flinght = 12.10;
	set_base[4].day_week = 5;

	set_base[5].Destination = "Moscow";
	set_base[5].number_flinght = 6;
	set_base[5].type_aircraft = "�������";
	set_base[5].time_flinght = 4.10;
	set_base[5].day_week = 6;

	set_base[5].Destination = "Moscow";
	set_base[5].number_flinght = 6;
	set_base[5].type_aircraft = "�������";
	set_base[5].time_flinght = 14.10;
	set_base[5].day_week = 7;
	
}

void Aero::print_list_Destination(Aero* set_base, int size)
{
	std::cout << "������� �������� ������ �� ���������" << std::endl;
	std::string sity;
	std::cin >> sity;
	setlocale(LC_ALL, "Russian");
	std::string daysOfWeek[7] = { "�����������", "�������", "�����","�������", "�������", "�������", "�����������" };
	for (int i = 0; i < size; i++)
	{
		if (set_base[i].Destination == sity) 
		{
			std::cout << "����� ���������� - " << set_base[i].Destination << " ����� ����� - " << set_base[i].number_flinght << " ��� �������� - " << set_base[i].type_aircraft
			<< " ����� ������ - " << set_base[i].time_flinght << " ��� ������ - " << daysOfWeek[set_base[i].day_week - 1]<<std::endl;
		}
	}
}

void Aero::print_day(Aero* set_base, int size)
{
	std::cout << "������� ���������� ����� ��� ������ (1 - �����������, 2 - ������� � ��� �����)" << std::endl;
	int day;
	std::cin >> day;
	setlocale(LC_ALL, "Russian");
	std::string daysOfWeek[7] = { "�����������", "�������", "�����","�������", "�������", "�������", "�����������" };
	for (int i = 0; i < size; i++)
	{
		if (set_base[i].number_flinght == day)
		{
			std::cout << "����� ���������� - " << set_base[i].Destination << " ����� ����� - " << set_base[i].number_flinght << " ��� �������� - " << set_base[i].type_aircraft
				<< " ����� ������ - " << set_base[i].time_flinght << " ��� ������ - " << daysOfWeek[set_base[i].day_week - 1] << std::endl;
		}
	}
}

void Aero::print_day_and_time(Aero* set_base, int size)
{
	std::cout << "������� ���������� ����� ��� ������ (1 - �����������, 2 - ������� � ��� �����)" << std::endl;
	int day;
	float time;
	std::cin >> day;
	std::cout << "������� ����� ����� �����, ��� 1.11)" << std::endl;
	std::cin >> time;
	setlocale(LC_ALL, "Russian");
	std::string daysOfWeek[7] = { "�����������", "�������", "�����","�������", "�������", "�������", "�����������" };
	for (int i = 0; i < size; i++)
	{
		if (set_base[i].number_flinght == day)
		{
			if (set_base[i].time_flinght > time)
			{
				std::cout << "����� ���������� - " << set_base[i].Destination << " ����� ����� - " << set_base[i].number_flinght << " ��� �������� - " << set_base[i].type_aircraft
					<< " ����� ������ - " << set_base[i].time_flinght << " ��� ������ - " << daysOfWeek[set_base[i].day_week - 1] << std::endl;
			}
		}
	}
}


