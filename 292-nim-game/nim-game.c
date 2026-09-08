bool canWinNim(int n) {
    if(n % 4 == 0)
        return false;
    else{
        if(n % 4 == 0)
            return false;
        while(n % 4 != 0){//n이 4의 배수면 끝남
            n -= n % 4;
        }
        return true;
    }
}