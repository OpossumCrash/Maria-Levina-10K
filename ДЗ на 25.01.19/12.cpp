/*12) �������� ���������� ���������, ��������� ��� �������� ������������������
����� N ��������������� ����� ����� ����������: ����������� ����� ���� �
���������, ������ ������� ����������� �� ����� ��� �� 5. ��������� �����
���� �������������.*/
/*
#include <iostream>

using namespace std;

int main () {

int N; cin >> N;
int min_sum = 0;
int* arr = new int [N];
for (int i = 0; i < N; i++){
    cin >> arr[i];
};
min_sum = arr[0] + arr[5];
for (int i = 0; i < (N - 5); i++){
    for(int j = 5; j < (N - i); j++){
        if( (arr[i] + arr[i + j]) < min_sum)
          min_sum = arr[i] + arr[i + j] ;
    };
};
cout << "Minimal sum" << min_sum << endl;

return 0;
}
*/
