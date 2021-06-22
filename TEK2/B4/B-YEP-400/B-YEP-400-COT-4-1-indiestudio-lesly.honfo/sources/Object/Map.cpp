/*
** EPITECH PROJECT, 2021
** indieStudio
** File description:
** Button
*/

#include "Engine.hpp"

Map::Map(const char *path)
{
    _path = path;
}

Map::~Map()
{
}

void Map::init(int posX, int posY, int height, int width)
{
    setPos(posX, posY);
    setRect(posX, posY, height, width);
    setTexture();
    _map = get_map_from_file();
}

void Map::setTexture()
{   _image = LoadImage(_path);
    _texture = LoadTextureFromImage(_image);
    UnloadImage(_image);
}

bool Map::set_action()
{
    Vector2 mouse_pos = GetMousePosition();
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)
        && (mouse_pos.x >= _rec.x && mouse_pos.x <= _rec.width)
            && (mouse_pos.y >= _rec.y && mouse_pos.y <= _rec.height))
        return (true);
    return (false);
}

void Map::setPos(float posX, float posY)
{
    _pos.x = posX;
    _pos.y = posY;
}

struct Vector2 Map::getPos()
{
    return (_pos);
}

void Map::setRect(int posX, int posY, int height, int width)
{
    _rec.height = height;
    _rec.width = width;
    _rec.x = posX;
    _rec.y = posY;
}

Texture2D Map::getTexture()
{
    return _texture;
}

Rectangle Map::getRect()
{
    return (_rec);
}

 std::string Map::get_map_from_file()
 {
    std::string line;
    int i = 0, p = 0, k = 0;
    std::vector<std::string> vec = {ASSETS_PATH"map/map.txt",  ASSETS_PATH"map/map1.txt",  ASSETS_PATH"map/map2.txt", ASSETS_PATH"map/map3.txt"};
    i = (rand() % (3 - 0 + 1)) + 0;
    std::ifstream myfile (vec[i]);
    if (myfile.is_open()) {
        while (getline (myfile, line))
           _map += line + '\n';
        myfile.close();
    }
    else 
        std::cout << "Unable to open file"; 
    
    p = (rand() % (208 - 0 + 1)) + 0;
    while (k != 15) {
        if (_map[p] != '\n' && _map[p] != 'X' && _map[p] != 'O') {
            _map[p] = '#';
            p = (rand() % (208 - 0 + 1)) + 0;
            k = k + 1;
        } else
             p = (rand() % (208 - 0 + 1)) + 0;
    }
    return _map;
 }

void Map::draw(int posX, int posY)
{
   float x = -7.5f;
   float y = -7.5f;

    Vector3 cubePosition = {x, 0.0f, y }; 
    for (auto it = _map.cbegin() ; it != _map.cend(); ++it) {
        if (*it == '\n') {
            x = -8.5f;
            y = y + 1;
        }
        if (*it == 'X'){
            DrawCube(cubePosition, 1.0f, 0.0f, 1.0f, BROWN);
            _map_box.push_back(cubePosition);
        }
        if (*it == '*') {
            DrawCube(cubePosition, 1.0f, 0.5f, 1.0f, MAROON);
            _map_box.push_back(cubePosition);
        }
        if (*it == '#') {
            DrawCube(cubePosition, 1.0f, 0.5f, 1.0f, GRAY);
            _map_box.push_back(cubePosition);
        }
        if (*it == ' ')
            DrawCube(cubePosition, 1.0f, 0.0f, 1.0f, DARKGREEN);
        if (*it == 'O')
            DrawCube(cubePosition, 1.0f, 0.0f, 1.0f, BLUE);
       
        x = x + 1;
        cubePosition = {x, 0.0f, y };
    }
}

std::vector<Vector3> Map::get_box_positions()
{
  std::vector<Vector3> map;
  return map;

}

void Map::destroy()
{
    UnloadTexture(this->_texture);
}

void Map::move_right()
{
}

void Map::move_left()
{
}

void Map::move_forward()
{
}

void Map::move_backward()
{
}