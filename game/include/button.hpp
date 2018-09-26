//TODO discover how overwrite static attribute

#ifndef BUTTON_H
#define BUTTON_H

#include "game_object.hpp"
#include "image.hpp"
#include "game.hpp"
#include "keyboard_event.hpp"
#include "action.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

namespace mindscape {
  class Button : public engine::GameObject {
    private:
      Action *action;
      std::string param;
      
    public:
      Button(
        std::string p_name,
        std::pair<int, int> position,
        int priority)
        :engine::GameObject(
          p_name,
          position,
          priority,
          {}
      ){};

      ~Button(){};
      
      void set_action(Action *, std::string param);
      void on_event(GameEvent game_event);
  };
}

#endif
