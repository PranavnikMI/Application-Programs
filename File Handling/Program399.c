// copy data of one file into another by taking file name by argument vector
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
    int fdSource = 0, fdDest = 0, Length = 0;
    char Data[100];

    fdSource = open(argv[1], O_RDONLY);
    if(fdSource == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    fdDest = creat(argv[2],0777);
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

    printf("Data Succesfully copied...\n");
    return 0;
}

//  Myexe      Marvellous.txt     Infosystem.txt    
//  argv[0]    argv[1]            argv[2]