// #include <stdio.h>
// #include <limits.h>
// #include <float.h>
// #include <stdint.h>

// int main(void)
// {
//     int input;
//     scanf("%d", &input);
    
//     int ichi = input % 10;
//     int ten = (input % 100) / 10;
//     int hunnid = (input % 1000) / 100;
//     int sen = (input % 10000) / 1000;
//     int man = input / 10000;
    
//     printf("%06d %d %d %d %d", ichi, ten, hunnid, sen, man);
    
//     return 0;
// }





// int main(void)
// {
//     int a, b, c, d;
    
//     scanf("%d %d %d %d", &a, &b, &c, &d);
    
//     int av = (a+b+c+d)/4;
    
//     if(a<0 || a>100 || b<0 || b>100 || c<0 || c>100 || d<0 || d>100)
//         printf("잘못된 점수");

//     else
//         if(av >= 85)
//             printf("합격");
//         else
//             printf("불합격");
            
//     return 0;
// }






// int main(void)
// {
//     char c1;
//     scanf("%c", &c1);
    
//     printf("%s\n", c1 != 'k' ? "참" : "거짓");
//     printf("%s\n", c1 > 'h' ? "참" : "거짓");
//     printf("%s\n", c1 < 'o' ? "참" : "거짓");
    
//     return 0;
// }





// int main(void)
// {
//     char a = 1;
//     if (a)
//         printf("Hello World!");
//     else
//         printf("char은 boolean으로 사용 불가."); //결과값은 Hello World!라서, char도 됨.

//     return 0;
// }






// int main(void)
// {
//     unsigned int num1, num2;
//     scanf("%u %u", &num1, &num2);
    
//     printf("%u\n", num1 ^ num2);
//     printf("%u\n", num1 | num2);
//     printf("%u\n", num1 & num2);
//     printf("%u", ~num1);
    
//     return 0;
// }




// int main(void)
// {
//     unsigned long long num1;
//     scanf("%lld", &num1);
    
//     printf("%llu", num1 << 16);
    
//     return 0;
// }





// int main(void)
// {
//     char c1 = 'a';
    
    
//     for(c1; c1 <= 'z'; c1++);  //while은 while(조건식) 뒤에 ;를 붙이면 조건식이 계속 true가 되기에 아무것도 출력하지 않고 무한루프에 걸려버린다. for는? 몰라 그냥 이상하네. 일단 다 끝내고 생각 ㄱㄱ
//     {
//         printf("%c", c1);
//     }
    
//     return 0;
// }




// int main(void)
// {
//     int num1;
//     scanf("%d", &num1);
    
//     while(num1 >= 1200)
//     {
//         num1 -= 1200;
//         printf("%d\n", num1);
//     }
    
//     return 0;
// }




// #include <stdio.h>

// int main(void){
//     int num1;
//     scanf("%d", &num1);
    
//     for(int i = 0; i < num1; i--)
//     {
//         for(int j=num1-1; j>0; j--)
//             printf(" ");
//             num1--;
            
//         for(int k = 0; k <= (i*=2)-1; k++)
//             printf("*");
//         printf("\n");
//     }
    
//     return 0;
// }






// #include <stdio.h>

// int main()
// {
// /* int i = 1;
//   for(i; i<=10; i++)
//   {   ㅐ
//     printf("Hello World %d\n", i);
//   }

// printf("%d\n", i); */

// //신기하네, 변수를 for의 밖에서 정의하면 for문 내에서 i의 변화가 밖에도 영향을 미치네T
//   //뭐 어떻게 생각하면 당연히 for문 밖에 있는 함수니까 당연하긴 한데 ㅇㅇ

// /* int block;
// scanf("%d", &block);
  
// for(int i = 1; i <= block; i++)
// {
  
//   for(int j = 1; j<=block-i; j++)
//   {
//     printf(" ");
//   }

//   for(int k=1; k<=i; k++)
//   {
//     printf("*");
//   }
  
//   printf("\n");  
// } */


// int floor;
// scanf("%d",&floor);


// for(int i =1; i <= floor; i++)
// {
//   for(int j=1; j<=floor-i; j++)
//   {
//     printf(" ");
//   }
//  for(int k=1; k<=i*2-1; k++)
//   {
//     printf("*"); 
//   }
//   printf("\n");
//   continue;
// }

// // for(int i =1; i <= floor-1; i++)
// // {
// //   for(int j =floor; j>=floor-(i-1); j--)
// //   {
// //     printf(" ");  
// //   }
// //   for(int k = 1; k<=(floor-i)*2-1; k++)
// //   {
// //     printf("*");    
// //   }

// // printf("\n");
// // }

// return 0;
// }






// #include <stdio.h>

// int main(void)
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
    
