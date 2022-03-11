#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd1,fd2;
	char buf[5],var[9];
	char temp[10] = "helloWorld";
	fd1 = open("demo.text",O_RDWR,777);
	fd2 = open("write.txt",O_CREAT|O_RDWR,777);
	read(fd1,buf,5);
	printf("%s\n",buf);
	write(fd2,temp,10);
	lseek(fd2,1,SEEK_SET);
	read(fd2,var,9);
	printf("%s",var);
	close(fd2);
	close(fd1);
	
	return 0;
}
