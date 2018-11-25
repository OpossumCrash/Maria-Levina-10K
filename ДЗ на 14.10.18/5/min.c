int min_(int x,int y,int z){
    int temp = x;
    if (y < temp){
        temp = y;
        if (z < temp) {
            temp = z;
        }
    }
    else if (z < temp){
        temp = z;
    }
    return temp;}
