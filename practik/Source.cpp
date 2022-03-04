#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

template <typename T> void showArr(T array[], int length);
//1
template <typename T> void clearArray(T array[], int length, T key);
//2
int indexSum(int array1[], int array2[], int length1, int length2, int index) {
	if (index > length1 - 1 || index > length2 - 1) {
		cout << "ERROR";
		return 0;
	}
	return array1[index] + array2[index];
}
//4
void primeRange(int num1, int num2);
//3
template <typename T> T maxArray(T array[], int length);

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int arr1[10], arr2[10];
	int n, z;
	//Задача 1
	cout << "Задача 1" << endl;
	for (int i = 0; i < 10; i++)
		arr1[i] = rand() % 10 + 1;
	showArr(arr1, 10);
	cout << "\nВведите ключевое значение: ";
	cin >> n;
	cout << "\nМассив с обнуленными ключевыми значениями";
	clearArray(arr1, 10, n);
	showArr(arr1, 10);
	cout << endl << endl;
	//Задача 2
	cout << "Задача 2" << endl;
	cout << "Массив 1:";
	for (int i = 0; i < 10; i++)
		arr1[i] = rand() % 10 + 1;
	showArr(arr1, 10);
	cout << endl;
	cout << "Массив 2:";
	for (int i = 0; i < 10; i++)
		arr2[i] = rand() % 10 + 1;
	showArr(arr2, 10);
	cout << endl;
	cout << "Введите индекс:";
	cin >> z;
	cout << indexSum(arr1, arr2, 10, 10, z);
	cout << endl << endl;
	//задача 4
	cout << "Задача 4" << endl;
	cout << "Введите начало диапазона: ";
	cin >> n;
	cout << "Введите конец диапазона: ";
	cin >> z;
	cout << "Все простые числа от " << n << " до " << z << ":" << endl;
	primeRange(n, z);
	cout << endl << endl;
	//Задача 3
	cout << "Задача 3" << endl;
	cout << "Массив 1:";
	int arr3[5] = { 2, 2, 7, 10, 12 };
	showArr(arr3, 5);
	cout << endl;
	cout << maxArray(arr3, 5);



	return 0;
}
template <typename T> void showArr(T array[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]";
}
//1
template <typename T> void clearArray(T array[], int length, T key) {
	for (int i = 0; i < length; i++)
		if (array[i] == key)
			array[i] = 0;
}
//4
void primeRange(int num1, int num2) {
	for (int i = 2; i <= num2; i++) {
		bool x = true;
		for (int j = 2; j <= i - 1; j++) {
			if (i % j == 0)
				x = false;
		}
		if (x)
			cout << i << endl;
	}
	cout << endl << endl;
}
//3
template <typename T> T maxArray(T array[], int length) {
	T max1 = 0;
	T max2 = 0;

	for (int i = 0; i < length; i++)
		if (array[i] > max1)
			max1 = array[i];
	
	return max1 + max2;
}



