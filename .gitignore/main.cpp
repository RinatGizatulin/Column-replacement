#include "iostream"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "Введите количество строк" << endl;
	cin >> n;
	cout << "Введите количество столбцов " << endl;
	cin >> m;
	int arr[n][m], a, b;
	for (int i = 0; i < n; i++)			
	{
		for (int j = 0; j < m; j++)
			arr[i][j] = (i + 1) * 10 + (j + 1);
	}

	cout << "Изначальнная матрица" << endl;
	for (int i = 0; i < n; i++)  
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Введите номер первого столбца" << endl;   
	cin >> a;
	cout << "Введите номер второго столбца" << endl;
	cin >> b;

	double arr2;
	for (int i = 0; i < n; i++)  
	{
		arr2 = arr[i][a-1];
		arr[i][a-1] = arr[i][b-1];
		arr[i][b-1] = arr2;
	}

	cout << "Полученная матрица" << endl;   
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

