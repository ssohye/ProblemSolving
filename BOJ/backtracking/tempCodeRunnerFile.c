#include <stdio.h>
#include<stdlib.h>

int promising(int *arr,int depth){
    int flag=0;
    if(depth==0||depth==1){
        return flag;
    }
    if (arr[depth]<arr[depth-1]){
        flag=1;
        return flag;
    }
    return flag;
}

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int issame(int*a,int*b,int len){
    int flag=0;
    for(int i=1; i<len; i++){
        if(a[i]!=b[i]){
            flag=1;
            return 1;
        }
    }
    return 0;
}

void backtrack(int n,int m,int depth,int*arr,int*num,int*recent){
    if(depth==m&&promising(arr,depth)==0&&issame(arr,recent,m+1)==1){
        for(int k=1; k<=m; k++){
            printf("%d ",arr[k]);
            recent[k]=arr[k];
        }
        printf("\n");
        return;
    }
    
    if(promising(arr,depth)==0){
        for(int k=0; k<n; k++){
            arr[depth+1]=num[k];
            backtrack(n,m,depth+1,arr,num,recent);
        }
    }
    

}

int main(){
    int n,m=0;
    scanf("%d %d",&n,&m);
    int *num=malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
    }
    qsort(num,n,sizeof(int),compare);
    int *arr=malloc(sizeof(int)*(m+1));
    int *recent=malloc(sizeof(int)*(m+1));
    for(int i=0; i<m+1; i++){
        arr[i]=0;
        recent[i]=-1;
    }

    backtrack(n,m,0,arr,num,recent);

    return 0;
}