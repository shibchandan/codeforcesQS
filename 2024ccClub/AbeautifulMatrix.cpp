#include<stdio.h>
#include<math.h>
int main(){
    int arr[5][5], row, col;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1){
                row=abs(2-i);
                col=abs(2-j);
                int result = row+col;
                printf("%d",result);
            }
        }
    }
    return 0;
}