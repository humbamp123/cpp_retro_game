/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 17:41:24 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/07/09 22:48:49 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

Character::Character(int x, int y, int maxX, int maxY, unsigned int level,
                     unsigned int hitPoints, unsigned int maxHitPoints,
                     unsigned int energyPoints, unsigned int maxEnergyPoints,
                     unsigned int attackDamage, char sprite,
                     std::string spriteString)
    : _x(x),
      _y(y),
      _maxX(maxX),
      _maxY(maxY),
      _level(level),
      _hitPoints(hitPoints),
      _maxHitPoints(maxHitPoints),
      _energyPoints(energyPoints),
      _maxEnergyPoints(maxEnergyPoints),
      _attackDamage(attackDamage),
      _sprite(sprite),
      _spriteString(spriteString) {}

Character::Character(void)
    : _x(1),
      _y(1),
      _maxX(0),
      _maxY(0),
      _level(1),
      _hitPoints(90),
      _maxHitPoints(100),
      _energyPoints(40),
      _maxEnergyPoints(50),
      _attackDamage(5),
      _sprite('X'),
      _spriteString(" ") {}

Character::Character(Character const &src) { *this = src; }

Character &Character::operator=(Character const &rhs) {
  this->_x = rhs._x;
  this->_y = rhs._y;
  this->_x = rhs._maxX;
  this->_y = rhs._maxY;
  this->_level = rhs._level;
  this->_hitPoints = rhs._hitPoints;
  this->_maxHitPoints = rhs._maxHitPoints;
  this->_energyPoints = rhs._energyPoints;
  this->_maxEnergyPoints = rhs._maxEnergyPoints;
  this->_attackDamage = rhs._attackDamage;
  this->_sprite = rhs._sprite;
  this->_spriteString = rhs._spriteString;
  return (*this);
}
Character::~Character(void) {}

int Character::getX(void) { return (this->_x); }

void Character::setX(int x) { this->_x = x; }

int Character::getY(void) { return (this->_y); }

void Character::setY(int y) { this->_y = y; }

int Character::getMaxX(void) { return (this->_maxX); }

int Character::getMaxY(void) { return (this->_maxY); }

void Character::setXYMax(int xmax, int ymax) {
  this->_maxX = xmax;
  this->_maxY = ymax;
}

void Character::setSprite(int sprite) { this->_sprite = sprite; }

unsigned int Character::getHitPoints(void) { return (this->_hitPoints); }

unsigned int Character::getMaxHitPoints(void) { return (this->_maxHitPoints); }

unsigned int Character::getEnergyPoints(void) { return (this->_energyPoints); }

unsigned int Character::getMaxEnergyPoints(void) {
  return (this->_maxEnergyPoints);
}

unsigned int Character::getAttackDamage(void) { return (this->_attackDamage); }

char Character::getSprite(void) { return (this->_sprite); }

void Character::clearSprite(void) { mvaddch(this->_y, this->_x, ' '); }

void Character::clearSpriteString(void) {
  mvaddch(this->_y, this->_x - 1, ' ');
  mvaddch(this->_y, this->_x, ' ');
  mvaddch(this->_y, this->_x + 1, ' ');
}

void Character::putSpriteString(void) {
  for (size_t i = 0; i < this->_spriteString.length(); i++) {
    mvaddch(this->_y, this->_x - 1 + i, this->_spriteString[i]);
  }
}

void Character::putSpriteString(int initcolor, int color) {
  start_color();
  init_pair(initcolor, color, COLOR_BLACK);

  attron(COLOR_PAIR(1));
  for (size_t i = 0; i < this->_spriteString.length(); i++) {
    mvaddch(this->_y, this->_x - 1 + i, this->_spriteString[i]);
  }
  attroff(COLOR_PAIR(1));
}

void Character::setLevel(int level) { this->_level = level; }

void Character::putSprite(void) { mvaddch(this->_y, this->_x, this->_sprite); }

void Character::putSprite(int initcolor, int color) {
  start_color();
  init_pair(initcolor, color, COLOR_BLACK);

  attron(COLOR_PAIR(initcolor));
  mvaddch(this->_y, this->_x, this->_sprite);
  attroff(COLOR_PAIR(initcolor));
}
