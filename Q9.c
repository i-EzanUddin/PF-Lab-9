#include <stdio.h>

int main(){
	int one = 100;
	int two = 200;
	int three = 300;
	int *p1 = &one;
	int *p2 = &two;
	int *p3 = &three;
	
	printf("Address of ONE is %p and its value is %d.\n",p1,one);
	printf("Address of TWO is %p and its value is %d.\n",p2,two);
	printf("Address of THREE is %p and its value is %d.\n",p3,three);
	
	p1 = p2;
	p2 = p3;
	p3 = &one;
	printf("Addresses:\n%p\n%p\n%p\n",p1,p2,p3);
	
	*p1 = *p1 + 1000;	 //1200
	*p2 = *p2 - 1000;	//-700;
	*p3 = *p3 * 2; 		//200
	
	printf("ONE is %d.\n",one);
	printf("TWO is %d.\n",two);
	printf("THREE is %d.\n",three);
	
	int four = 400;
	int five = 500;
	int six = 600;
	
	p1 = &four;
	p2 = &five;
	p3 = &six;
	
	printf("Address of FOUR is %p and its value is %d.\n",p1,four);
	printf("Address of FIVE is %p and its value is %d.\n",p2,five);
	printf("Address of SIX is %p and its value is %d.\n",p3,six);
	
	//Now p1 will take value of six and p2 will take value of four and p3 will take five;
	
	*p1 = *p3; // *p1 = 600; value at address 4 has changed
	*p2 = 400; //*p2 = 400 ; Value at address  five changed with 400
	*p3 = 500; //*p3 = 500; value at addreess six has changeed with 500;
	
	printf("p1 is %d.\n",*p1); //600
	printf("p2 is %d.\n",*p2); //400
	printf("p3 is %d.\n",*p3); //500
		
	
	return 0;
}
