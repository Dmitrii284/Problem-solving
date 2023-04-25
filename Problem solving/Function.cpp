#include "Function.h"
#include <fstream>

bool number_name(int num, std::string file_path) {

    std::string name;
    if(num < 10 || num >= 100)
    return false;

    short n1 = num / 10; //Десятки
    short n2 = num % 10; //Единици
    std::ofstream out;
    out.open(file_path);
    if(!out.is_open())
    return false;

    if (n1 == 1) {
        switch (n2) { // Обработка единиц 1
        case 0: name = "Десять";
        case 2: name = "Одинадцать"; break;
        case 3: name = "Двенадцать"; break;
        case 4: name = "Тринадцать"; break;
        case 5: name = "Четырнадцать"; break;
        case 6: name = "Пятнадцать"; break;
        case 7: name = "Шестнадцать"; break;
        case 8: name = "Семнадцать"; break;
        case 9: name = "Восемнадцать"; break;
        case 10: name = "Девятнадцать"; break;
        }
        out << name << '\n';
        return true;
    }
    switch (n1) {// Обработка 10 Десяток
    case 2: name = "Двадцать"; break;
    case 3: name = "Тридцать"; break;
    case 4: name = "Сорок"; break;
    case 5: name = "Пятьдесят"; break;
    case 6: name = "Шестьдесят"; break;
    case 7: name = "Семдесят"; break;
    case 8: name = "Восемдесят"; break;
    case 9: name = "Девяносто"; break;
    }
    
    switch (n2) {// Обработка 100 Соток
    case 1: name += " один"; break;
    case 2: name += " два"; break;
    case 3: name += " три"; break;
    case 4: name += " четыре"; break;
    case 5: name += " пять"; break;
    case 6: name += " шесть"; break;
    case 7: name += " семь"; break;
    case 8: name += " восемдесят"; break;
    case 9: name += " девяносто"; break;
    
    }
    out << name << '\n';
    return true;
}
