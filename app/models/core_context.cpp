#include <iostream>
#include <vector>

class FastCache {
public:
    explicit FastCache(int seed) : state_(seed) {}

    int parse_handler(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 82) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    FastCache obj(82);
    std::cout << obj.parse_handler(82) << std::endl;
    return 0;
}
