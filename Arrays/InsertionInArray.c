#include <stdio.h>
int main()
{
    int a[10]={10,20,30,40,50,60}, c, noe=6, soa=10, index=-1, item;
    printf("Enter to insert");
    scanf("%d", &item);
    
    printf("\nEnter the index position");
    scanf("\n%d", &index);
    
    for (c = noe; c >= index - 1; c--){
       if(c>=index){
       a[c+1] = a[c];
       }
    }
    a[index] = item;
    for (int j=0 ; j<soa ; j++) {
        printf("%d\t", a[j]);
    }
    return 0;
}
