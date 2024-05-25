int my_strlen(char *text);
char *my_char_replace(char *origin, char toFind, char toReplace){
    int n = my_strlen(origin);
    int i = 0;
    while (i<n){
        if (origin[i] == toFind){
            origin[i] =  toReplace;
        }
        i+=1;
    }
    return origin;
    
}