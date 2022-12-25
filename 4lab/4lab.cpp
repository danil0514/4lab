#include <string>
#include <iostream>
#include "Aero.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    int choice = 5;
    Aero a;
    int size = 10;
    std::string daysOfWeek[7] = { "Понедельник", "Вторник", "Среда","Четверг", "Пятница", "Суббота", "Воскресенье" };
    Aero set_base[10];
    a.data(set_base);
    while (choice != 0)
    {
        std::cout << "Выберите действие:" << std::endl;
        std::cout << "Список рейсов пункта назначения - 1" << std::endl;
        std::cout << "Список рейсов дня недели - 2" << std::endl;
        std::cout << "Список рейсов дня недели, время вылета для которого больше заданного - 3" << std::endl;
        std::cout << "Выход - 0" << std::endl;
        std::cin >> choice;
        if (choice == 1) 
        {
            a.print_list_Destination(set_base, size);
        }
        if (choice == 2)
        {
            a.print_day(set_base, size);
        }
        if (choice == 3)
        {
            a.print_day_and_time(set_base, size);
        }
    }
}

