//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//template <typename T>
//void permutations(vector<T>& elements, vector<vector<T>>& result)
//{
//    do
//    {
//        result.push_back(elements);
//    } while (next_permutation(elements.begin(), elements.end()));
//}
//
//int main() 
//{
//    vector<int> elements = { 1, 2, 3, 4};
//
//    vector<vector<int>> result;
//    permutations(elements, result);
//
//    // Вывод результатов
//    for (const auto& vec : result)
//    {
//        cout << "(";
//        for (const auto& elem : vec)
//        {
//            cout << elem << " ";
//        }
//        cout << ")" << endl;
//    }
//    system("pause");
//
//    return 0;
//}