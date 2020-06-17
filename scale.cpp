#include <stdio.h>
#include <math.h>

using namespace std;

const int INF = 987654321;
int MAX_N = 15;
int N;
int arr[MAX_N];
int sum=0;
int ans=0;
bool visited[MAX_N*200000]={0,};

int main(void){
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    
    for(int left=0;left<(1<<N);left++){
        for(int right=0;right<(1<<N);right++){
            int tmp=0;

            for(int i=0;i<N;i++){
                if(left&(1<<i))
                    tmp+=arr[i];
            }
            
            for(int i=0;i<N;i++){i
                if(right&(1<<i))
                    tmp-=arr[i];
            }
            
            visited[abs(tmp)]=true;
        }
    }

    for(int i = 1; i <= sum; i++)
        if(!visited[i])ans++;
    
    printf("%d\n", ans);

    return 0;
}