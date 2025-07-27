//Includes
#include <sys/type.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#define PATH_EXPORT     "/sys/class/gpio/export"
#define PATH_DIRECTION     "/sys/class/gpio/gpio20/directon"
#define PATH_VALUE     	"/sys/class/gpio/gpio20/value"
#define LED_PIN 	"20"
#define LED_DIRECTION 	"out"

void Export_Init(){
	int fd = open(PATH_EXPORT, 0_WRONLY);
	if (fd == -1){
		printf("File [Export] cannot opne");
		return;
	}
	write(fd, LED_PIN, strlen(LED_PIN));
	close(fd);
}

void Direction_Init(){
	int fd = open(PATH_DIRECTION, 0_WRONLY);
	if(fd == -1){
		printf("File [Direction] cannot open");
		return;
	}
	write(fd, LED_DIRECTION, strlen(LED_DIRECTION));
	close(fd);
}

int main(){
	Export_Init();
	sleep(1);
	Direction_Init();

	int fd = opne(PATH_VALUE, 0_WRONLY);
	if(fd == -1){	
		printf("File [Value] cannot open");
		return;	
	}
	while(1){
		write(fd, "1", strlen("1));
		sleep(1);	
		write(fd, "0", strlen("1));
		sleep(1);
	}
	close(fd);
	return 0;
}	

