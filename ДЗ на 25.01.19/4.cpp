/*4) � ����������� ������ �������, ������� ��������� ������:
1. ������� 5 +
2. ������� � ������� +
3. ������ �� 3
4. ������� 2 � �����
������ �� ��� ����������� �� 5 �������� ����� x, ������ �������� ��� ����� �� 3,
������ ��������� ����� x � ����� x*x, �������� ��������� � ����� ������� �
����� (��������, �� ����� 30 ���������� ����� 302). ��������� ��� �����������
� ��� ������������������ ������. �������� ���������, �����������, ����� ��
������������������� ������ ����������� �������� �� ����� X ����� Y ���, �����
� ������������� ��������� �� ����������� ����� Z. ���� �����, ���������
������ ���������� YES, � ��������� ������ � NO.*/
/*
#include <iostream>

using namespace std;

long long sqrt(long long a) {
 long long i;

 if (a == 0){return 0;};
 for (i = 1; i < a; i += 1){
    if ((a / i) == i) {
       return i;
    }
 };
 return 0;
};

int main (){
 int no_use = 0;
 int amount;
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
    else if(((j % 3) == 0) && ((j % 10) == 2)){
        arr[j] = arr[j / 3] + arr[sqrt (j)] + arr[j - 5] + arr[(j - 2) / 10];
    }
    else if(((j % 3) != 0)  && ((j% 10) == 2)){
        arr[j] = arr[sqrt (j)] + arr[j - 5] + arr[(j - 2) / 10];
    }
    else if(((j % 3) == 0)  && ((j % 10) != 2)){
        arr[j] = arr[sqrt (j)] + arr[j - 5] + arr[j / 3];
    }
    else if(((j % 3) != 0)  && ((j % 10) != 2 )){
        arr[j] = arr[sqrt (j)] + arr[j - 5];
    };
    if((j - 5) == Z){ cout << arr[j - 5] << endl;};
    if((j / 3)  == Z){ cout << arr[j / 3] << endl;};
    if(((j - 2) / 10) == Z){ cout << arr[(j - 2) / 10] << endl;};
    if(sqrt(j) == Z){ cout << arr[sqrt(j)] << endl;};

 };
amount = arr[Y]; cout << "amount" << amount << " " << "no use" <<no_use << endl;
if((amount - no_use) == 0){
cout <<  "No";}
else { cout << "Yes";
};
return 0;
}*/
