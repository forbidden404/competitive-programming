#include <iostream>
#include <stack>
#include <cstring>

struct Vector3D {
    private:
        const char *_direction;

    public:
        Vector3D(const char *dir): _direction(dir) { }
        void rotateY(int i);
        void rotateZ(int i);
        const char *getDirection();
};

void Vector3D::rotateY(int i) {
    if (i > 0) {
        if (!strcmp(_direction, "+x")) {
            _direction = "+y";
        } else if (!strcmp(_direction, "-x")) {
            _direction = "-y";
        } else if (!strcmp(_direction, "+y")) {
            _direction = "-x";
        } else if (!strcmp(_direction, "-y")) {
            _direction = "+x";
        }
    } else {
        if (!strcmp(_direction, "+x")) {
            _direction = "-y";
        } else if (!strcmp(_direction, "-x")) {
            _direction = "+y";
        } else if (!strcmp(_direction, "+y")) {
            _direction = "+x";
        } else if (!strcmp(_direction, "-y")) {
            _direction = "-x";
        }
    }
}

void Vector3D::rotateZ(int i) {
    if (i > 0) {
        if (!strcmp(_direction, "+x")) {
            _direction = "+z";
        } else if (!strcmp(_direction, "-x")) {
            _direction = "-z";
        } else if (!strcmp(_direction, "+z")) {
            _direction = "-x";
        } else if (!strcmp(_direction, "-z")) {
            _direction = "+x";
        }
    } else {
        if (!strcmp(_direction, "+x")) {
            _direction = "-z";
        } else if (!strcmp(_direction, "-x")) {
            _direction = "+z";
        } else if (!strcmp(_direction, "+z")) {
            _direction = "+x";
        } else if (!strcmp(_direction, "-z")) {
            _direction = "-x";
        }
    }
}

const char *Vector3D::getDirection() {
   return _direction;
}

int main() {
    int a;
    while (scanf("%d%*c", &a), a) {
        // 0 +x 1 -x 2 +y 3 -y 4 +z 5-z
        int actualDirection = 0;
        Vector3D vec("+x");
        for (int i = 0; i < (a - 1); i++) {
            char input[3];
            scanf("%s", input);
            if (strcmp(input, "+y") == 0) {
                vec.rotateY(1);
            } else if (strcmp(input, "-y") == 0) {
                vec.rotateY(-1);
            } else if (strcmp(input, "+z") == 0) {
                vec.rotateZ(1);
            } else if (strcmp(input, "-z") == 0) {
                vec.rotateZ(-1);
            }
        }

        printf("%s\n", vec.getDirection());
        scanf("%*c");
    }
}