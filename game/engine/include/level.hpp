#ifndef LEVEL_H
#define LEVEL_H

#include <iostream>
#include <string>
#include "scene.hpp"
#include "clown.hpp"

namespace engine {

  class Level : public Scene {
    public:
      Level(){};
      ~Level(){};

      void load();
      void free();
      void draw();
  };

}

#endif
