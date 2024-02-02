#include<stdio.h>
#include<string.h>
int cw(char*str){
    int c=0;
    int iw=0;
    for(int i=0;str[i]!=NULL;i++){
if(str[i]==' '|| str[i]=='
' || str[i]=='	'){
            iw=0;
        }
        else if(iw == 0){
            iw=1;
            c++;
        }
    }
    return c;
}
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int word=cw(str);
    printf("%d
",word);
    return 0;
}