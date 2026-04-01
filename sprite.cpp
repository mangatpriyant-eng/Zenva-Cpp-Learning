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
};

int main() {
    Sprite s;
    s.x = 10.0;
    s.y = 5.0;
    s.visible = true;

    std::cout << s.visible << std::endl;
    s.hide();
    std::cout << s.visible << std::endl;

    return 0;
}
