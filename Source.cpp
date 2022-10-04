#include "Header.h"
#pragma comment(lib,"Random.lib")
void main()
{
int  i=0,x=0,End=0,start=0,Count=0;
std::cout<<"Write the beginning and the end\n";
std::cout<<"Write Start Num\n";
std::cin>>start;
std::cout<<"Input End Num\n";
std::cin>>End;
std::cout<<"How many times to print the random number\n";
std::cin>>Count;
	while(i<Count)
	{
	x=RendomNum(End,start);
	printf("%d,",x);
	Sleep(10);
	i++;
	}
}