// В матрице поменять местами два столбца(элементы первого столбца поставить на соответствующие позиции второго столбца и наоборот)
// Пользователь вводит размерность матрицы и номера столбцов, которые нужно поменять местами
#include "iostream"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "Введите количество строк" << endl;		// Enter the first column number
	cin >> n;
	cout << "Введите количество столбцов" << endl;		//Enter the second column number
	cin >> m;
	int arr[n][m], a, b;
	for (int i = 0; i < n; i++)			
	{
		for (int j = 0; j < m; j++)
			arr[i][j] = (i + 1) * 10 + (j + 1);
	}

	cout << "Изначальная матрица" << endl;			//The original matrix
	for (int i = 0; i < n; i++)  
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Введите номер первого столбца" << endl;   	//Enter the first column number
	cin >> a;
	cout << "Введите номер второго столбца" << endl;	//Enter the second column number
	cin >> b;

	double arr2;
	for (int i = 0; i < n; i++)  
	{
		arr2 = arr[i][a-1];
		arr[i][a-1] = arr[i][b-1];
		arr[i][b-1] = arr2;
	}

	cout << "Полученная матрица" << endl;   		//The resulting matrix
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
    return 0;
}

