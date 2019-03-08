/*4)Реализуйте класс int_list - односвязный список. Класс должен солержать конструктор, конструтор копий,
 деструктор, оператор присвоения, оператор [] - обращение по индексу, вставку по индексу, удаление по индексу.*/

 #include <iostream>

 using namespace std;

 struct Node{

 Node* next = NULL;
 int data;
 };

 class int_list{

   Node* head;

   public:

   int_list(): head(NULL){} //конструктор

   int_list(const int_list &A){

     Node* temp = A.head;

     int_list* copy_list = new int_list;
     Node* temp1 = copy_list.head

     while(temp -> next != NULL){
      temp1 -> data = temp -> data;
      temp1 -> next = new Node;
      temp1 = temp1 -> next;
      temp = temp -> next;
     }

     temp1 -> data = temp -> data;

     cout <<"Copying constructor is working";
   }

   ~int_list(){

     while(head != NULL){
       Node* temp = head;
       head = head -> next;
       delete temp;
     }
   }

   const int_list& operator=(const int_list& A){
       head = A.head;
       Node* temp1 = new Node;
       Node* temp = temp1;

       while(head -> next != NULL){
        temp1 -> data = head -> data;
        head  = head -> next;
        temp1 -> next = new Node;
        temp1 = temp1 -> next;
       }

       temp1 -> data = head -> data;

       head = temp;
    }




 };

   }







 };

 int main (){


 }
