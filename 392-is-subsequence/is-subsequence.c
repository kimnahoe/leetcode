bool isSubsequence(char* s, char* t) {
    while(*t){
        if(*s==*t) //둘이 값이 같으면
            s++;
        t++;
    }
    return *s=='\0'?true:false;
}