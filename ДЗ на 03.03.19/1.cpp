/*Реализуйте класс double_stack -  стек вещественных чисел переменного размера.
Класс должен содержать конструктор, деструктор, методы push,pop*/
/*
#include <iostream>

using namespace std;

struct Node{
 double data;
 Node* next = NULL;
 Node* prev;
 };

class double_stack{
  Node* head;

 public :
  double_stack(): head(NULL){}    //конструктор

  void push(double x){
                                   // метод push
   Node* temp = new Node;
   temp -> data = x;
   temp -> next = head;
   head = temp;
   }

  double pop(){                      //метод pop

   if(head == NULL){
    cout << "Double_stack is empty";
    return 0;
   };

   Node* temp = head;
   head = head -> next;
   double X = temp -> data;

   delete temp;
   return X;
   }

 ~double_stack(){
  while(head != NULL){
    Node* temp = head;
    head = head -> next;
    delete temp;
   }

  }

};

int main(){

 double_stack A;
 int H; cin >> H;
 for(int i = 0; i < H; i++){
    double a; cin >> a;
    A.push(a);
 };

 for(int i = 0; i < H; i++){
   cout << A.pop();
 };

 return 0;
}
*/
