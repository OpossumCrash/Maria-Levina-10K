/*�������� ���������, ��������� k-�� ���������� ����������.
��������� ������ �������� �� ����� O(n) � �������.*/

#include <iostream>
using namespace std;
int partition(int *A, int l, int r)
{
	if (l != r)
		swap(A[l + rand() % (r - l)], A[r]);
	int x = A[r];
	int i = l - 1;
	for (int j = l; j <= r; j++)
  {
		if (A[j] <= x)
			swap(A[++i], A[j]);
	}
	return i;
}
int why(int *A, int b, int k)
{
	int l = 0, r = b;
	for (;;) {
		int m = partition(A, l, r);
		if (m < k)
			l = m + 1;
		else if (m > k)
			r = m - 1;
		else return A[k];
	}
}
int main()
{
	int n, k;
	cin >> n;
	int *array = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> array[i];}
	cin >> k;
	cout << why(array, n, k);
	return 0;
}
