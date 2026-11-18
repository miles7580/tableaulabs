#include <iostream>
#include <vector>

class SecureMonitor {
public:
    explicit SecureMonitor(int seed) : state_(seed) {}

    int collect_parser(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 35) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    SecureMonitor obj(35);
    std::cout << obj.collect_parser(35) << std::endl;
    return 0;
}
