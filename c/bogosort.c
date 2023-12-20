// bogosort
// shittest sorting algorithm I've ever seen ngl!!!!

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int random=0,flag=0,temp=0,side=0;
    int input[]={68,14,78,98,67,89,45,90,87,78,65,74,-1};
    // Last with -1
    while (1==1)// Determine the size of group being sorted.
    {
        if (input[side]!=-1) side++;
        if (input[side]==-1) {side--;break;}
    }
    redo:// Shuffle data
    for (int i=0;i<side;i++)
    {
        random=rand()%(side+1);
        temp=input[random];
        input[random]=input[i];
        input[i]=temp;
    }

    for (int i=0;i<side-1;i++)
    {
        if (input[i]>input[i+1]) goto redo;
    }// Determine whether the data is sorted.
    for (int i=0;i<side;i++)
    printf("%d ",input[i]);
    printf("Bogosort works!!");
    return 0;
}
