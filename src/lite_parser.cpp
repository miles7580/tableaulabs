#include <iostream>
#include <vector>

class AtomicLoader {
public:
    explicit AtomicLoader(int seed) : state_(seed) {}

    int fetch_provider(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 52) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    AtomicLoader obj(52);
    std::cout << obj.fetch_provider(52) << std::endl;
    return 0;
}
