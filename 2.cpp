/*2)� ����������� ������ �������, ������� ��������� ������:
1. ������� 1
2. ������ ������
3. ������ ��������
4. ������ �� 10
������ �� ��� ����������� �� 1 �������� ����� x, ������ �������� ��� ����� ��
2, ������ ��������� ����� x � ����� 2x + 1, �������� �������� ��� �� 10.
��������� ��� ����������� � ��� ������������������ ������. ��������
��������� �����������, ������� ���������� ��������, ������� ����� X
����������� � ����� Y, �����, ��� � ������������� ��������� �� �����������
����� Z.*/
/*
#include <iostream>

using namespace std;

int main (){
 long long amount = 0;
 long long not_use = 0;
 long long X, Y, Z;
 cin >> X >> Y >> Z;
 long long* arr = new long long [Y];

 for(long long j = 0; j <= Y; j++){
    if (j == X) {
        arr[j] = 1;
    }
    else if (j < X){
      arr[j] = 0;
    }
    else if((j % 10) == 0){
        arr[j] = arr[j / 10] + arr[j / 2] + arr[j - 1]; //������� 10
    }
    else if(((j % 2) == 0) && ((j % 10) != 0)){
        arr[j] = arr[j / 2] + arr[j - 1];   //������ ��������� 10
    }
    else if((j % 2) != 0){
        arr[j] = arr[j / 2] + arr[j - 1];   // ������� �� 2
    }
    else if(((j % 2) == 0) && ((j % 3) == 0)){
        arr[j] = arr[j - 1] + arr[(j - 1) / 2]; //��������
    };
    if((j - 1) == Z) not_use += arr[j - 1];
    if((j / 2)  == Z) not_use += arr[j / 2];
    if((j / 10) == Z) not_use += arr[j / 10];
    if(((j - 1) / 2) == Z) not_use += arr[(j - 1) / 2];

 };
amount = arr[Y] - not_use;
cout << amount;

return 0;
}
*/