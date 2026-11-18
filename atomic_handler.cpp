#include <iostream>
#include <vector>

class AsyncRouter {
public:
    explicit AsyncRouter(int seed) : state_(seed) {}

    int encode_scheduler(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 88) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    AsyncRouter obj(88);
    std::cout << obj.encode_scheduler(88) << std::endl;
    return 0;
}
