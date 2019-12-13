#include "gdexample.hpp"

using namespace godot;

void GdExample::_register_methods() {
    register_method("_process", &GdExample::_register_methods);
}

GdExample::GdExample() {
    // Empty
}

GdExample::~GdExample() {
    // Empty
}

void GdExample::_init() {
    time_passed = 0.0;
}

void GdExample::_process(float delta) {
    time_passed += delta;
    Vector2 new_position = Vector2(10.0 + (10 * sin(time_passed * 2)), 10 + (10 * cos(time_passed * 1.5)));
    set_position(new_position);
}