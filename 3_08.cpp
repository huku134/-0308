#include<stdio.h>
//����� �� �� 
//int main(void){
//printf("\\    /\\ \n");
//printf(" )  ( ') \n");
//printf("(  /  ) \n");
//printf(" \\(__)|");
//} 
//������ ��� 
//int main(void){
//printf("|\\_/| \n");
//printf("|q p|   /} \n");
//printf("( 0 )\"\"\"\\ \n");
//printf("|\"^\"`    | \n");
//printf("||_/=\\\\__| \n");
//} 
//ũ��� 
//int main(void){
//	int A,B;
//	scanf("%d %d",&A,&B);
//	if(A>B){
//		printf(">");
//	}else if(A<B){
//		printf("<");
//	}else if(A==B){
//		printf("==");
//	}
//} 
//�������� 
//int main(void){
//	int test;
//	scanf("%d",&test);
//	
//	if(test<=100){
//		if(test>=90){
//			printf("A");
//		}else if(test>=80){
//			printf("B");
//		}else if(test>=70){
//			printf("C");
//		}else if(test>=60){
//			printf("D");
//		}else{
//			printf("F");
//		}
//	}else{
//		printf("error");
//	}
//} 
//����Ȯ�� 
//int main(void){
//	int year;
//	scanf("%d",&year);
//	printf("%d\n", year%4);
//	printf("%d\n", year%100);
//	printf("%d\n", year%400);
//	if(year%4 == 0 && year%100 != 0 || year%400 == 0){
//		printf("1"); 
//	}else{
//		printf("0");
//	}
//} 
//��и���� 
//int main(void){
//	int x,y;
//	scanf("%d",&x);
//	scanf("%d",&y);
//	if(x>0 && y>0){
//		printf("1"); 
//	}else if(x<0 && y>0){
//		printf("2");
//	}else if(x<0 && y<0){
//		printf("3");
//	}else if(x>0 && y<0){
//		printf("4");
//	}
//} 
//�˶��ð�
//int main(void){
//	const int al = 45;
//	int hour,min;
//	scanf("%d %d",&hour,&min);
//	printf("%d %d\n",hour,min);
//	if(0<=hour<=23 && 0<=min<=59){
//		if(min-al<0){
//			hour -= 1;
//			if(hour<0){
//				hour += 24;
//			}
//			min += 60-al;
//		}else{
//			min -= al;
//		}
//		printf("%d %d",hour,min);
//	}else{
//		printf("error");
//	}
//}
//����ð� 
//int main(void){
//	int al;
//	int hour,min;
//	scanf("%d %d",&hour,&min);//�ú� 
//	scanf("%d",&al);//�� 
//	printf("hour:%d min:%d al:%d\n",hour,min,al);
//	if(0<=hour<=23 && 0<=min<=59){
//		min+=al;
//		if(min>=60){
//			hour += min/60;
//			min = min%60;
//			if(hour>=24){
//				hour -= 24;
//			}
//		}
//		printf("%d %d",hour,min);
//	}else{
//		printf("error");
//	}
//}  
//�ֻ��� ����
//int main(){
//    int a, b, c;
//    int sum;
//    scanf("%d %d %d", &a, &b, &c);
//    if(1<=a<=6 && 1<=b<=6 && 1<=c<=6){
//	    if(a==b){
//	    	if(a==c){
//	    		sum = 10000+a*1000;
//			}else{
//				sum = 1000+a*100;
//			}
//		}else if(a==c){
//			sum = 1000+a*100;
//		}else if(b==c){
//			sum = 1000+b*100;
//		}else{
//			if(a>b){
//				if(a>c){
//					sum = 100*a;
//				}else{
//					sum = 100*c;
//				}
//			}else if(b>c){
//				sum = 100*b;
//			}else{
//				sum = 100*c;
//			}
//		}
//		printf("%d",sum);
//	}else{
//		printf("error");
//	}
//} 

















