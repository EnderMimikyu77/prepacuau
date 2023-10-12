
#include <stdio.h>

int main()
{
    int producto = 1;
    int n = 0;
    int i = 1;
    printf("Dame un numero \n");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        producto = producto * i;
        printf("El valor de n es %d: \n",producto);
    }
    

    return 0;
}
