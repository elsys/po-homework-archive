#include <stdio.h>
int main(void)
{
        int array[1000];
        int a, b, t;
        int i;
        
        
        printf("Колко числа?");
        scanf("%d", &i);
        for(a=0; a<i; a++)
        
{
        scanf("%d", &array[a]);
        if(array[a]==42)
{
        printf("Не е възможно!");
        return;
}
}        
        for(a=0; a<i; ++a)

        for(b=i-1; b>a; --b)
{       
        if(array[b-1] > array[b])
{       
        t = array[b-1];
        array[b-1] = array[b];
        array[b] = t;
}
}
        for(t=0; t<i; t++) printf("Числото е: %d\n",array[t]);            
        return 0;
}
