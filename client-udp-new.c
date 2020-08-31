#include <pthread.h>/* UDP client in the internet domain */
#include <time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h> //For exit function
#include <string.h> //for strlen
#include <unistd.h> // for write and read functions
#define INITIAL_CAPACITY 0
void error(char * msg);
typedef struct
{
	int end;
        
} shared_data_t;

typedef struct
{
	int thread_num;
	shared_data_t* shared_data; 
	char ip[60]; 
        char port[60]; 
        char code[60]; 
      	
} private_data_t;
void* run(void* data);
/*
params: host name and port number
*/
void increase_size_threads(pthread_t **arr,int *capacity){
     
       *capacity = *capacity +1;
        *arr = realloc(*arr, sizeof(pthread_t) *(*capacity));
          
         

     
  
}
void increase_size_private_mem(private_data_t **arr,int *capacity){
    *capacity = *capacity +1; 
    *arr=realloc(*arr, sizeof(private_data_t)*(*capacity));
          
          
     
     
                
           
}
int main(int argc, char* argv[]){
    if (argc != 2) { printf("Usage: server port\n");
                    exit(1);
     }
     shared_data_t* shared_data = (shared_data_t*) calloc(1, sizeof(shared_data_t)); 
    if ( shared_data == NULL ){
		return (void)fprintf(stderr, "error: could not allocate shared memory\n"), 1;
    }
     char ip[60]; 
     char port[60]; 
     int index = 0;
     int capacity_thread = INITIAL_CAPACITY;
     int capacity_private = INITIAL_CAPACITY;
     
    pthread_t* threads = (pthread_t*) malloc(INITIAL_CAPACITY * sizeof(pthread_t));
    private_data_t* private_data = (private_data_t*) malloc(INITIAL_CAPACITY * sizeof(private_data_t));
     
    
    shared_data->end = 0;
     while(shared_data->end == 0){
	    printf("Por favor ingrese la dirección IP. Si desea finalizar, digite 'Terminar'\n");
            scanf("%s", ip);
    	     if((strcmp(ip,"Terminar") != 0)){
             printf("Por favor ingrese un puerto. Si desea finalizar, digite 'Terminar'\n");
             scanf("%s", port);}
	    if((strcmp(ip,"Terminar") != 0) && (strcmp(port,"Terminar") != 0)){
           	
                increase_size_threads(&threads,&capacity_thread);
                increase_size_private_mem(&private_data,&capacity_private);            
                 
                private_data[index].shared_data = shared_data;               
                private_data[index].thread_num = index;
                strcpy(private_data[index].ip,ip);
                strcpy(private_data[index].port,port);
                strcpy(private_data[index].code,argv[1]);
                
                pthread_create(&threads[index], NULL, run, &private_data[index]);   
                index = index + 1;
                       
            }
            else{
            	shared_data->end = 1;
                if(index > 0){
                   	for ( int i = 0; i < index; ++i ){
				pthread_join(threads[i], NULL);
                        }                
                }
            }
     }	
     
     free(private_data);
     free(threads);
     free(shared_data);
      return 0;
}

void* run(void*data)
{
 
   
   private_data_t* private_data = (private_data_t*)data;
   shared_data_t* shared_data = private_data->shared_data;  
   int sock, length, n;
   struct sockaddr_in server, from;
   struct hostent *hp;
   char buffer[256];
   
   
   // socket file descriptor
   sock= socket(AF_INET, SOCK_DGRAM, 0);
   if (sock < 0) error("socket");

   server.sin_family = AF_INET; //AF_INET: address family that is used to designate the type of addresses that your socket can communicate with (in this case, Internet Protocol v4 addresses).
   hp = gethostbyname((*private_data).ip);
   if (hp==0) error("Unknown host");

   bcopy((char *)hp->h_addr, 
        (char *)&server.sin_addr,
         hp->h_length);
   server.sin_port = htons(atoi((*private_data).port));
   length=sizeof(struct sockaddr_in);
    
   while(shared_data->end == 0){
   
   snprintf(buffer, 256, "Id cliente base: %s. Id hilo actual: %d\n", (*private_data).code, (*private_data).thread_num); 
//transmits a message to another socket (same usage as write in a socket file descriptor, the only difference is the presence of flags in sendto)
   
   n=sendto(sock,buffer,
            strlen(buffer),0,(struct sockaddr *)&server,length);
   
   if (n < 0) error("Sendto");
   // receives data on a socket whether or not it is connection-oriented.
   sleep(1);
    
   } 
   
    
   
   
 
   
   return NULL;
}

void error(char *msg)
{
    perror(msg);
    exit(0);
}