//     while (a <= b)
//     {
//         if(a % 55 == 0)
//             printf("FizzBuzz\n");
//         else if(a % 5 == 0)
//             printf("Fizz\n");
//         else if(a % 11 == 0)
//             printf("Buzz\n");
//         else
//             printf("%d\n", a);
//         a++;
//     }
    
//     return 0;
// }




// #include <stdio.h>
// #include <string.h>    // strchr 함수가 선언된 헤더 파일

// int main()
// {
//     char s1[30] = "A Garden Diary";  // 크기가 30인 char형 배열을 선언하고 문자열 할당

//     char *ptr = strchr(s1, 'a');     // 'a'로 시작하는 문자열 검색, 포인터 반환

//     printf("%s", ptr);

//     return 0;
// }





// int main(void){
// 	int num1, num2, num3;
// 	scanf("%d %d %d", &num1, &num2, &num3);
	
// 	printf("%d", num1 >= (num2 >= num3 ? num3 : num2) ?  (num2 >= num3 ? num3 : num2) : num1);

// 	return 0;
// }




// #include <stdio.h>
// #include <limits.h>
// #include <float.h>
// #include <stdint.h>
// #include <string.h>
// #include <stdlib.h>



// int main(void)
// {
// 	int num1;
// 	scanf("%d", &num1);
	
// 	if(num1 >= 90)
// 	    printf('A');
// 	else if(num1 >= 70)
// 	    printf('B');
// 	else if(num1 >= 40)
// 	    printf('C');
// 	else
// 	    printf('D');

// 	return 0;
// }

// //이게 아마 68번







// int main(void)
// {
//     int num1;
//     do
//     {
//         scanf("%d ", &num1);
//         if(num1 == 0)
//             break;
//         else
//             printf("%d\n", num1);
//             continue;
//     } while(1);


// 	return 0;
// }





// int main(void)
// {
//     int num1, num2;
//     int count = 0;
//     scanf("%d", &num1);
//     for(int i = 0; i < num1; i++)
//     {
//         scanf("%d", &num2);
//         getchar();
//         printf("%d\n", num2);
//     }


// 	return 0;
// }
//72번







// int main(void)
// {
// 	int num1;
// 	scanf("%d", &num1);
// 	int i = num1;
// 	do
// 	{
// 	    printf("%d", i);
// 	    i--;
// 	} while(i > 0);
	

// 	return 0;
// }





//78번

// int main(void)
// {
// 	int num1;
// 	scanf("%d", &num1);
// 	int sum = 0;
	
//     for(int i = 0; i <= num1; i++)
//     {
//         if(i%2 == 0)
//             sum += i;
//     }

//     printf("%d", sum);

// 	return 0;
// }




//80번
// int main(void)
// {
// 	char c1;
// 	do
// 	{
// 	    scanf("%c", &c1);
//         getchar();
// 	    printf("%c\n", c1);
// 	} while(c1 != 'q');

// 	return 0;
// }





//81번
// int main(void)
// {
// 	int num1;
// 	scanf("%d", &num1);
// 	int sum = 0;
// 	int a = 1;
	
// 	while(sum <= num1)
// 	{
// 	    sum += a;
// 	    a++;
// 	}

// 	return 0;
// }



// int main(void)
// {
// 	int num1;
// 	scanf("%d", &num1);
// 	int sum = 0;
// 	int a = 0;
	
// 	while(sum <= num1)
// 	{
// 	    a++;
//         sum += a;
//         printf("%d, %d\n", a, sum);
        
//     }

//     printf("%d", a-1);
// 	return 0;
// }



// int main(void)
// {
// 	int num1;
// 	scanf("%d", &num1);
// 	int sum = 0;
// 	int a = 0;
	
	
//     do
//     {
//         a++;
//         sum +=a;
//         printf("%d %d\n", a, sum);
//     } while (sum <= num1);


//     printf("%d", sum == num1 ? a-1 : a);
// 	return 0;
// }



// int main(void)
// {
// 	int num1;
// 	scanf("%d", &num1);
// 	int sum = 1;
// 	int a = 1;
	
	
//     do
//     {
//         printf("%d %d\n", a, sum);
//         a++;
//     } while ((sum+=a) <= num1);


//     printf("%d", a);
// 	return 0;
// }





// int main(void)
// {
//     int num1;
//     scanf("%d", &num1);
//     int sum = 0;
//     int count;

//     for(int i =0; sum>= num1; i++)
//     {
//         sum += i;
//         count = i; //무슨 숫자를 마지막으로 더했는지 기록하기 위함.
//     }
//     printf("%d", count);
// }



// #include <stdio.h>

// int main(){
//     int n, i, sum=0;
//     scanf("%d", &n);
    
//     for(i=1; ; i++){
//         sum+=i;
//         if(sum>=n){
//             break;
//         }
//     }
//     printf("%d", i);
//     return 0;
// }








//82번

