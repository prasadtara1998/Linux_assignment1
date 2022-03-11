#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd1;
	char temp[10] = " ";
	fd1 = open("file.txt",O_CREAT|O_RDWR,777);
	lseek(fd1,4000,SEEK_SET);
	write(fd1,temp,10);
	close(fd1);
	
	return 0;
}
