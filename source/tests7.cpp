# define CATCH_CONFIG_RUNNER
# define _USE_MATH_DEFINES
# include <catch.hpp>
# include <cmath>
# include <iostream>

int is_prime(int a)
{
	
	for (int i = 2; i < a; i++) {

		if (a % i != 0) {
				
			return true;

		}
		else
		{
			return false;
		}

	}
	
}

TEST_CASE("describe_is_prime", "[is_prime]")
{
	REQUIRE(is_prime(7) == true);
	REQUIRE(is_prime(10) == false);
	REQUIRE(is_prime(5) == true);
	REQUIRE(is_prime(7151) == true);
	REQUIRE(is_prime(7152) == false);
	
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
