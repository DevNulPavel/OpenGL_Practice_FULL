#ifndef UIMANAGER
#define UIMANAGER

#include <memory>
#include <list>
#include <glm.hpp>
#include "UIElement.h"

using namespace std;
using namespace glm;

#define UI_POS_ATTRIBUTE_LOCATION 0
#define UI_TEX_COORD_ATTRIBUTE_LOCATION 1

class UIManager{
public:
    UIManager(float width, float height);
    ~UIManager();
    void resize(float width, float height);
    void addElement(const UIElementPtr& element);
    void removeElement(const UIElementPtr& element);
    
    void draw(float delta);
    void tappedOnPos(const vec2& pos);

private:
    int _shaderProgram;
    int _texture0Location;
    int _matrixLocation;
    vec2 _size;

    mat4 _projectionMatrix;
    list<UIElementPtr> _items;
};

#endif
