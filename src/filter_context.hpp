/*
   Copyright (C) 2014 by Chris Beck <render787@gmail.com>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/

/**
 *
 * This class is an abstract base class which represents a display context
 * (game map, units, and teams) together with a TOD manager. This, plus
 * a lua kernel (currently a singleton) is sufficient to evaluate filters.
 *
 **/

#ifndef FILTER_CONTEXT_HPP_INCLUDED
#define FILTER_CONTEXT_HPP_INCLUDED

#include <vector>

class display_context;
class tod_manager;

class filter_context {
public:
	// accessors

	virtual const display_context & get_disp_context() const = 0;
	virtual const tod_manager & get_tod_man() const = 0;

	// Dtor

	virtual ~filter_context() {}
};

#endif
