#include<stdio.h>

int obratenBroj (int broj) {
    int obraten = 0;
    
    while (broj) {
        obraten = 10*obraten + (broj%10);        
        broj/=10;    
    }
    
    return obraten;
}

int sumaNaCifri (int broj) {
    int sum = 0;
    
    while (broj) {
        int cifra = broj%10;
        sum+=cifra;        
        broj/=10;
    }
    
    return sum;
}

void pecatiVoInterval (int a, int b) {
    
    int i;
    for (i=a;i<=b;i++) {
        //printf("%d %d %d\n", i, obratenBroj(i), i+obratenBroj(i));
        if (!sumaNaCifri(i))
            if ((i+obratenBroj(i))%sumaNaCifri(i)==0)
                printf("%d\n", i);
    }
}

int main () {
    
    int a,b;
    scanf("%d %d", &a, &b);
    //printf("%d %d", a, b);
    
    pecatiVoInterval(a,b);
    
    return 0;

}