# define CATCH_CONFIG_RUNNER
# define _USE_MATH_DEFINES
# include <catch.hpp>
# include <cmath>
# include <iostream>

int cyl(int radius, int height)
{
	int area = ( M_PI * ( radius * radius ) * 2) + ( ( M_PI * ( radius * 2 ) ) * height ) ;
	int volume = (M_PI * (radius * radius)) * height ;

	std::cout << area;
	std::cout << volume;

	return area;
}

TEST_CASE("describe_cyl", "[cyl]")
{
	REQUIRE(cyl(30, 100) == 24504);
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
