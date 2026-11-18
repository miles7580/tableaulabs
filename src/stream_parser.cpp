#include <iostream>
#include <vector>

class CoreHandler {
public:
    explicit CoreHandler(int seed) : state_(seed) {}

    int build_manager(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 89) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    CoreHandler obj(89);
    std::cout << obj.build_manager(89) << std::endl;
    return 0;
}
