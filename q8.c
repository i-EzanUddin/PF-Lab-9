#include <stdio.h>

int main(){
	int num[10] = {100,200,300,400,500,600,700,800,900,1000};
	int *p = &num[0];				//*p means to just and only decalring a pointer not assigning. Can assinged address, by refrencing(&) and aslo use (p) to get address and *p for de referencing ->(*) and use *p to get value.		 
	int *p1 = &num[5];				//*p is just a way to declare a pointer
	
//	printf("******Accesing various elements using pointers******\n");
//	printf("Addrees hold by p is %p\n",p);//p stores address of num[0]
//	printf("Value of num at 0 %d\n",*p);	//defrencing (*) to get value at num of 0
//	printf("%p",*(p + 3));// to get further values 

	printf("Value[0]: %d\n",*p);
	printf("Value[1]: %d\n",*(p + 1));
	printf("Value[2]: %d\n",p[2]);
	printf("Value[3]: %d\n",*(p + 3));
	printf("Value[4]: %d\n",p[4]);
	printf("Value[5]: %d\n",*p1);//600
	printf("Value[6]: %d\n",*(p1 + 1));//700
	printf("Value[7]: %d\n",p1[2]);//800
	printf("Value[9]: %d\n",p1[4]);//1000
	printf("Value[5]: %d\n",p1[-1]);//500
//	printf("Value[8]: %d\n",p[-3]); 800   why it didnt work? Because p only stores the addreess of first value means there is no vlaue or anything behind value[0]. Unlike, *p1, it points towrds the center element of nums array and obivous it has some elements behid it, so we can access using -ve indexes.Thats why *p1 is valid for -ve indexing and *p isnot.
	printf("Value[8]: %d\n",*(p + 7));
}
