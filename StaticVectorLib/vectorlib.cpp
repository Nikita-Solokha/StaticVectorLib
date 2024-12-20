#include "pch.h"
#include "vectorlib.h"
#include <cmath>
#include <stdexcept>
#include <iostream> // Для вывода сообщений

// Проверяет, является ли вектор нулевым
bool isZeroVector(const std::vector<double>& vec) {
    for (double value : vec) {
        if (value != 0.0) {
            return false;
        }
    }
    return true;
}

// Вычисляет длину вектора
double calculateLength(const std::vector<double>& vec) {
    if (isZeroVector(vec)) {
        std::cout << "Вектор равен нулю." << std::endl;
    }

    double sum = 0.0;
    for (double value : vec) {
        sum += value * value;
    }
    return std::sqrt(sum);
}

// Нормализует вектор
std::vector<double> normalizeVector(const std::vector<double>& vec) {
    double length = calculateLength(vec);
    if (length == 0) {
        throw std::invalid_argument("Невозможно нормализовать нулевой вектор.");
    }
    std::vector<double> normalizedVec;
    for (double value : vec) {
        normalizedVec.push_back(value / length);
    }
    return normalizedVec;
}

// Вычисляет скалярное произведение двух векторов
double dotProduct(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    if (vec1.size() != vec2.size()) {
        throw std::invalid_argument("Векторы должны иметь одинаковую длину.");
    }
    if (isZeroVector(vec1) || isZeroVector(vec2)) {
        std::cout << "Один из векторов равен нулю." << std::endl;
    }

    double result = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        result += vec1[i] * vec2[i];
    }
    return result;
}
