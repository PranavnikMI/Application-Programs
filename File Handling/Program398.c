// copy data of one file into another
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname1[20];
    char Fname2[20];
    int fdSource = 0, fdDest = 0, Length = 0;
    char Data[100];

    printf("Enter the file name which contain data :\n");
    scanf("%s",Fname1);

    fdSource = open(Fname1, O_RDONLY);
    if(fdSource == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("Enter the filename that you want to create :\n");
    scanf("%s",Fname2);

    fdDest = creat(Fname2,0777);
    if(fdSource == -1)
    {
        printf("Unable to creat new file\n");
        return -1;
    }

    while((Length = read(fdSource,Data,sizeof(Data))) != 0)
    {
        write(fdDest,Data,Length);
    }

    close(fdSource);
    close(fdDest);

    return 0;
}
