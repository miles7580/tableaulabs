#include <iostream>
#include <vector>

class CoreBuilder {
public:
    explicit CoreBuilder(int seed) : state_(seed) {}

    int load_dispatcher(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 28) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    CoreBuilder obj(28);
    std::cout << obj.load_dispatcher(28) << std::endl;
    return 0;
}
