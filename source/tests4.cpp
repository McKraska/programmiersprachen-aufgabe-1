# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <iostream>

int fract(float a)
{
	float val = 80.0 / a;

	return val;
}

TEST_CASE("describe_fract", "[fract]")
{
	REQUIRE(fract(65.0) == 1.23076923);
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
