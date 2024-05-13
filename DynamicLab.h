#pragma once
#include <iostream>
#include "Cell.h"
using namespace std;

class DynamicLab {
private:
    Cell*** m;
    int rows, cols, healths;
public:
    //конструктор для динамического массива 
    DynamicLab(int rows = 0, int cols = 0, int healths=0);
    //деструктор для него
    ~DynamicLab();

    //конструктор копирования
    DynamicLab(const DynamicLab& second_lab);
    //перегрузка операции присваивания =
    DynamicLab& operator=(const DynamicLab& second_lab);

    //перегрузка оператора []
    Cell**operator[](int row) const;

    //получить текущее число строк и столбцов
    int getrows() const { return rows; }
    int getcols() const { return cols; }
    int gethealth() const { return healths; }

    //возможно ненужный метод
    Cell*& get(int x, int y) { return m[y][x]; };

    //считывание лабииринта из файла
    friend istream& operator>>(istream& in, DynamicLab& labirint);
    //вывод лабиринта в файл
    friend ostream& operator<<(ostream& out, DynamicLab& labirint);
};
