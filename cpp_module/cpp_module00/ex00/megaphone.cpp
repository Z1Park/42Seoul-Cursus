
#include <iostream>
#include <cstring>
#include <cctype>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			for (size_t j = 0; j < strlen(argv[i]); ++j)
				argv[i][j] = toupper(argv[i][j]);
			std::cout << argv[i];
		}
	}
	std::cout << std::endl;
	return 0;
}
