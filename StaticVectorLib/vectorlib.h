// vectorlib.h (файл библиотеки StaticVectorLib)

#include <vector>

// Вычисляет длину вектора
double calculateLength(const std::vector<double>& vec);

// Нормализует вектор
std::vector<double> normalizeVector(const std::vector<double>& vec);

// Вычисляет скалярное произведение двух векторов
double dotProduct(const std::vector<double>& vec1, const std::vector<double>& vec2);
