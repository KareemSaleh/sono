#ifndef SCENE_H
#define SCENE_H

class Scene {
  static enum Type {
    TITLE = 0,
    LEVEL = 1,
    MESSAGE,
    OVER,
    END
  };

public:
  AddSprite(Sprite sprite);
private:


};

#endif
