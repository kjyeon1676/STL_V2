#include <set>
#include <string>
#include <print>

struct People
{
	int id;
	std::string name;
};

int main()
{
	std::set<People> s;

	s.emplace(1, "kim");
	s.emplace(2, "lee");
	s.emplace(3, "park");
}