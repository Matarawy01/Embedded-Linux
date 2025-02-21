#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
// int main(){
//     __pid_t pid;
//     pid = fork();
//     if(pid < 0){
//         printf("Fork Error\n");
//         exit(1);
//     }
//     else if( pid == 0){
//         printf("[CHILD] Child process is: %d and the Parent process %d\n", getpid(), getppid());
//         while(1);
//     }else{
//         printf("[Parent] Child process is: %d and the Parent process %d\n", getpid(), getppid());
//         sleep(10);
//         while(1);
//     }

// }

/************************* Command Used *************************/
// ps -ao ppid,pid,cmd | grep a.out 
// -> 6675    8343 ./a.out
//    8343    8344 ./a.out
//    8401    8694 grep --color=auto a.out

// ps -aux | grep a.out 
// -> matarawy    8343 71.3  0.0   2776  1408 pts/1    R+   14:58   0:24 ./a.out
//    matarawy    8344  100  0.0   2776   768 pts/1    R+   14:58   0:34 ./a.out
//    matarawy    8484  0.0  0.0   9220  2560 pts/2    S+   14:58   0:00 grep --color=auto a.out

// man getpid
// -> pid_t getpid(void);
//    pid_t getppid(void);



/************************* Usage of Execve *************************/
int main(){
    const char *cmd = "/usr/bin/sleep";
    char *argv[] = {"sleep", "10", NULL}; // Argument Vector [argc -> argument count]
    char *envp[] = {NULL}; // Environment Parameter 
    __pid_t pid;
    pid = fork();
    if(pid < 0){
        printf("Fork Error\n");
        exit(1);
    }
    else if( pid == 0){
        // Replace child process with my new cmd
        execve(cmd, argv, envp);
        // This occur when execve failed
        perror("Execution failed\n");
        exit(1);
    }else{
        printf("[Parent] the Parent process is: %d\n", getpid());
        int status;
        waitpid(pid, &status, 0);
        printf("child process %d terminated with status %d\n", pid, status);
    }

}