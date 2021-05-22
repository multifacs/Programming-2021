#pragma once
#include <iostream>

struct MonomialData
{
	double M;
	int dim;
	double* data;

	MonomialData(int t = 0);
	MonomialData(const MonomialData& other);
	~MonomialData();

	MonomialData& operator = (const MonomialData& other);

	bool operator==(const MonomialData& other);
	bool operator>(const MonomialData& other);
	bool operator<(const MonomialData& other);

	MonomialData* operator+(const MonomialData& other);
	MonomialData* operator-(const MonomialData& other);
	MonomialData operator*(const MonomialData& other);
	MonomialData operator/(const MonomialData& other);

	friend std::ostream& operator << (std::ostream& ostr, const MonomialData& m);
};