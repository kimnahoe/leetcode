char* reverseVowels(char* s) {
    char *new;
    int len=0;//모음만 따로 담는 배열의 길이 수
    for(int i=0; s[i]!='\0'; i++){
        if(s[i] == 'A' ||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') {
            len++; //모음 개수 몇개인지
        }
    }
    int j=0;
    new = (char*) malloc(sizeof(char)*(len));
    for(int i=0; s[i]!='\0'; i++){
        if(s[i] == 'A' ||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') {
            new[j++]=s[i]; //모음이 맞으면 새로운 배열에 저장
        }
    }
    //맨처음이랑 맨 뒤랑 바꾸기
    j=0;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i] == 'A' ||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') { //모음이면
            s[i]=new[len-1];
            len--;
        }
    }

    return s;
}