// #include <stdio.h>
// #include <limits.h>
// #include <float.h>
// #include <stdint.h>
// #include <string.h>
// #include <stdlib.h>



// int main(void)
// {
// 	int num1;
// 	scanf("%x", &num1);
	
// 	for(int i = 1; i < 0x10; i++)
// 	    printf("%X*%X=%X\n", num1, i, num1*i);

// 	return 0;
// }
// %x랑 %X의 차이를 깨달았음.




//85번
// int main(void)
// {
//     unsigned int h, b, c, s;
//     double result = 0;
//     scanf("%d %d %d %d", &h, &b, &c, &s);

//     double capacity = h*b*c*s;
//     result = (double)(h*b*c*s) / 8 / 1024 / 1024;

//     printf("%.1lf MB", result);

//     return 0;
// }



//90번
// #include <stdio.h>

// int main(void)
// {
//     unsigned long long a, b, c;
//     scanf("%llu %llu %llu", &a, &b, &c);
    
//     for(int i = 0; i < c-1; i++)
//     {
//         a *= b;
//     }
    
//     printf("%lld", a);

// 	return 0;
// }





//91번
// #include <stdio.h>

// int main(void)
// {
//     long long a, b, c, d;
//     scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    
//     long long result;
    
//     for(int i = 0; i < d-1; i++)
//     {
//         a *= b;
//         a += c;
        
//         result = a;
//     }
    
//     printf("%lld", result);

// 	return 0;
// }





// #include <stdio.h>

// int main(void)
// {
// 	int a, b, c;
// 	scanf("%d %d %d", &a, &b, &c);
	
// 	for(int i = 1;; i++)
// 	{
// 	    if(i % a == 0 && i % b == 0 && i % c == 0)
// 	    {
// 	        printf("%d", i);
// 	        break;
// 	    }
// 	}

// 	return 0;
// }




// int main(void)
// {
//     int count; //총 번호를 부른 횟수
//     int st_numto23[23] = { 0, }; //총 인원수
//     scanf("%d", &count); //부른 횟수 받음

    
//     int st_number[count]; //커다란 배열 생성
//     for(int i = 0; i < count; i++) //새로운 배열에, 엄청나게 많이 부른 출석은, 어떤 번호를 불렀는가. 를 기록.
//     {
//         scanf("%d", &st_number[i]);
//         getchar();
//     }

    
//     for(int k = 0; k < 23; k++)
//     {
//         for(int m = 1; m <= 23; m++)
//         {
//             if(st_number[k] == m)
//                 st_numto23[k] += 1;
//             else
//                 continue;
//         }

//     }



//     for(int l = 0; l < 23; l++)
//         printf("%d ", st_numto23[l]);
// }


//위에 코드 ㅈ창이라서 아래와 같이 수정함

// int main(void)
// {
//     int count, x; //총 번호를 부른 횟수, 부른 번호 임시 저장
//     int st_numto23[23] = { 0, }; //총 인원수
//     scanf("%d", &count);

//     for(int i=0; i<count; i++)
//     {
//         scanf("%d", &x);
//         st_numto23[x-1]++;
//     }

//     for(int j=0; j<23; j++)
//         printf("%d ", st_numto23[j]);

//     return 0;
// }





//94번
// #include <stdlib.h>

// int main(void)
// {
//     int n, temp;
//     scanf("%d", &n);

//     int *matrix = malloc(sizeof(int) * n);

//     for(int i=0; i<n; i++)
//     {
//         scanf("%d", &temp);
//         matrix[i] = temp;
//     }

//     for(int j=n-1; j>=0; j--)
//     {
//         printf("%d ", matrix[j]);
//     }

//     return 0;
// }





//95번
// #include <stdlib.h>

// int main(void)
// {
//     int n, temp;
//     int smallest=24;
//     scanf("%d", &n);

//     int *matrix = malloc(sizeof(int) * n);

//     for(int i=0; i<n; i++)
//     {
//         scanf("%d", &temp);
//         if(smallest > temp)
//             smallest = temp;
//     }

//     printf("%d", smallest);

//     return 0;
// }





//96번
// #include <stdio.h>

// int main(void)
// {
//     int n, x, y;
//     scanf("%d", &n);
//     int pan[19][19] = { 0, };

//     for(int i = 0; i < n; i++)
//     {
//         scanf("%d %d", &x, &y);

//         pan[y-1][x-1] = 1;
//     }


//     for(int j = 0; j<19; j++)
//     {
//         for(int k=0; k<19; k++)
//         {
//             printf("%d ", pan[k][j]);
//         }
//         printf("\n");
//     }
// }




// #include <stdio.h>

// int main(void)
// {
//     int n, x, y;
//     int pan[19][19] = { 0, };

//     for(int i = 0; i < 19; i++)
//     {
//         for(int j=0; j< 19; j++)
//         {
//             scanf("%d", &pan[i][j]);
//         }
//     }

