# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <iostream>

int checksum(int a)
{
	int d1;
	int d2;
	int d3;
	int d4;
	int d5;
	int d6;

	if (a > 999999 ||  a < 0) {

		std::cout << "invalid input";
		return 0;
	}
	else {
		d6 = a % 10;
		d5 = a / 10 % 10;
		d4 = a / 100 % 10;
		d3 = a / 1000 % 10;
		d2 = a / 10000 % 10;
		d1 = a / 100000 % 10;
	}

	return d1 + d2 + d3 + d4 + d5 + d6;

}

TEST_CASE("describe_checksum", "[checksum]")
{
	REQUIRE(checksum(121707) == 18);
	REQUIRE(checksum(12170) == 11);
	REQUIRE(checksum(1217) == 11);
	REQUIRE(checksum(121) == 4);
	REQUIRE(checksum(12) == 3);
	REQUIRE(checksum(1) == 1);
	
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
