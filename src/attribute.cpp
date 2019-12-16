#include "attribute.hpp"

using namespace godot;

void Attribute::_register_methods() {
    register_method("_do_stuff", &Attribute::_do_stuff);
}

Attribute::Attribute() {
}

Attribute::~Attribute() {
}

void Attribute::_do_stuff() {
}

void Attribute::_init() {
}
