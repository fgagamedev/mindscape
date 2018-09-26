#ifndef FIGHTER_H
#define FIGHTER_H

#include "game_object.hpp"
#include "keyboard_event.hpp"
#include "image.hpp"
#include <iostream>
#include <vector>
#include <string>

namespace mindscape {
  class Fighter {
    private:
      int max_hitpoints;
      int hitpoints;

    public:
      Fighter(int p_hitpoints):hitpoints(p_hitpoints),
        max_hitpoints(p_hitpoints){};
      ~Fighter(){};

      virtual void attack(){};
      virtual void on_attack(engine::GameObject *){};
      virtual void die(engine::GameObject*){};
      int get_hp();
      void set_hp(int);
      void heal(int);
      void hit(engine::GameObject *, int);
      bool is_life_full();
      bool is_alive();
  };
}

#endif
