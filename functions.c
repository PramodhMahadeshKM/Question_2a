#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "inc\data.h"

info_t* arr;
int read_arr(char *file_name)
{
   arr=calloc(3,sizeof(info_t));
   FILE *ft=fopen(file_name,"r");
    if(!ft)
    {
        printf("error");
        return 0;
        
    } 
    char buff[1024];
    int row_count=0;
    int field_count=0;
    int i=0;
    while(fgets(buff,1024,ft))
    {
        field_count=0;
        row_count++;
        if(row_count==1)
        {
            continue;
        }
        char * token = strtok(buff, ",");
        int j=0;
        while( token != NULL ) {
        if(j==0)
        {
            strcpy((arr+i)->name,token);
        }
        if(j==1)
        {
           strcpy((arr+i)->mail,token);
           
        }
        if(j==2)
        {   strcpy((arr+i)->Git_link,token);
          
        }
        j++;
        
        token = strtok(NULL, ",");
        }
        i++;
    }
   
   
    fclose(ft);
   
    

   return 1;
   
    
}




//sorting

int comparator(const void* p, const void* q)
{
    return strcmp(((info_t*)p)->name,
                  ((info_t*)q)->name);
}
int sort(info_t *temp)
{
    if(temp==NULL)
    {
        return 0;
    }
    qsort(temp, 3, sizeof(info_t), comparator);
    for (int i = 0; i < 3; i++) {
        printf("%s",(temp+i)->name);
        printf("%s",(temp+i)->mail);
        printf("%s",(temp+i)->Git_link);

    }
    return 1;

}

//display

int display(info_t *temp)
{
    if(temp==NULL)
    {
        return 0;
    }

 
    for(int i=0;i<3;i++)
    {
        printf("%s\n",(temp+i)->name);
        printf("%s\n",(temp+i)->mail);
        printf("%s\n",(temp+i)->Git_link);
    }
    return 1;
}