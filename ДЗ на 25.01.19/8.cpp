/*8) � ����������� ������ ���� ��� �������:
1. ������ �� 5,
2. ������ �� 15,
3. ������ �� 6.
�������� ���������, ������� �������, ������� ��������� ����� ����� ��������
����������� �� ����� X �����������, ���������� �� ����� �� N ������. ������
������� �����������, ������ ���� �� �������� ����� ������� 15 (� ���������
������ ��������� ����������� ��������). */
/*
��� ��������� ����������� ���, ��� ������ �������  �������� ������ ��� ������� 15 ������������� � ��������
��������, �.� ���� �������� ����� ��� ������� �� 15 ���� ��������� 15 ������������� ��������,
�� ������ ������� �������� ������ � ������� ����������� �������������� ����������.
��������, ��� X = 30 � N = 2 ����� �������� ����� 8.*/

#include <iostream>

using namespace std;

void vstavka(int* A, int x, int a){
  A[x / 15] = a;
  A[x * 6] = a;
  A[x * 5] = a;

return;
}

int step(int b, int c){
 int temp = b;
 for(int i = 0; i < (c - 1); i++){
    temp = temp*b;
 };
 return temp;
}

int main() {
int X;
int N;
cout << "X = "; cin >> X;
cout << "N = "; cin >> N;
int result = 0;

int* chis = new int [X * step(6, N)];

if(((X % 15) != 0) || (N == 0)){         //��������� ����������
  result = 0;
  cout << result;
  return 0;
}

for(int j = 0;j <(X * (step(6, N))); j++){
    chis[j] = 0;
};

chis[X * 6] = 1;
chis[X / 15] = 1;
chis[X * 5] = 1;

for(int i = 2; i <= N; i++){
    for(int o = 0; o <= (X * step(6, N)); o += 15){
        if (chis[o] >= (i - 1)){
           vstavka(chis, o, 1);
        };
    };
};
for(int a = 0; a < (X * step(6, N)); a++){
    if(chis[a] == 1) result++;
    };
cout << result;

return 0;
}
