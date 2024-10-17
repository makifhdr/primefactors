#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int sayi,a,b;

    printf("Pozitif bir sayi giriniz: ");
    scanf("%d",&sayi);

    printf("Asal carpanlar:\n");

    for(long int i=2;i<=sayi;i++){
        if(sayi%i==0){
            for(a=2;a<i;a++){
                if(i%a==0)
                    break;
            }
        if(a==i)
            printf("%d\n",a);
        }
    }
    return 0;
}
