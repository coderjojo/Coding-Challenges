#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>

int main(){
	pid_t pid;

	pid = fork();

	if(pid > 0)
		fprintf(stderr, "Child Complete"); 
}