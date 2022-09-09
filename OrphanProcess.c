//Orphan Process
#include<stdio.h>
#include<unistd.h>
int main()
{
int pid =fork();
if(pid>0)
printf(" parent process : ");

else if(pid==0)
{
sleep(10);
printf("Child Process :");
}
return 0;
}
