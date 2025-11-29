#include<stdio.h>
#include<string.h>

int main() {
    char pass[50];
    int ok;

    do{ 
        ok =1;
        printf("enter password:");
        scanf("%s",pass);

        int len =strlen(pass);
        int up=0,num=0,sp=0;

        for(int i=0;i<len;i++) {
            if(pass[i]>'A'&&pass[i]<='Z')up=1;
            else if(pass[i]>='0'&&pass[i]<='9')num=1;
            else if(pass[i]=='@'||pass[i]=='#'||pass[i]=='_')sp=1;
        }
        if(len <8 ||!up||!num||!sp)
        ok=0;

        } while(ok==0);
        printf("strong password accepted!\n");
        return 0;
     

}
