#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
int pid=fork();
if(pid>0)
{
sleep(20);
printf("Parent Process \n");
}
else
{
printf("Child Process ");
exit(0);
}
}
