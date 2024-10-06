//#include <iostream>
//#include <vector>
//#include <iterator>
//#include <algorithm>
//
//template <typename T>
//void cartesianProduct(const std::vector<std::vector<T>>& input, std::vector<std::vector<T>>& output) {
//	if (input.empty()) {
//		return;
//	}
//
//	// Инициализация с первым вектором
//	output = input;
//
//	// Объединение с остальными векторами
//	for (auto it = std::next(input.begin()); it != input.end(); ++it) {
//		std::vector<std::vector<T>> newOutput;
//		std::for_each(
//			output.begin(), output.end(),
//			[&](const std::vector<T>& vec1) {
//				std::for_each(
//					it->begin(), it->end(),
//					[&](const T& elem) {
//						auto temp = vec1;
//						temp.push_back(elem);
//						newOutput.push_back(temp);
//					}
//				);
//			}
//		);
//		output = newOutput;
//	}
//}
//
//int main() {
//	std::vector<std::vector<int>> sets = { {1, 2}, {3, 4}, {5, 6} };
//
//	std::vector<std::vector<int>> result;
//	cartesianProduct(sets, result);
//
//	// Вывод результатов
//	for (const auto& vec : result) {
//		std::cout << "(";
//		std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, ", "));
//		std::cout << ")" << std::endl;
//	}
//
//	return 0;
//}