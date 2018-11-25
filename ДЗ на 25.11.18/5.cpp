/*Напишите эффективную процедуру, выписывающую из массива длины n все элементы,
у которых произведение ненулевых цифр больше k. В комментариях напишите, почему перебор - эффективный*/
#include <iostream>

using namespace std;
int prod(int n){
 int umn = 1;
 int i = 10;
 int schet = 1;

 while ((n / i) != 0){
        i = i * 10;
        schet += 1;
    }
 int A[schet];

 for(int a = 0; a < schet; a++){
    A[a] = (n % i) / (i / 10);
    i = i / 10;
    if ((schet == 1) && (A[a] == 0)){
            return 0;
   }
    if(A[a] != 0){
        umn *= A[a];
    }

   }
  return umn;
}

void vyp(int* &a, int n, int gran){
 int* nov = new int [n];
 int schet = 0;
 for(int i = 0; i < n; i++){
    if (prod((*(a + i))) > gran){
        *(nov + schet) = *(a + i);
        schet += 1;
    }
 }
n = schet;
a = nov;
}

/*int main (){
  int n;
  int k;
  cin >> n;
  cin >> k;
  int* A = new int [n];
  for(int i = 0; i < n; i++){
    cin >> A[i];
  }

  vyp(A, n, k);

  for(int i = 0; i < n; i++){
    if ((*(A + i)) != 0){
    cout << *(A + i) << endl;
  }

}
return 0;
}*/
