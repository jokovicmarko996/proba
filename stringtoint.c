#include <stdio.h>
#include <string.h>
#define SIZE 20
/* Sum of big numbers from string array(string doesnt fin in normal types) */
/* dodat novi komentars  */ /* dodat jos jedan komentar u novoj grani */
char* sumBigNumbers(const char*x, const char*y);

int main(){
    char *a = "08347263946345739";
    char *b = "76394027395638494";
    char* sum;
    sum = sumBigNumbers(a,b);
    printf("\nsum in string is:%s",sum);
    return 0;
}

char* sumBigNumbers(const char*x, const char*y){
    static char string_rez[SIZE];
    char i,n;
    char tmp=NULL;
    n=strlen(x);
// dobudzi logiku za kada su stringovi razlicite duzine 
//printf("string_rez[i]=");
    for(i=n; i>=0;i--){ // potencijalno rezultat moze da ima 18 mesta
        tmp = NULL;
        
        if(i==0){
            if(string_rez[i]!=1){
                string_rez[i]='0';
            }else{
                string_rez[i]='1';
            }
        }else{
        tmp=x[i-1]+y[i-1] - '0'; //zbir cifara na istom mestu
        if(tmp>'9' && i!=0){ // ako je zbir br na istom mestu > 9
            tmp=tmp-10;
            string_rez[i]=string_rez[i]+tmp;
        //    printf("%c\t",string_rez[i]);
            string_rez[i-1]=1;
        }else{
            string_rez[i]=string_rez[i]+tmp;
            
        //    printf("%c\t",string_rez[i]);
        }
        }
    }
    
    return string_rez;
    
}
