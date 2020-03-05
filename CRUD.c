#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#include<stdio.h>

int main(){

//===================================================
//		    TASK 01 
//===================================================
	// Create a File "Read.txt"
	int fd = open("Read.txt", O_RDWR | O_CREAT);
	printf("\n File Creation : %d", fd );
	
	// String to Store user input
	char str[15];
	//scanf("%s" , str);
	read(0, str, 15);	
	
	// Writig input string to file "Read.txt"
	int file_write = write(fd, str, 15);
	printf("\n File Write Operation : %d" , file_write);

	// Close the File
	close(fd);

//===================================================
//		    TASK 02 
//===================================================

	// Create Write.txt
	int fd2 = open("Write.txt", O_WRONLY | O_CREAT);
	printf("\n File Creation (Write ) : %d", fd2);
	
	// String to Store read characters
	char Str[15];
	
	// Read from read.txt
	read(fd, Str, 15);
	
	// Write to Write.txt
	int file_write2 = write(fd2, Str, 15);
	printf("\n File Write Operation wr : %d" , file_write2);
	printf("\n");
	// Print to output
	printf("The string from Read.txt is : " );
	printf("%s" , str);
	
	printf("\n\n");

	// Close Write.txt
	close(fd2);
	return 0;
}
