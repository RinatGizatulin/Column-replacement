#include "iostream"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "������� ���������� �����" << endl;
	cin >> n;
	cout << "������� ���������� �������� " << endl;
	cin >> m;
	int arr[n][m], a, b;
	for (int i = 0; i < n; i++)			
	{
		for (int j = 0; j < m; j++)
			arr[i][j] = (i + 1) * 10 + (j + 1);
	}

	cout << "������������ �������" << endl;
	for (int i = 0; i < n; i++)  
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "������� ����� ������� �������" << endl;   
	cin >> a;
	cout << "������� ����� ������� �������" << endl;
	cin >> b;

	double arr2;
	for (int i = 0; i < n; i++)  
	{
		arr2 = arr[i][a-1];
		arr[i][a-1] = arr[i][b-1];
		arr[i][b-1] = arr2;
	}

	cout << "���������� �������" << endl;   
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

