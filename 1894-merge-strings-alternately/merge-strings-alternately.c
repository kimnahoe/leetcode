

char * mergeAlternately(char * word1, char * word2){
    int i, j, index;
    i=j=index=0;
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    char * string = (char *)malloc(len1 + len2 + 1);
    
    while(word1[i]!='\0'&&word2[j]!='\0'){//둘이 같이 번갈아가면서 해야돼서
        string[index++]=word1[i];
        string[index++]=word2[j];
        i++; j++;
    }
    while(word1[i]!='\0')
        string[index++]=word1[i++];
    while(word2[j]!='\0')
        string[index++]=word2[j++];

    string[index]='\0';
    
    return string;
}