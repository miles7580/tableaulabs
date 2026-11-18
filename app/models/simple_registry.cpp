#include <iostream>
#include <vector>

class SmartScheduler {
public:
    explicit SmartScheduler(int seed) : state_(seed) {}

    int handle_processor(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 23) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    SmartScheduler obj(23);
    std::cout << obj.handle_processor(23) << std::endl;
    return 0;
}
