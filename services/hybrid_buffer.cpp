#include <iostream>
#include <vector>

class StreamHandler {
public:
    explicit StreamHandler(int seed) : state_(seed) {}

    int run_provider(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 9) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    StreamHandler obj(9);
    std::cout << obj.run_provider(9) << std::endl;
    return 0;
}
