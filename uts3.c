#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[255];
    printf("Masukkan Sebuah String : "); scanf("%[^\n]s", str);
    int size = strlen(str);
    int i, j, k;
    int dupli = 0;

    printf ("Hasil Pengecekan Huruf Duplikat Adalah : ");
    for (i = 0; i < size; i++)
    {
        if (str[i] == str[i+1])
        {
            dupli++;
        }
        else {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    printf("\n");
    printf("Ada %d huruf yang duplikat", dupli);
    return 0;
    
}