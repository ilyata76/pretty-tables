#include <prettytables.hpp>

int main() {
	Table t;
	Row a; a.container = { "a", "b", "c" };
	Row b; b.container = { "c", "d" };
	t.container = { a, b };
	std::cout << t;
	return 0;
}