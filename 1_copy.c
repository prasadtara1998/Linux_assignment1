#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd1,fd2;
	char buf[5],var[4];
	fd1 = open("demo.text",O_RDWR,777);
	fd2 = open("write.txt",O_CREAT|O_RDWR,777);
	read(fd1,buf,5);
	printf("%s\n",buf);
	write(fd2,buf,5);
	close(fd1);
	close(fd2);

	return 0;
}
