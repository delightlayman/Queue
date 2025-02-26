#include "queue.h"

int main(){
    Queue s;
    InitQueue(&s); 

    for(int i='a';i<'f';i++){
        QueuePush(&s,i);
    }
    QueuePrint(&s);
    printf("\n");
    /*DestQueue(&s);
    QueuePrint(&s);*/

     for(int i=0;i<5;i++){
         QueuePop(&s);
         QueuePrint(&s);
        printf("\n");

     }


}