# define CATCH_CONFIG_RUNNER
# define _USE_MATH_DEFINES
# include <catch.hpp>
# include <cmath>
# include <iostream>

int fact(int a)
{
	if (a < 0) {
		return 0;
	}

	int fact = 1;

	for (int i = 1; i <= a; i++) {
		fact = fact * i;
	}

	std::cout << fact;
	std::cout << "\n";
	return fact;
}

TEST_CASE("describe_fact", "[fact]")
{
	REQUIRE(fact(10) == 3628800);
	REQUIRE(fact(9) == 362880);
	REQUIRE(fact(7) == 5040);
	REQUIRE(fact(5) == 120);
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
