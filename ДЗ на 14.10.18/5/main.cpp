/*�������� ������� min, max, avg, med, ��������� swap ����������� � ����
��� ������������ ��������� � ��������� � �������� �� �������������. min -
������� ����������� �� ���� ��������, max - ������������, avg - �������
��������������, med - ��������� (������, ��� ��� �����). swap - ������������
�������� �� ����� ( ������ �� ������, ������ � ������, ������ � ������).*/
// � ��������� ����� ������� ������, ��� ��� min, max, � swap ��� ������.
int max_(int x,int y,int z);
int min_(int x,int y,int z);
void swap_(int x,int y,int z);
int avg(int x,int y,int z);
int med(int x,int y,int z);
#include <iostream>

using namespace std;

int main()
{ int a, b, c;

   cin >> a >> b >> c;

   return max_(a, b ,c );
   return min_(a, b ,c );
   return avg(a, b ,c );
   return med(a, b ,c );
   swap_(a, b ,c );
   cout << a << "," << b << "," << c;
}
