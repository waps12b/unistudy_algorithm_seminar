/* 2017.08.18 유니스터디 알고리즘 현장 특강
 * Created By. Dongyi Kim
 */
 #include<cstdio>
 #include<iostream>
 
 const int MAX_N = 100000;
 
 using namespace std;
 
 

//arr[0] ~ arr[n-1] 가장 큰 값을 반환하는 함수
int get_maximum(int arr[], int n)
{
    int maximum = arr[0];
    //begin of algorithm

    //end of algorithm
    return maximum;
}
 
 
 int main()
 {   // 숫자의 개수 n과 
     // n개의 정수를 입력받아서 그 최대값을 출력하는 프로그램
     
    int n;
    int data[MAX_N];
    
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &data[i]);
    }
 
    //이 함수를 호출하면 n개의 숫자의 최대값이 반환된다고 가정하자 
    int answer = get_maximum(data, n);

    //그렇다면 우리가 할 일은 출력밖에 없다
    printf("%d\n", answer);
    return 0;
 }