bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int i, count=0;
    if (flowerbedSize == 1) {
        if (flowerbed[0] == 0)
            count++;
        return count >= n ? true : false;
    }
    for(i=0; i<flowerbedSize; i++){
        if(i==0){
            if(flowerbed[i] == 0 && flowerbed[i+1] == 0) {
                flowerbed[i] = 1;
                count++;
            }
        }
        else if(i==flowerbedSize-1) {
            if(flowerbed[i] == 0 && flowerbed[i-1] == 0) {
                flowerbed[i] = 1;
                count++;
            }
        }
        else if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
            flowerbed[i] = 1; //꽃 업데이트 해야지 번복 안생김
            count++;
        }
    }
    return count>=n?true:false;
}