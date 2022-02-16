#include <stdio.h>
 
int check(char *p);
 
int main() {
    int j = 0;
    char str[256];
    printf("Masukkan string (Max. 255) : ");
    gets(str);
    check(str);
    return 0;
}
 
int check(char *p) {
    int high, low, space, num, symb, length;
    high = low = space = num = symb = length = 0;
    while (*p) {
        if (*p >= 'a' && *p <= 'z') low++;
        if (*p >= 'A' && *p <= 'Z') high++;
        if (*p >= '0' && *p <= '9') num++;
        if (*p == ' ') space++;
        length++;
        p++;
    }
    symb = length - (low + high + num + space);
    printf("Rincian string yang anda masukkan : \n");
    printf("Total %d karakter\n", length);
    printf("%d huruf besar\n", high);
    printf("%d huruf kecil\n", low);
    printf("%d angka\n", num);
    printf("%d simbol\n", symb);
    printf("and %d spasi\n", space);
    return 0;
}
 
/* end of file */
