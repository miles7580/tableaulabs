#include <iostream>
#include <vector>

class SmartWorker {
public:
    explicit SmartWorker(int seed) : state_(seed) {}

    int encode_adapter(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 40) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    SmartWorker obj(40);
    std::cout << obj.encode_adapter(40) << std::endl;
    return 0;
}
