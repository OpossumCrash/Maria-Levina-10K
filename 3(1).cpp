/*�������� ��������� ����������� ���������� ��������� �������������� ���� �������� �������.
��������, ���� (2,3) ����������� ������� [1,2,3,5,7,11,13,17], � ���� (3,4) - ���.
����� �������, ��� ���������� �������� ����������� ��������� ������ �������*/

#include "pch.h"
#include "iostream"
#include <vector>

using namespace  std;
int main()
{
  int n, s = 0;
  cin >> n;
  vector <int> a(n);
  int p, q;



  for(int i = 0; i < n; i++)
  cin >> a[i];

  cin >> p >> q;

  for(int j = 0; j < n; j++)
  {
    if(a[j] == p)
    {
      s++;
      break;
    }
  }

  for(int h = 0; h < n; h++)
  {
    if(a[h] == p)
    {
      s++;
      break;
    }
  }

  if(s == 2)
    cout � "Yes";

  else
    cout � "No";

  return 0;
}
