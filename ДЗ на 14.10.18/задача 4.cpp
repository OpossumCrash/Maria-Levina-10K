/*�������� ���������, ��������� � ������� ����� ���������, ��������� ����
�� 72, ���� �� 27(�� ������).*/
#include <iostream>

using namespace std;

int main()
{
  int i, n, sum;
  sum = 0;
  cin >> n;
  int A[n];
  for(i = 0; i < n; i ++) {
    cin >> A[i];

    if (((A[i] % 72) == 0) && ((A[i] % 27) == 0)) {
        sum += 0;
    }
    else if (((A[i] % 72) == 0) || ((A[i] % 27) == 0)) {
        sum += A[i];
    }
  }
  cout << sum;



  }

