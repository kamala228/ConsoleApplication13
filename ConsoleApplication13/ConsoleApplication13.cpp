//#include <iostream>
//#include <vector>
//using namespace std;
//
//void addColumn(vector<vector<int>>& matrix, int position, const vector<int>& newColumn) {
//    int rows = matrix.size();
//    for (int i = 0; i < rows; i++) {
//        matrix[i].insert(matrix[i].begin() + position, newColumn[i]);
//    }
//}
//
//int main() {
//    system("chcp 1251>null");
//    int M, N;
//    cout << "Введите количество строк и столбцов массива: ";
//    cin >> M >> N;
//
//    vector<vector<int>> matrix(M, vector<int>(N));
//    cout << "Введите элементы матрицы:" << endl;
//    for (int i = 0; i < M; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//
//    vector<int> newColumn(M);
//    cout << "Введите новый столбец: ";
//    for (int i = 0; i < M; i++) {
//        cin >> newColumn[i];
//    }
//
//    int position;
//    cout << "Введите позицию для добавления столбца (0 - в начало): ";
//    cin >> position;
//
//    addColumn(matrix, position, newColumn);
//
//    cout << "Результирующая матрица:" << endl;
//    for (const auto& row : matrix) {
//        for (int elem : row) cout << elem << " ";
//        cout << endl;
//    }
//
//    return 0;
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//
//void removeColumn(vector<vector<int>>& matrix, int position) {
//    int rows = matrix.size();
//    for (int i = 0; i < rows; i++) {
//        matrix[i].erase(matrix[i].begin() + position);
//    }
//}
//
//int main() {
//    system("chcp 1251>null");
//    int M, N;
//    cout << "Введите количество строк и столбцов массива: ";
//    cin >> M >> N;
//
//    vector<vector<int>> matrix(M, vector<int>(N));
//    cout << "Введите элементы матрицы:" << endl;
//    for (int i = 0; i < M; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//
//    int position;
//    cout << "Введите номер столбца для удаления (0 - первый столбец): ";
//    cin >> position;
//
//    removeColumn(matrix, position);
//
//    cout << "Результирующая матрица:" << endl;
//    for (const auto& row : matrix) {
//        for (int elem : row) cout << elem << " ";
//        cout << endl;
//    }
//
//    return 0;
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//
//void shiftRows(vector<vector<int>>& matrix, int shifts, bool direction) {
//    int M = matrix.size();
//    shifts %= M;
//    if (direction) {
//        for (int i = 0; i < shifts; i++) {
//            vector<int> temp = matrix.back();
//            for (int j = M - 1; j > 0; j--) {
//                matrix[j] = matrix[j - 1];
//            }
//            matrix[0] = temp;
//        }
//    }
//    else {
//        for (int i = 0; i < shifts; i++) {
//            vector<int> temp = matrix[0];
//            for (int j = 0; j < M - 1; j++) {
//                matrix[j] = matrix[j + 1];
//            }
//            matrix[M - 1] = temp;
//        }
//    }
//}
//
//int main() {
//    int M, N, shifts;
//    bool direction;
//
//    cout << "Введите количество строк и столбцов массива: ";
//    cin >> M >> N;
//
//    vector<vector<int>> matrix(M, vector<int>(N));
//    cout << "Введите элементы матрицы:" << endl;
//    for (int i = 0; i < M; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//
//    cout << "Введите количество сдвигов: ";
//    cin >> shifts;
//
//    cout << "Направление сдвига (1 - вправо, 0 - влево): ";
//    cin >> direction;
//
//    shiftRows(matrix, shifts, direction);
//
//    cout << "Матрица после сдвига:" << endl;
//    for (const auto& row : matrix) {
//        for (int elem : row) cout << elem << " ";
//        cout << endl;
//    }
//
//    return 0;
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//
//void fillMatrix(vector<vector<int>>& matrix, int rows, int cols) {
//    cout << "Введите элементы матрицы (" << rows << "x" << cols << "):" << endl;
//    matrix.resize(rows, vector<int>(cols));
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//}
//
//bool isInVector(int value, const vector<int>& vec) {
//    for (int elem : vec) {
//        if (elem == value) {
//            return true;
//        }
//    }
//    return false;
//}
//
//vector<int> findUniqueElements(const vector<vector<int>>& A, const vector<vector<int>>& B, const vector<vector<int>>& C) {
//    vector<int> result;
//    for (const auto& matrix : { A, B, C }) {
//        for (const auto& row : matrix) {
//            for (int elem : row) {
//                if (!isInVector(elem, result)) {
//                    result.push_back(elem);
//                }
//            }
//        }
//    }
//    return result;
//}
//
//vector<int> findCommonElements(const vector<vector<int>>& A, const vector<vector<int>>& C) {
//    vector<int> result;
//    for (const auto& rowA : A) {
//        for (int elemA : rowA) {
//            for (const auto& rowC : C) {
//                for (int elemC : rowC) {
//                    if (elemA == elemC && !isInVector(elemA, result)) {
//                        result.push_back(elemA);
//                    }
//                }
//            }
//        }
//    }
//    return result;
//}
//
//vector<int> findNegativeElements(const vector<vector<int>>& A, const vector<vector<int>>& B, const vector<vector<int>>& C) {
//    vector<int> result;
//    for (const auto& matrix : { A, B, C }) {
//        for (const auto& row : matrix) {
//            for (int elem : row) {
//                if (elem < 0 && !isInVector(elem, result)) {
//                    result.push_back(elem);
//                }
//            }
//        }
//    }
//    return result;
//}
//
//int main() {
//    int M1, N1, M2, N2, M3, N3;
//
//    cout << "Введите размеры массива A: ";
//    cin >> M1 >> N1;
//    vector<vector<int>> A;
//    fillMatrix(A, M1, N1);
//
//    cout << "Введите размеры массива B: ";
//    cin >> M2 >> N2;
//    vector<vector<int>> B;
//    fillMatrix(B, M2, N2);
//
//    cout << "Введите размеры массива C: ";
//    cin >> M3 >> N3;
//    vector<vector<int>> C;
//    fillMatrix(C, M3, N3);
//
//    vector<int> unique = findUniqueElements(A, B, C);
//    vector<int> common = findCommonElements(A, C);
//    vector<int> negative = findNegativeElements(A, B, C);
//
//    cout << "Уникальные значения: ";
//    for (int elem : unique) cout << elem << " ";
//    cout << endl;
//
//    cout << "Общие значения для A и C: ";
//    for (int elem : common) cout << elem << " ";
//    cout << endl;
//
//    cout << "Отрицательные значения: ";
//    for (int elem : negative) cout << elem << " ";
//    cout << endl;
//
//    return 0;
//}
