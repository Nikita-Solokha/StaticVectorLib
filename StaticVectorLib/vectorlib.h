#pragma once
#ifndef VECTORLIB_H
#define VECTORLIB_H

#include <vector>

// ��������� ����� �������
double calculateLength(const std::vector<double>& vec);

// ����������� ������
std::vector<double> normalizeVector(const std::vector<double>& vec);

// ��������� ��������� ������������ ���� ��������
double dotProduct(const std::vector<double>& vec1, const std::vector<double>& vec2);

#endif // VECTORLIB_H
