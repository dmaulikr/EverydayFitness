#include <stdio.h>

int main(void)
{
	long long i;
	long long x;

	for(i=100000000; i <= 1000000000; i--)
	{
		for(x = 2; x < 500000000; x++)
		{
			if(i % x == 0)
				break;
		}

		if(x == 500000000)
		{
			break;
		}
	}

	printf("%lld는 10억보다 작은 가장 큰 소수입니다.\n", i);
    
    return 0;
}
