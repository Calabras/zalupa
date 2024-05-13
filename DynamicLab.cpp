#include <iostream>
#include "DynamicLab.h"
#include "Hero.h"
#include "EmptyCell.h"
using namespace std;

DynamicLab::DynamicLab(int _rows, int _cols, int _counthealth) : rows(_rows), cols(_cols), healths(_counthealth), m(nullptr) {
    m = new Cell * *[rows];
    for (int i = 0; i < rows; i++) {
        m[i] = new Cell * [cols];
        for (int j = 0; j < cols; j++) {
            m[i][j] = new EmptyCell();
        }
    }
}

//деструктор
DynamicLab::~DynamicLab() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            delete m[i][j]; 
        }
        delete[] m[i];
    }
    delete[] m;
}

//конструктор копирования
DynamicLab::DynamicLab(const DynamicLab& second_lab) : rows(second_lab.rows), cols(second_lab.cols), healths(second_lab.healths), m(nullptr) {
    m = new Cell * *[rows];
    for (int i = 0; i < rows; i++) {
        m[i] = new Cell * [cols];
        for (int j = 0; j < cols; j++) {
           m[i][j]=second_lab.m[i][j]->copy();
        }
    }
}

//перегрузка операции присваивания =
DynamicLab& DynamicLab::operator=(const DynamicLab& second_lab) {
    if (this != &second_lab) { 
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                delete m[i][j];
            }
            delete[] m[i];
        }
        delete[] m;

        // Копирование размеров лабиринта
        rows = second_lab.rows;
        cols = second_lab.cols;
        //Копирование числа хп
        healths = second_lab.healths;
        
        m = new Cell * *[rows];
        for (int i = 0; i < rows; i++) {
            m[i] = new Cell * [cols];
            for (int j = 0; j < cols; j++) {
                m[i][j] = second_lab.m[i][j]->copy();
            }
        }
    }
    return *this; 
}


//перегрузка оператора []
Cell** DynamicLab::operator[](int row) const {
    if (row >= 0 && row < rows) {
        return m[row];
    }
    else {
        return nullptr;
    }
}

istream& operator>>(istream& in, DynamicLab& labirint) {
    for (int i = 0; i < labirint.getrows(); i++) {
        for (int j = 0; j < labirint.getcols(); j++) {
            // Создаем временный указатель на Cell
            Cell* tempCell = nullptr;
            in >> tempCell;
            // Удаляем предыдущую клетку, если она существует
            delete labirint[i][j];
            // Присваиваем новую клетку позиции в лабиринте
            labirint[i][j] = tempCell;
        }
        in.ignore();
    }
    return in;
}

//операция вывода лабиринта в файл
ostream& operator<<(ostream& out, DynamicLab& labirint)
{
    for (int i = 0; i < labirint.rows; i++) {
        for (int j = 0; j < labirint.cols; j++) {
            out << *labirint[i][j];
        }
        out << endl;
    }
    return out;
}
