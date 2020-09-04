#include <iostream>

using namespace std;

int feibonaqi(int n)
{
	if (n==0) 
	{
		return 0;
	}
	if (n==1)
	{
		return 1;
	}
	if (n==2)
	{
		return 1;
	}
	return feibonaqi(n-1)+feibonaqi(n-2);
}

int main()
{
	std::cout << feibonaqi(256) << std::endl;
	return 0;
}
