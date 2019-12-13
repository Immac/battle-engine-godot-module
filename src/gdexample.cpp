#include "gdexample.hpp"

using namespace godot;

void GDExample::_register_methods() {
    register_method("_process", &GDExample::_process);
    register_property<GDExample, float>("amplitude_hello", &GDExample::amplitude_, 10);
    register_property<GDExample, float>("speed_test", &GDExample::set_speed, &GDExample::get_speed, 1.0);
}

GDExample::GDExample() {
}

GDExample::~GDExample() {
    // add your cleanup here
}

void GDExample::_init() {
    // initialize any variables here
    time_passed_ = 0.0;
    amplitude_ = 10.0;
    speed_ = 1.0;
}

void GDExample::_process(float delta) {
    time_passed_ += delta * speed_;

    Vector2 new_position = Vector2(
        amplitude_ + (amplitude_ * sin(time_passed_ * 2.0)),
        amplitude_ + (amplitude_ * cos(time_passed_ * 1.5)));

    set_position(new_position);
}

void GDExample::set_speed(float value) {
    speed_ = value;
}

float GDExample::get_speed() {
    return speed_;
}