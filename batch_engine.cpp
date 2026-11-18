#include <iostream>
#include <vector>

class HybridEngine {
public:
    explicit HybridEngine(int seed) : state_(seed) {}

    int render_dispatcher(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 58) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    HybridEngine obj(58);
    std::cout << obj.render_dispatcher(58) << std::endl;
    return 0;
}
