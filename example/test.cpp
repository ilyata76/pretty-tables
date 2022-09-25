#include <prettytables.hpp>

int main() {
	Table t;
	Row a; a.container = { "a", "b" };
	Row b; b.container = { "c", "d" };
	t.container = { a, b };
	std::cout << t;
	return 0;
}