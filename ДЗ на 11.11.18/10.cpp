/*10) Напишите процедуру, удаляющую из динамически выделенного массива все четные значения
      (функция принимает в качестве аргументов – указатель на массив и его размер).
      По окончании работы процедуры количество выделенной памяти должно уменьшиться.*/
#include <iostream>

using namespace std;
/*

int chet(int* a,int n){
 int zahl = 0;
 for(int i = 0; i < n; i++){
    if(((*(a + i)) % 2) == 0){
        zahl ++;
    }
 }

return zahl;
}

void pere(int* &a, int n){
 int n_ = chet(a, n);
 int k = 0;
 int* nov = new int[n - n_];
  for(int i = 0; i < n; i++){
    if(((*(a + i)) % 2) != 0){

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

int n1 = chet(A, N);
pere(A, N);

for (int i = 0; i <(N - n1); i++){
    cout << *(A + i) << " ";
};

delete []A;
return 0;}*/

