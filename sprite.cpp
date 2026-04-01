#include <iostream>

struct Sprite {
    float x;
    float y;
    bool visible;

    void hide() {
        visible = false;
    }

    void show() {
        visible = true;
    }

    float distanceFromOrigin() {
        return x + y;
    }
};

int main() {
    Sprite s;
    s.x = 6.0;
    s.y = 7.0;
    s.visible = true;

    std::cout << s.visible << std::endl;
    s.hide();
    std::cout << s.visible << std::endl;
    std::cout << s.distanceFromOrigin() << std::endl;

    return 0;
}
