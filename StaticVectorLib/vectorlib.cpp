#include "pch.h"
#include "vectorlib.h"
#include <cmath>
#include <stdexcept>

// ��������� ����� �������
double calculateLength(const std::vector<double>& vec) {
    double sum = 0.0;
    for (double value : vec) {
        sum += value * value;
    }
    return std::sqrt(sum);
}

// ����������� ������
std::vector<double> normalizeVector(const std::vector<double>& vec) {
    double length = calculateLength(vec);
    if (length == 0) {
        throw std::invalid_argument("���������� ������������� ������� ������.");
    }
    std::vector<double> normalizedVec;
    for (double value : vec) {
        normalizedVec.push_back(value / length);
    }
    return normalizedVec;
}

// ��������� ��������� ������������ ���� ��������
double dotProduct(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    if (vec1.size() != vec2.size()) {
        throw std::invalid_argument("������� ������ ����� ���������� �����.");
    }
    double result = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        result += vec1[i] * vec2[i];
    }
    return result;
}
