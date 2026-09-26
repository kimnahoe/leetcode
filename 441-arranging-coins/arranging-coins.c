int arrangeCoins(int n) {
    int i;
    for(i=1; i<=n; i++){
        n-=i;
        if(n<=i)
            return i;
    }
    return 0;
}