int my_strlen(const char *text);
int my_get_char_repeat(char to_find, const char *to_search){
    int n = my_strlen(to_search);
    int i = 0;
    int iterations = 0;
    while (i<n){
        if (to_search[i] == to_find){
            iterations += 1;
        }
        i+=1;
    }
    return iterations;
    
}