//     scanf("%d", &n);

//     for(n; n != 0; n--)
//     {
//         scanf("%d %d", &x, &y);
//         for(int k=0; k < 19; k++)
//         {
//             pan[k][x] = !(pan[k][x-1]);
//         }
//         for(int l=0; l < 19; l++)
//         {
//             pan[y][l] = !(pan[y-1][l]);
//         }
//     }

//     for(int i=0; i<19; i++)
//     {
//         for(int j=0; j<19; j++)
//         {
//             printf("%d ", pan[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }






// #include <stdio.h>

// int main(void)
// {
//     int n, x, y;
//     int pan[19][19] = { 0, };

//     for (int i = 0; i < 19; i++)
//     {
//         for (int j = 0; j < 19; j++)
//         {
//             scanf("%d", &pan[i][j]);
//         }
//     }

//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d %d", &x, &y);
//         for (int k = 0; k < 19; k++)
//         {
//             pan[x - 1][k] = 1 - pan[x - 1][k];
//             pan[k][y - 1] = 1 - pan[k][y - 1];
//         }
//     }

//     for (int i = 0; i < 19; i++)
//     {
//         for (int j = 0; j < 19; j++)
//         {
//             printf("%d ", pan[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }






// //98번
// #include <stdio.h>

// int main(void)
// {
//     int h, w, n, l, d, x, y; //세로가 h 가로가 w, 막대의 개수가 n, 막대의 길이가 l, 방향이 d, 각 막대의 시작 좌표가 x(세로)와 y(가로)
//     scanf("%d %d", &h, &w);

//     // int **pan = malloc(sizeof(int *) * h); //배열의 세로길이만큼 pointer to int 크기의 동적메모리 할당.

//     // for (int i = 0; i < h ; i++)
//     // {
//     //     pan[i] = malloc(sizeof(int) * w); //배열의 가로길이 만큼 int 크기의 동적메모리 할당.
//     // }

//     int pan[100][100] = { 0, }; // 배열으로 판을 만들고 0으로 초기화.

//     scanf("%d", &n); //막대 개수 확인

//     for(int i = 0; i < n; i++)
//     {
//         scanf("%d %d %d %d", &l, &d, &x, &y); //막대의 길이, 방향, 시작위치 확인. 이 때 d는 0이면 오른쪽, 1이면 아래방향을 향한다.

//         if (d == 0)
//         {
//             for(int j = 0; j < l; j++)
//             {
//                 pan[x-1][y + j-1] = 1;
//             }
//         }
//         else if(d == 1)
//         {
//             for(int j = 0; j < l; j++)
//             {
//                 pan[x+j-1][y-1] = 1;
//             }            
//         }
//     }

    
//     for(int i = 0; i < h; i++)
//     {
//         for(int j = 0; j < w; j++)
//         {
//             printf("%d ", pan[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;   
// }







// 99번
// #include <stdio.h>

// int main(void)
// {
//     int x1 = 1, y1 =1; //개미의 시작점 선언 x는 세로, y는 가로축
//     int map[10][10] = { 0, }; //맵 초기화
//     int stop = 0;


//     // 맵 입력
//     for(int i = 0; i < 10; i++) //세로방향s scan
//     {
//         for(int j = 0; j < 10; j++) //가로방향 scan
//         {
//             scanf("%d", &map[i][j]);
//         }
//     }

//     if(map[x1][y1] == 2)
//     {
//         map[x1][y1] = 9;
//         goto EXIT;
//     }

//     // 개미는 (1,1)에서 출발하며, 오른쪽 > 아래 의 순서로 우선순위를 가진다. & 개미가 지났던 곳은 숫자 9를 할당.
//     do
//     {
//         map[x1][y1] = 9; // 1,1 좌표에 숫자 9 할당  AND  개미가 가는 곳은 9 할당
//         if (map[x1][y1 + 1] == 0) //오른쪽으로 움직이는 작업
//             ++y1;
//         else if (map[x1][y1 + 1] == 2)
//         {
//             ++y1;
//             map[x1][y1] = 9;
//             stop = 1;
//         }
//         else if (map[x1 + 1][y1] == 0) //오른쪽이 안된다면 아래로 움직이는 작업.
//             ++x1;
//         else if (map[x1 + 1][y1] == 2)
//         {
//             ++x1;
//             map[x1][y1] = 9;
//             stop = 1;
//         }        

//         else
//             stop = 1;

//     } while(stop != 1);


// EXIT:
//     for(int i = 0; i < 10; i++)
//     {
//         for(int j = 0; j < 10; j++)
//         {
//             printf("%d ", map[i][j]);
//         }
//         printf("\n");
//     }

// }



//printf("Hello World!");




#include <stdio.h>

int main(void)
{
    printf("Hello World");

    return 0;
}