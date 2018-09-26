#ifndef HUD_GIRL_H
#define HUD_GIRL_H

#include "game_object.hpp"
#include "animation.hpp"
#include "image.hpp"
#include "keyboard_event.hpp"
#include "platform.hpp"
#include "observable.hpp"
#include "little_girl.hpp"
#include "star.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

namespace mindscape{
  class HudGirl : public engine::GameObject {
    private:
      void initialize_animations();
      engine::Image* create_image();
      engine::Animation* create_animation(
          std::string path,
          int sprite_lines,
          int sprite_columns,
          double duration,
          std::string direction);

    public:
      HudGirl(std::string name, std::pair<int, int> position, int priority);
      ~HudGirl(){};

      void notify(engine::Observable*);
  };
}

#endif
