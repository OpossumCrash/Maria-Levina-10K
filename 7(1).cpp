/*�������� ��������� ����������� ����� � �������
��������� � ���������� k, ��� k �� ��������� 30.*/

#include <iostream>
using namespace std;

int main() {

int n,k;
cin >> n >> k;

int amt = 0; //���-�� ���� � ������ � ������ ������� ���������
    for (int i = k; i < n; i*=k)
    {
      amt ++;
    }
    amt ++;

int*arr = new int [amt];
for (int i = 0; i < amt; i++)
    {
        *(arr + i) = n%k;
        n /= k;
    }

for (int i = amt - 1; i >=0; i--)
cout � *(arr + i);
return 0;
}
