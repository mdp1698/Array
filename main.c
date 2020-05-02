//Name: Mit

#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int * const array, const int size){
    int i=0,temp;
    int again = 1;
    int iter = size - 1;
    do{
        again = 0;
        i = 0;
        for(; i < iter; ++i)
        {
            if(array[i+1] < array[i])
            {
                again = 1;
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        --iter;
    }while(again);
}
int main()
{
    int array[10];
    int sum = 0,avg;
    float avg1;
    for(int i=0;i<10;i++){
        printf("Enter element %d into the array: ",i+1);
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    for(int i=0;i<10;i++){
        if(i!=9)
            printf("%d, ",array[i]);
        else
            printf("%d\n",array[i]);
        }
    bubbleSort(array,10);
    avg=sum/10;
    avg1=(double)sum/10;
    printf("The sum of integers in the array is %d\n",sum);
    printf("The integer average of the integers in the array is %d\n",avg);
    printf("The integer average of the integers in the array is %f\n",avg1);
    for(int i=0;i<10;i++){
        if(i!=9)
            printf("%d, ",array[i]);
        else
            printf("%d",array[i]);
    }
}
