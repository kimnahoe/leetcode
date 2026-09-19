bool isValid(char* s) {
    int top=0;
    char stack[10000];

    for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='(')
            stack[top++]=')';
        else if(s[i]=='[')
            stack[top++]=']';
        else if(s[i]=='{')
            stack[top++]='}';
        else {
            if(top == 0 || stack[top-1] != s[i])
                return false;
            top--;
        }
    }
    return top == 0;
}