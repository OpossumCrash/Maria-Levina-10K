/*Write a function that calculates the primorial number.
 The program should work in no more than O(n*log log n) steps.*/

 #include <iostream>

 using namespace std;
/*
int praim(int a){
  int product = 1;
  bool* used = new bool [a + 1];
  used [0] = used [1] = 0;
  for(int i = 2; i <= a; i++){
    used [i] = 1;
 };
 for(int i = 2; i <= a; i++){
    if(used [i]){
        for(int j = i + i; j <= a; j += i){
            used [j] = 0;
        };
     };
    if(used[i]){
        product *= i;
    };
 };
 delete [] used;
 return product;
}




 int main(){

 int n; cin >> n;
 int res = praim(n);
 cout << "Praimorial of " << n << " is " << res;
 return 0;
 }*/
