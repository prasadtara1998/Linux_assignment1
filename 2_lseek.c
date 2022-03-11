#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd1;
	char buf[5],buf1[5],buf2[5];
	fd1 = open("demo.txt",O_RDWR,0777);
	lseek(fd1,1,SEEK_SET);
	read(fd1,buf,5);
	printf("%s\n",buf);
	lseek(fd1,-2,SEEK_END);
	read(fd1,buf1,5);
	printf("%s\n",buf1);
	lseek(fd1,-2,SEEK_CUR);
	read(fd1,buf2,5);
	printf("%s\n",buf2);
	
	close(fd1);
	
	return 0;
}
