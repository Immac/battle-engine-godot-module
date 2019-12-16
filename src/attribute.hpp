#ifndef ATTRIBUTE_HPP
#define ACTIOSN_HPP

#include <Godot.hpp>
#include <Sprite.hpp>

namespace godot {
class Attribute : public Node {
    GODOT_CLASS(Attribute, Node)

   private:
    // Empty
   public:
    Attribute();
    ~Attribute();
    void _do_stuff();
    static void _register_methods();
    void _init();
};
}  // namespace godot

#endif  // ATTRIBUTE_HPP