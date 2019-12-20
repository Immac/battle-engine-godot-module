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

void StringAttribute::_register_methods() {
    register_method("_do_stuff", &StringAttribute::_do_stuff);
    register_property<StringAttribute, String>("value", &StringAttribute::value, "");
}

void NumberAttribute::_register_methods() {
    register_method("_do_stuff", &NumberAttribute::_do_stuff);
    register_property<NumberAttribute, float>("value", &NumberAttribute::value, 0.0);
}

void StringAttribute::_register_methods() {
    register_method("_do_stuff", &StringAttribute::_do_stuff);
    register_property<StringAttribute, String>("value", &StringAttribute::value, "");
}
