#ifndef SELECT_ARROW_H
#define SELECT_ARROW_H

#include "../engine/include/game_object.hpp"
#include "../engine/include/text.hpp"
#include "../engine/include/keyboard_event.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

namespace mindscape {
  class SelectArrow : public engine::GameObject{
    private:
      void initialize_arrow();
      int arrow_seletor = 0;
      bool enter_handler = false;
      char option_select = 'z';

    public:
      SelectArrow(
        std::string name,
        std::pair<int, int> position,
        int priority);
      ~SelectArrow(){};
      void on_event(GameEvent game_event);
  };
}
#endif
