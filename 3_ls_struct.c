#include<stdio.h>
#include<sys/stat.h>
#include<time.h>

int main()
{
	struct stat sfile;
	struct tm dt;
	stat("demo.txt",&sfile);
	printf(sfile.st_mode&S_IRUSR ? "r" : "-");
	printf(sfile.st_mode&S_IWUSR ? "w" : "-");
	printf(sfile.st_mode&S_IXUSR ? "x" : "-");
	printf(sfile.st_mode&S_IRGRP ? "r" : "-");
	printf(sfile.st_mode&S_IWGRP ? "w" : "-");
	printf(sfile.st_mode&S_IXGRP ? "x" : "-");
	printf(sfile.st_mode&S_IROTH ? "r" : "-");
	printf(sfile.st_mode&S_IWOTH ? "w" : "-");
	printf(sfile.st_mode&S_IXOTH ? "x" : "-");
	printf("\nlink= %lo\n",sfile.st_nlink);
	printf("size = %d\n",sfile.st_size);
	time_t modify_time = sfile.st_mtime;
	dt = *(gmtime(&sfile.st_mtime));
	printf("date & time= %d-%d-%d %d:%d:%d",dt.tm_mday,dt.tm_mon+1,dt.tm_year + 1900,dt.tm_hour+5,dt.tm_min+30,dt.tm_sec);


	return 0;
}
