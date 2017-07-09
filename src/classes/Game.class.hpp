/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apineda <apineda@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 16:50:22 by apineda           #+#    #+#             */
/*   Updated: 2017/07/08 21:05:32 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_CLASS_H
#define GAME_CLASS_H

#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <string>
#include "Player.class.hpp"

class Game {
 public:
  Game();
  Game(std::string name);
  Game& operator=(Game const&);
  ~Game();

  WINDOW* wnd;
  void run();
  void screenCheck(Player& master);
  int xMax;
  int yMax;
};

#endif
