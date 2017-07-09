/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MissileRain.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:54:25 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/07/09 15:15:46 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MISSILE_RAIN_H
# define MISSILE_RAIN_H

#include <iostream>
#include "Missile.class.hpp"

class MissileRain {
  MissileRain(void);
 public:
  MissileRain(int n);
  MissileRain(MissileRain const & src);
  MissileRain & operator=(MissileRain const &rhs);
  ~MissileRain(void);

  Missile *getData() const;
  unsigned int getDataSize() const;
  void update();
 private:
  Missile *_missileField;
  unsigned int _size;
};

#endif
