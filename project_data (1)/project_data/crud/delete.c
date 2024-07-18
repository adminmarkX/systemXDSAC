#include "../functions.h"
#include "../data.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void myDelete(node **head,node **tail,node **current){


        int *num=NULL,flag=0;
        char ch[10];
        // 4.000.000.000
            while(1){
               scanf("%s",ch);
	           num = (int*)malloc(sizeof(strlen(ch)-1));
               num = atoi(ch);
            
                    if( num < 2147483647 && num > 0 ){
                        printf("\nSuccess ! \n");
                        flag = 1;
                        break;
                    }else{
                        printf("\nPlease add a positive! \n");
                    }
           }
            
            if ((*head) == NULL) { 
                   printf("\nTHe head is NULL\n");
                } 
        
        // if the previous statement exists then we have to check 
        // if the node that we want to delete is on the HEAD
        // if the node that we want to delete is on the TAIL
        // if the node that we want to delete is on the BODY
        if(flag == 1){
        
            
            // if the node that we want to delete is on the HEAD
            if((**head).age == num){
 
               
                    // here it gives the temporary node the HEAD memory access
                    // which later it will give it to the node next to the HEAD
                    struct node* temp = (*head);
                
                    // here it makes the next node the HEAD Node
                    (*head) = (*head)->next;
                
                    // here disconnect the new HEAD NOde from the previous HEAD NODE
                    (*head)->prev = NULL;
                
                
                    // Free the mem
                    free(temp);
                
                }
                
                
                
            
            
        
            
             // if the node that we want to delete is on the TAIL
            if((**tail).age == num){
                
                    // here it gives the temporary node the HEAD memory access
                // which later it will give it to the node next to the HEAD
                struct node* temp = (*tail);
                
                // here it makes the next node the TAIL Node
                (*tail) = (*tail)->prev;
                
                // here disconnect the new HEAD NOde from the previous HEAD NODE
                (*tail)->next = NULL;
                
                // Free the mem
                free(temp);  
                
                } 
               
          
        }
     
	    
     
        
        
}
