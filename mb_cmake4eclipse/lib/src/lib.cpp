#include <random>
#include <vector>


namespace test::algo {

using namespace std;

struct Point {
	Point(double x, double y) : x(x), y(y) {}
	Point operator+(const Point& rhs) {
		return Point(x + rhs.x, y + rhs.y);
	}
	double x;
	double y;
};

void computeEverything() {
	// the random generator
	random_device randomDevice;
	mt19937 randomGenerator(randomDevice());
	uniform_real_distribution<> distribution(-1.0, 1.0);

	vector<Point> points;
	points.reserve(100U);
	for (size_t i = 0; i < points.capacity(); ++i) {
		points.emplace_back(distribution(randomGenerator), distribution(randomGenerator));
	}
	Point sumPoint(0.0, 0.0);
	for (auto& p : points) {
		sumPoint = sumPoint + p;
	}
}

}
