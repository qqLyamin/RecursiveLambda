//3� ����������� ������ �������. ����������� std::function � ������ ������� ����������
	//���������� ����� ������������ ���� (x+(x-1)+ (x-2)+...+1).
	//���������: ��� ��� ������������� ����� ���������� ���������� � ������� �����������, 
	//��������: int x=x; - ������������, �� ���������
	// => ���������� ���� function ����� ������������ � ������ �������  - ... f = [&f]...
	//{

	//}


#include <iostream>
#include <functional>

int main()
{
	/*5 + 4 + 3 + 2 + 1*/
	int x;
	std::cout << "input X" << std::endl;
	std::cin >> x; std::cout << std::endl;

	if (x >= 1)
	{
		std::function<int(int)> myf = [&myf](int x) -> int
		{
			/*n = 1;
			if ((x - n) != 1)
			{
				return x = x * myf(n + 1);
			}
			else
			{
				return x * 1;
			}*/
			return (x == 1) ? 1 : x + myf(x - 1);
		};
		std::cout << myf(x) << std::endl;
	}
	else
	{
		throw "error";
	}
	system("pause");
}