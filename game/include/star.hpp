#ifndef STAR_H
#define STAR_H

#include <iostream>

#include "game_object.hpp"
#include "keyboard_event.hpp"
#include "image.hpp"
#include "game.hpp"
#include "hitbox.hpp"
#include "observable.hpp"
#include "animation.hpp"
#include <iostream>
#include <vector>
#include <string>

namespace mindscape {
  class Star : public engine::GameObject {
    private:
      void initialize_hitboxes();
      void initialize_animations();
      void initialize_audio_effects();
      engine::Animation* create_animation(
        std::string path,
        int sprite_lines,
        int sprite_columns,
        double duration,
        std::string direction
      );

    public:
      Star(std::string name, std::pair<int, int> position, int priority);
      ~Star(){};

      void on_event(GameEvent game_event);
      void on_collision(engine::GameObject*, engine::Hitbox*, engine::Hitbox*);
      void they_got_me();
  };

}

#endif
