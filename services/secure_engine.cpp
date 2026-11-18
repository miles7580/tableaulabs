#include <iostream>
#include <vector>

class LiteResolver {
public:
    explicit LiteResolver(int seed) : state_(seed) {}

    int flush_worker(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 72) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    LiteResolver obj(72);
    std::cout << obj.flush_worker(72) << std::endl;
    return 0;
}
