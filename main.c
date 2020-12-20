#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

int getSize(int input){
    unsigned char Carray[UCHAR_MAX];
    sprintf(Carray, "%d", input);
    int size=strlen(Carray);
    return size;
    }

int integerReverse(int input, int size){
    int array[size];
    int final=0;

    for(int a=0; a<size; a++){
        array[a]=input%10;
        input=input/10;
    }
    int fin=0;
    int sizeHolder=size;

    for(int b=0; b<size; b++){
        int addMe=array[b]*(pow(10, (sizeHolder-1)));
        fin=fin+addMe;
        sizeHolder--;
    }

    return fin;
    }


int main()
{
    int t;

    printf("A positive integer is called a palindrome if its representation in the decimal system is the same when read from left to right and from right to left. For a given positive integer K of not more than 1000000 digits, write the value of the smallest palindrome larger than K to output. Numbers are always displayed without leading zeros.\n");
    printf("\nInput t: ");
    scanf("%d", &t);

    int array[t];
    int finalArray[t];

    for(int a=0; a<t;a++){
        scanf("%d", &array[a]);
        array[a]++;
    }

    int b=0;
    while(b!=t+1){
        int size=getSize(array[b]);//size of integer
        int fin=integerReverse(array[b], size);//reversed integer
        if(fin==array[b]){ //if reversed integer is equal to original input
            finalArray[b]=array[b]; //assign to an array
            b++;
        //carry on to get other input
        }else{ //else add one to original input
            array[b]++; //repeat
        }
    }

    for(int c=0; c<t;c++){
        printf("\n%d", finalArray[c]);
    }



    return 0;
}

