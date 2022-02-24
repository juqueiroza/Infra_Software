#include <stdio.h> 
#include <unistd.h>
#include <stdlib.h>

int main(){
                pid_t zombie;
        
                zombie = fork(); 

                if (zombie == 0) {
                        exit(0);
                } else {
                        printf("zombie -> pid: %d\n", zombie);
                }

                while (1) {
                        sleep(10);
                        return(0);
                }
}
