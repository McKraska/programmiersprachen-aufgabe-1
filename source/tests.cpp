# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <iostream>

int gcd(int a, int b)
{

	if (a < 0 || b < 0) {
		return 0;
	}

	int greatest;
	for (int i = 1; i <= a && i <= b; i++) {
		if (a% i == 0 && b%i== 0) {
			greatest = i;
		}
	}
	
	std::cout <<greatest;
	return greatest;
}

TEST_CASE("describe_gcd", "[gcd]")
{
	REQUIRE(gcd(2, 4) == 2);
	REQUIRE(gcd(9, 6) == 3);
	REQUIRE(gcd(3, 7) == 1);
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
