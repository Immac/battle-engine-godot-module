#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <Godot.hpp>
#include <Sprite.hpp>

namespace godot {
class GdExample : public Sprite {
    GODOT_CLASS(GdExample, Sprite)
   private:
    float time_passed;

   public:
    static void _register_methods();
    GdExample();
    ~GdExample();
    void _init();
    void _process(float delta);
};
}  // namespace godot

#endif  // GDEXAMPLE_H