/*26) Для структуры Warehouse напишите конструктор и деструктор.
27) Для структуры Warehouse напишите конструктор копий и оператор присваивания.
28) Для структуры Warehouse напишите метод, вычисляющий суммарную стоимость
всех товаров на складе.
29) Для структуры Warehouse напишите методы, возвращающие удельную стоимость
самого тяжелого товара и цену товара с наибольшей удельной стоимостью,
соответственно.
30) Для структуры Warehouse напишите метод, упорядочивающий массив товаров по
удельной стоимости.*/

struct Product{
const char* name;
unsigned int price;
unsigned int weight;
};

struct Warehouse{
Product* Goods;
unsigned int size_;

Warehouse (){}
 ~Warehouse() {
 cout << "Destructor is working";
 }

 Warehouse(Product* a,unsigned int b){
  *Goods = Product* a;
  size_ = b;
  cout << "Normal constructor is working.";
  }

 Warehouse(const Warehouse &A){
  *Goods = *A.Goods;
  for
  size_ = A.size_;
  cout <<"Copying constructor is working";
  }

 Warehouse &operator = (Warehouse &A){
   Goods = A.Goods;
   size_ = A.size_;
   }

 Warehouse (Warehouse B){
 int sum = 0;
 for(int i = 0; i < B.size_; i++){
        sum += (*(B.Goods + i)).price;
 }
 }

 Warehouse (Warehouse B){
  int i = 0; int n = i;
  int max_w = (*(B.Goods + i)).weight;
  for(i = 0; i < B.size_; i ++){
    if ((*(B.Goods + i)).weight >= max_w){
        max_w = (*(B.Goods + i)).weight;
        n = i;

    }
  }
  int price_w = (*(B.Goods + n)).price / max_w;
  }


 Warehouse (Warehouse B) {
  int i = 0; int n = i;
  int max_z = (*(B.Goods + i)).price / (*(B.Goods + i)).weight ;
  for(i = 0; i < B.size_; i ++){
    if (((*(B.Goods + i)).price / (*(B.Goods + i)).weight) >= max_w){
        max_z = (*(B.Goods + i)).price / (*(B.Goods + i)).weight;
        n = i;

    }
  }
  int price_z = (*(B.Goods + n)).price;
  }

  Warehouse (Warehouse B){
  int i = 0; int n = i;

  int max_z = (*(B.Goods + i)).price / (*(B.Goods + i)).weight ;
  int* pt = &((B.Goods + i));
  for(i = 0; i < B.size_; i++){

    if (((*(B.Goods + i)).price / (*(B.Goods + i)).weight) >= max_z){
        &(*(B.Goods + i)) <> pt;
        max_z = ((*(B.Goods + i)).price / (*(B.Goods + i)).weight);
        pt = &((B.Goods + i))
    }
  }
  }


  }


}



  }
  Warehouse operator <> (Product &a, Product &b){
      Product temp = a;
      a = b;
      b = temp;
  }

 int main(){

 Warehouse Diksi;
 cin >> Diksi.size_;
 unsigned int n = Diksi.size_;
 Product* Diksi.Goods = new Product [n];
 for (int i = 0; i < n; i++){
   cout << "Product name";
   cin >> (*(Diksi.Goods + i)).name << endl;
   cout << "Price" <<;
   cin << (*(Diksi.Goods + i)).price << endl;
   cout << "Weight";
   cin << (*(Diksi.Goods + i)).weight << endl;

 }
}
 delete [] Diksi.Goods;
 return 0;
};
