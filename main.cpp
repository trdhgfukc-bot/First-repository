#include <stdio.h>
#include <stdiolib>
#define SIZE 1024
int main(int argc, char** argv){
    char* str = (char*)malloc(sizeof(char)*SIZE);
    printf("ВВЕДИТЕ СВОЕ ИМЯЯЯЯЯЯЯЯЯЯЯЯ:\n");
<<<<<<< HEAD
    str=gets(str);
    printf("привет, %s", str);
=======
    scanf("%s", str);
    puts("привет");
    puts(str);
>>>>>>> ecd576b (исправлено приветствие)
    return 0;
}