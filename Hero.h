#pragma once
#include <iostream>
using namespace std;
class Hero
{
	int i, j, coins, steps = 0;
public:
	//������� ��������� (��������� ������� ���������)
	int health = 3;
	Hero(int _i=0, int _j=0) {
		i = _i;
		j = _j;
	}
	//���������� x
	int geti() const;
	//���������� y
	int getj() const;
	//���������� ����� �����
	int getcoins() const;
	//���������� ����� ����� �����
	int getsteps() const;
	//��������� ����� �����
	void addsteps();
	//����������� ����� �����
	void addcoins();
	//������������ ���������
	void move(int _i = 0, int _j = 0) {
		i = _i;
		j = _j;
	}
	//������ ���������
	friend ostream& operator<<(ostream& out, const Hero& h);
	//������ �����
	void removehealth();
	//������� ����� ��
	int gethealth() const;
};