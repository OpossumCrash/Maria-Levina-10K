/*25) �� ���� ��������� ��������� ������������������ �� N ����� �������������
�����, ��� ����� � ������������������ ��������. ��������������� ��� ����
��������� ��������� ������������������, ����������� �� ���������� ��
������ ��� 4 (������� � �������� ��������� ���� ������ ���� 4 ��� �����,
������� ��������� � ���� �������). ���������� ���������� ���������� �����
���, ��� ������� ������������ ��������� ������� �� 38.*/

#include <iostream>

using namespace std;

int main() {
 int chet = 0;

 int N; cin >> N;

 if(N <= 3){
   cout << "None" << endl;
   return 0;
 };

 int* mas = new int [N];

 for(int i = 0; i < N; i++){
    cin >> mas[i];
 };

 for(int i = 0; i <= (N - (4 + 1)); i++){

    for(int j = 4; j <= (N - 1); j++){
        int temp = mas[i + j] * mas[i];

        if((temp % 38) == 0){
          chet++;
        };
    };
 };

 cout << "The amount of pairs is " << chet;
 return 0;

 }
