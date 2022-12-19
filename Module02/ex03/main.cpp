#include "Point.hpp"

int main(void)
{
	Point const a(Fixed(1), Fixed(1));
	Point const b(Fixed(2), Fixed(5));
	Point const c(Fixed(5), Fixed(4));
	Point const pt1(Fixed(2), Fixed(5)); // in
	Point const pt2(Fixed(5), Fixed(4)); // in
	Point const pt3(Fixed(1), Fixed(1)); // in
	Point const pt4(Fixed(1), Fixed(2)); // out
	Point const pt5(Fixed(3), Fixed(2)); // out
	Point const pt6(Fixed(0), Fixed(0)); // out
	Point const pt7(Fixed(2), Fixed(3)); // in
	Point const pt8(Fixed(3), Fixed(4)); // in
	Point const pt9(Fixed(4), Fixed(4)); // in
	Point const pt10(Fixed(4), Fixed(5)); // out
	Point const pt11(Fixed(2), Fixed(2)); // in
	Point const pt12(Fixed(2), Fixed(4)); // in

	bool is_in1 = bsp(a, b, c, pt1);
	bool is_in2 = bsp(a, b, c, pt2);
	bool is_in3 = bsp(a, b, c, pt3);
	bool is_in4 = bsp(a, b, c, pt4);
	bool is_in5 = bsp(a, b, c, pt5);
	bool is_in6 = bsp(a, b, c, pt6);
	bool is_in7 = bsp(a, b, c, pt7);
	bool is_in8 = bsp(a, b, c, pt8);
	bool is_in9 = bsp(a, b, c, pt9);
	bool is_in10 = bsp(a, b, c, pt10);
	bool is_in11 = bsp(a, b, c, pt11);
	bool is_in12 = bsp(a, b, c, pt12);

	std::cout << "pt1: this point is" << (is_in1 ? " in " : "n't in ") << "the rectangle" << std::endl;
	std::cout << "pt2: this point is" << (is_in2 ? " in " : "n't in ") << "the rectangle" << std::endl;
	std::cout << "pt3: this point is" << (is_in3 ? " in " : "n't in ") << "the rectangle" << std::endl;
	std::cout << "pt4: this point is" << (is_in4 ? " in " : "n't in ") << "the rectangle" << std::endl;
	std::cout << "pt5: this point is" << (is_in5 ? " in " : "n't in ") << "the rectangle" << std::endl;
	std::cout << "pt6: this point is" << (is_in6 ? " in " : "n't in ") << "the rectangle" << std::endl;
	std::cout << "pt7: this point is" << (is_in7 ? " in " : "n't in ") << "the rectangle" << std::endl;
	std::cout << "pt8: this point is" << (is_in8 ? " in " : "n't in ") << "the rectangle" << std::endl;
	std::cout << "pt9: this point is" << (is_in9 ? " in " : "n't in ") << "the rectangle" << std::endl;
	std::cout << "pt10: this point is" << (is_in10 ? " in " : "n't in ") << "the rectangle" << std::endl;
	std::cout << "pt11: this point is" << (is_in11 ? " in " : "n't in ") << "the rectangle" << std::endl;
	std::cout << "pt12: this point is" << (is_in12 ? " in " : "n't in ") << "the rectangle" << std::endl;
}

// https://umitsen.wordpress.com/2013/04/07/nokta-ucgenin-icinde-mi-degil-mi-test-etme/