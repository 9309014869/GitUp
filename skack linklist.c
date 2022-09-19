#include <stdio.h>
#include<stdlib.h>
#define null 0
struct node{
    int data;
    struct node *next
};
struct node *x;
void push(){
    struct node *ptr=(struct node*)malloc (sizeof(struct node));
   // struct node *x=(struct node*)malloc(sizeof(struct node));
    int val;
    if(ptr==null){
        printf("vlaco");
        
    }
        else{
            printf("enter the value\n");
            scanf("%d",&val);
            if(x==null)
            {
            ptr->data=val;
            ptr->next=null;
            x=ptr;
        }
        else{
            ptr->data=val;
            ptr->next=null;
            x=ptr;
        }
        printf("pushed\n");
    }
}
        void pop(){
            int val;
            struct node *ptr;
            if(x==ptr){
                printf("link list is empty\n");
            }
            else{
             val=x->data;
            
             ptr=x;
             x=x->next;
             printf("%d\n",val);
             free(ptr);
             printf("popped \n");
              
               
            }
            
        }
        int main(){
            int choise;
            struct node *x=(struct node *)malloc(sizeof(struct node));
            
            while(1){
                printf("enter the 1 to push\t 2 pop \n");
                scanf("%d",&choise);
                switch(choise){
                    case 1:
                    {
                        push();
                        break;
                    }
                    case 2:
                    {
                        pop();
                        break;
                    }
                }
                
            
            }
            return 0;
            
        }
    
