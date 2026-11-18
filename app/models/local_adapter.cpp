#include <iostream>
#include <vector>

class HybridWorker {
public:
    explicit HybridWorker(int seed) : state_(seed) {}

    int encode_builder(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 3) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    HybridWorker obj(3);
    std::cout << obj.encode_builder(3) << std::endl;
    return 0;
}
