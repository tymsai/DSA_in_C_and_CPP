#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6}, index;
    printf("Enter the index to be deleted\n");
    scanf("%d", &index);

    for(int i=index; i<=6; i++){
        arr[i-1]=arr[i];
    }
    for (int i = 0; i<=9; i++){
        printf("%d  ", arr[i]);
    }
    return 0;
}
