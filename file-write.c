#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

struct student {
	int group;
	int kurss;
};

int main (int argc, char **argv)
{
	int fd;
	int bytes = 0;
	char *file = "data.bin";
	struct student data = { 
		.group = 3,
		.kurss = 4
	};
	
	fd = open(file, O_CREAT | O_TRUNC | O_RDWR, 0000777);
	if (fd == -1) {
		printf("File open error: %i (%s)\n", errno, strerror(errno));
		return fd;
	}
	
	bytes = write(fd, &data, sizeof(data));
	//err vieta bytes x3
    if (bytes == -1) {
		printf("File write error: %i (%s)\n", errno, strerror(errno));
		close(fd);
		return bytes;
	}
	
	printf("Student data saved to %s(%i bytes)\n", file);
	close(fd);
	
	return 0;
}

//int fildes - fd 
