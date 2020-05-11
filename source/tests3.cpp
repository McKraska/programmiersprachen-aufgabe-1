# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <iostream>

int sum_multiples(int a)
{
	int sum = 0;

	for (int i = 1; i <= a; i++) {

		std::cout << i;

		if (i % 3 == 0 || i % 5 == 0) {

			sum = sum + i;
			std::cout << sum;
		
		}

	}
	
	return sum;
}

TEST_CASE("describe_sum_multiples", "[sum_multiples]")
{
	REQUIRE(sum_multiples(10) == 33);
	REQUIRE(sum_multiples(1000) == 234168);
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
