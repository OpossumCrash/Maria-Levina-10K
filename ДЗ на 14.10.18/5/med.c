int med(int x,int y,int z){
    int temp;
    if (x < y) {
        if (y > z) {
            if (x > z) {
                temp = x;
            }
             else temp = z;
        }
         else temp = y;
    }
     else if (x > z){
            if (z > y){
                temp = z;
                }
            else temp = y;
            }
          else temp = z;
return temp;
}
