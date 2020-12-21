#include<stdio.h>
#include<stdlib.h>

int main()
{
    //reversing an integer
    int t;

    //printf("Input t: ");
    scanf("%u", &t);
    int array[t];

    //takes t numbers of input
    for(int a=0; a<t; a++){
        scanf("%u", &array[a]);
        array[a]++;
    }

    printf("\n");

    for(int b=0; b<t; b++){
        int copy=array[b];
        int check=0;

        while(check!=1){
            array[b]=copy;
            int digit=0;
            int Rinput=0;

            while(array[b]!=0){ //reverses digits of input
                digit=array[b]%10;
                Rinput=Rinput*10+digit;
                array[b]/=10;
                }

            if(copy==Rinput){ //if the reversed input and original input is equal
                printf("%d\n", Rinput);
                check++;
            }else{
                copy++; //plus one to copy then repeat whole process
            }
        }
      }
    return 0;
}
