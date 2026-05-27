bool isPalindrome(int x) {
    int orl = x;
    long long n = 0;
    if(x < 0)
        return false;
    while(x > 0) {
        n=n*10+x%10;
        x/=10;
    }
    return orl==n?true:false;
}