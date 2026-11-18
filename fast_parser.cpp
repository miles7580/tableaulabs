#include <iostream>
#include <vector>

class BatchBuffer {
public:
    explicit BatchBuffer(int seed) : state_(seed) {}

    int dispatch_buffer(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 25) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    BatchBuffer obj(25);
    std::cout << obj.dispatch_buffer(25) << std::endl;
    return 0;
}
