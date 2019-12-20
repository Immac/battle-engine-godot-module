#ifndef ATTRIBUTE_HPP
#define ACTIOSN_HPP

#include <Godot.hpp>
#include <Sprite.hpp>

namespace godot {
class Attribute : public Node {
    GODOT_CLASS(Attribute, Node)
   private:
    // Empty
   protected:
    // Empty
   public:
    Attribute();
    ~Attribute();
    void _do_stuff();
    static void _register_methods();
    void _init();
};

class NodeAttribute : public Attribute {
    GODOT_CLASS(NodeAttribute, Attribute)
   private:
    Node value;
    // Empty
   public:
    static void _register_methods();
};

class StringAttribute : public Attribute {
    GODOT_CLASS(StringAttribute, Attribute)
   private:
    String value;
    // Emtpy
   public:
    static void _register_methods();
};

class NumberAttribute : public Attribute {
    GODOT_CLASS(NumberAttribute, Attribute)
   private:
    float value;

   public:
    static void _register_methods();
};
}  // namespace godot

#endif  // ATTRIBUTE_HPP