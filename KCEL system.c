#include<stdio.h>
#include<conio.h>
#include<time.h>
int grade(int A[26][28], int B[], int c){
    for(int index=0; index<28; index++){

        if(A[c][index]!=B[index])
            return 0;
    }
        return 1;

}
/*int reference(char c){
    int ref=0;
    char letters[]={A,B,C,D,E,F,G,H,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};
    for(int i=0; i<26; i++){
        if(c=='letters[i]')
            return ref;
        else
            ref++;

    }
}*/
int main()
{
    int m[26][28]={{0,1,1,0,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1},
    {1,1,1,0,1,0,0,1,1,0,0,1,1,1,1,0,1,0,0,1,1,0,0,1,1,1,1,0},
    {0,0,1,1,0,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1},
    {1,1,0,0,1,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,1,0,1,1,0,0},
    {1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1},
    {1,1,1,1,1,0,0,0,1,0,0,0,1,1,1,1,1,0,0,0,1,0,0,0,1,0,0,0},
    {0,1,1,0,1,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,1,0,1,1,0},
    {1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1},
    {1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0},
    {0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,1,0,0,1,0,1,1,0},
    {1,0,0,1,1,0,1,0,1,1,0,0,1,0,0,0,1,1,0,0,1,0,1,0,1,0,0,1},
    {1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,1,1},
    {1,0,0,1,1,1,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1},
    {1,0,0,1,1,1,0,1,1,0,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1},
    {0,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,0,1,1,0},
    {1,1,1,0,1,0,0,1,1,0,0,1,1,1,1,0,1,0,0,0,1,0,0,0,1,0,0,0},
    {0,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,0,1,1,0,0,0,0,1},
    {1,1,1,0,1,0,0,1,1,0,0,1,1,1,1,0,1,1,0,0,1,0,1,0,1,0,0,1},
    {0,1,1,0,1,0,0,1,1,0,0,0,0,1,1,0,0,0,0,1,1,0,0,1,0,1,1,0},
    {1,1,1,1,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0},
    {1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,0,1,1,0},
    {1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,0,1,0,0},
    {1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,0,1,1,0,0,1},
    {1,0,0,1,1,0,0,1,1,0,0,1,0,1,1,0,1,0,0,1,1,0,0,1,1,0,0,1},
    {1,0,0,1,1,0,0,1,1,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0},
    {1,1,1,1,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,0,1,1,1,1}};

/*int p=0;

for (int x = 0; x < 26; x++){
    for(int row=0; row<7; row++){
        for(int col=0; col<4; col++){
            if(m[x][p]==1)
                printf("*");
            else
                printf(" ");
            p++;
        }
        printf("\n");
    }
    printf("\n\n");
    p=0;
}*/
    time_t start,stop;
    float tot=0;
    char e;
    int score=0;

    int Answer[28];
    for(int d=0;d<2;d++){

            int k=0;
    start= time(NULL);
    kcel:
       puts("enter 1 or 0");

    for(int row=0; row<7; row++){
        for(int col=0; col<4; col++){

            e=getch();
            if(e=='1'){
                    Answer[k]=1;
                    printf("*");

            }
            else if(e=='0'){
                    Answer[k]=0;
                    printf(" ");
            }
            else{
                printf("wrong input,repeat\n");
                goto kcel;
            }

            k++;
        }
        printf("\n");
    }
    //int timenow=
    //int charI= reference();
    score += grade(m,Answer,1);
    stop=time(NULL);
    tot += difftime(stop,start);
    printf("\n\n");

    }
    printf("Time taken is %f seconds\n",&tot);
    printf("score is %d",score);



    return 0;
}