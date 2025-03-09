#include<stdio.h>
int main(){
    int a;
    char c;
    float f;
    double lf;
    short int ld;
    unsigned int lu;
    long int li;
    long long int lld;
    long double Lf;

    printf("size of int = %d bytes\n",sizeof(a));
    printf("size of char = %d bytes\n",sizeof(c));
    printf("size of float = %d bytes\n",sizeof(f));
     printf("size of double = %d bytes\n",sizeof(lf));
    printf("size of short int = %d bytes\n",sizeof(ld));
    printf("size of unsigned int = %d bytes\n",sizeof(lu));
     printf("size of long int = %d bytes\n",sizeof(li));
     printf("size of int = %d bytes\n",sizeof(lld));
     printf("size of int = %d bytes\n",sizeof(Lf));
 
 return(0);
}