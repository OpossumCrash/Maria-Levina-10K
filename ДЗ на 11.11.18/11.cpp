/*11) Напишите процедуру, удаляющую из динамически выделенного массива максимальный и минимальный элементы
(если таковых несколько – удалить нужно все).
По окончании работы процедуры количество выделенной памяти должно уменьшиться.*/
#include <iostream>

using namespace std;
/*
int max_n(int* a,int n){
 int num = *a;
 for(int i = 0; i < n; i++){
    if((*(a + i)) >= num){
        num = *(a + i);
    };

 };

return num;
}
int max_z(int* a,int n){
 int num = *a;
 int zahl = 0;
 for(int i = 0; i < n; i++){
    if((*(a + i)) >= num){
        zahl++;
    };
 };
 return zahl;}

 int min_n(int* a,int n){
 int num = *a;
 for(int i = 0; i < n; i++){
    if((*(a + i)) <= num){
        num = *(a + i);
    };
 };

 return num;
}
int min_z(int* a,int n){
 int num = *a;
 int zahl = 0;
 for(int i = 0; i < n; i++){
    if((*(a + i)) <= num){
        zahl++;
    };
 };
 return zahl;}


void pere(int* &a, int n){
 int n_max = max_z(a, n);
 int n_min = min_z(a, n);
 int k = 0;
 int max_ = max_n(a, n);
 int min_ = min_n(a, n);
 int* nov = new int[n - n_max - n_min];
  for(int i = 0; i < n; i++){
    if(((*(a + i)) != max_) && ((*(a + i)) != max_)){

        *(nov + k) = *(a + i);
        k++;
    }
  }
  a = nov;
}


int main(){
int N;
cin >> N;

int* A = new int [N];
for (int i = 0; i < N; i++){
    cin >> *(A + i);
};

int n1 = max_z(A, N) + min_z(A, N);
pere(A, N);

for (int i = 0; i <(N - n1); i++){
    cout << *(A + i) << " ";
};

delete []A;
return 0;}
*/
