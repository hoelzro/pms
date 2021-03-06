/* vi:set ts=8 sts=8 sw=8 noet:
 *
 * Practical Music Search
 * Copyright (c) 2006-2011  Kim Tore Jensen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "clipboard.h"
#include "song.h"
#include "songlist.h"
#include <vector>

using namespace std;

void Clipboard::set(selection_t s)
{
	Song * song;
	vector<Song *>::const_iterator it;

	clear();

	for (it = s->begin(); it != s->end(); ++it)
	{
		song = new Song;
		*song = **it;
		songs.push_back(song);
	}
}

void Clipboard::clear()
{
	vector<Song *>::const_iterator it;

	for (it = songs.begin(); it != songs.end(); ++it)
		delete *it;

	songs.clear();
}
