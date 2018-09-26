#ifndef SCORPION_H
#define SCORPION_H

#include "game_object.hpp"
#include "keyboard_event.hpp"
#include "image.hpp"
#include "game.hpp"
#include "hitbox.hpp"
#include "observable.hpp"
#include "animation.hpp"
#include "enemy.hpp"
#include <iostream>
#include <vector>
#include <string>

namespace mindscape {
  class Scorpion : public Enemy {
    private:

      void initialize_state_map();
      void initialize_hitboxes();
      void initialize_animations();
      void initialize_as_physicable();
      void initialize_audio_effects();
      void on_attack(engine::GameObject *);
      void attack();
      void die(engine::GameObject*);
      bool same_nivel = false;
      engine::Animation *create_animation(
        std::string path,
        int sprite_lines,
        int sprite_columns,
        double duration,
        std::string direction
      );

    public:
      Scorpion(
        std::string name,
        std::pair<int, int> position,
        int priority
      );
      ~Scorpion(){};

      void move(engine::GameObject *);
      void on_event(GameEvent);
      void on_collision(engine::GameObject*, engine::Hitbox*, engine::Hitbox*);
      void notify(engine::Observable *);
  };

}

#endif
